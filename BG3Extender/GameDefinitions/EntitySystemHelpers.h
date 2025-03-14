#pragma once

#include <GameDefinitions/EntitySystem.h>
#include <GameDefinitions/GuidResources.h>

BEGIN_NS(ecs)

enum class TypeIdContext
{
	Replication,
	Component,
	OneFrameComponent,
	System,
	ImmutableData
};

struct IndexSymbolInfo
{
	char const* name;
	int32_t* context;
};

class EntitySystemHelpersBase : public Noncopyable<EntitySystemHelpersBase>
{
public:
	EntitySystemHelpersBase();

	inline std::optional<ComponentTypeIndex> GetComponentIndex(STDString const& type) const
	{
		auto it = componentNameToIndexMappings_.find(type);
		if (it != componentNameToIndexMappings_.end() && it->second.ComponentIndex != UndefinedIndex) {
			return it->second.ComponentIndex;
		} else {
			return {};
		}
	}

	inline std::optional<STDString const*> GetComponentName(ComponentTypeIndex index) const
	{
		auto it = componentIndexToNameMappings_.find(index);
		if (it != componentIndexToNameMappings_.end()) {
			return it->second;
		} else {
			return {};
		}
	}

	inline std::optional<ExtComponentType> GetComponentType(ComponentTypeIndex index) const
	{
		auto it = componentIndexToTypeMappings_.find(index);
		if (it != componentIndexToTypeMappings_.end()) {
			return it->second;
		} else {
			return {};
		}
	}

	inline std::optional<ExtComponentType> GetComponentType(ReplicationTypeIndex index) const
	{
		auto it = replicationIndexToTypeMappings_.find(index);
		if (it != replicationIndexToTypeMappings_.end()) {
			return it->second;
		} else {
			return {};
		}
	}

	inline std::optional<ComponentTypeIndex> GetComponentIndex(ExtComponentType type) const
	{
		auto idx = componentIndices_[(unsigned)type];
		if (idx != UndefinedIndex) {
			return idx;
		} else {
			return {};
		}
	}

	inline std::size_t GetComponentSize(ExtComponentType type) const
	{
		return componentSizes_[(unsigned)type];
	}

	std::optional<ReplicationTypeIndex> GetReplicationIndex(ExtComponentType type) const
	{
		auto idx = replicationIndices_[(unsigned)type];
		if (idx != -1) {
			return idx;
		} else {
			return {};
		}
	}

	template <class T>
	T* GetComponent(char const* nameGuid)
	{
		return reinterpret_cast<T*>(GetRawComponent(nameGuid, T::ComponentType));
	}

	template <class T>
	T* GetComponent(FixedString const& guid)
	{
		return reinterpret_cast<T*>(GetRawComponent(guid, T::ComponentType));
	}

	template <class T>
	T* GetComponent(EntityHandle entityHandle)
	{
		return reinterpret_cast<T*>(GetRawComponent(entityHandle, T::ComponentType));
	}

	template <class T>
	T* GetComponent(NetId netId)
	{
		ERR("FIXME");
		return nullptr;
	}

	virtual EntityWorld* GetEntityWorld() = 0;

	template <class T>
	std::optional<resource::GuidResourceBank<T>*> GetResourceManager()
	{
		auto mgr = GetRawResourceManager(T::ResourceManagerType);
		if (mgr) {
			return static_cast<resource::GuidResourceBank<T>*>(mgr);
		} else {
			return {};
		}
	}

	inline std::optional<int32_t> GetQueryIndex(STDString const& type) const
	{
		auto it = queryMappings_.find(type);
		if (it != queryMappings_.end() && it->second != UndefinedIndex) {
			return it->second;
		} else {
			return {};
		}
	}

	Query* GetQuery(ExtQueryType type);

	BitSet<> * GetReplicationFlags(EntityHandle const& entity, ExtComponentType type);
	BitSet<> * GetOrCreateReplicationFlags(EntityHandle const& entity, ExtComponentType type);
	BitSet<> * GetReplicationFlags(EntityHandle const& entity, ReplicationTypeIndex replicationType);
	BitSet<> * GetOrCreateReplicationFlags(EntityHandle const& entity, ReplicationTypeIndex replicationType);
	void NotifyReplicationFlagsDirtied();

	void* GetRawComponent(EntityHandle entityHandle, ExtComponentType type);
	EntityHandle GetEntityHandle(Guid uuid);
	UuidToHandleMappingComponent* GetUuidMappings();

protected:
	static constexpr int32_t UndefinedIndex{ -1 };

	void MapComponentIndices(char const* componentName, ExtComponentType type, std::size_t size);
	void MapQueryIndex(char const* name, ExtQueryType type);
	void MapResourceManagerIndex(char const* componentName, ExtResourceManagerType type);
	void UpdateComponentMappings();

private:
	struct IndexMappings
	{
		ComponentTypeIndex ComponentIndex{ UndefinedComponent };
		ReplicationTypeIndex ReplicationIndex{ UndefinedReplicationComponent };
	};

	std::array<ComponentTypeIndex, (size_t)ExtComponentType::Max> componentIndices_;
	std::array<std::size_t, (size_t)ExtComponentType::Max> componentSizes_;
	std::array<ReplicationTypeIndex, (size_t)ExtComponentType::Max> replicationIndices_;
	std::array<int32_t, (size_t)ExtQueryType::Max> queryIndices_;
	std::array<int32_t, (size_t)ExtResourceManagerType::Max> staticDataIndices_;

	std::unordered_map<STDString, IndexMappings> componentNameToIndexMappings_;
	std::unordered_map<ComponentTypeIndex, STDString const*> componentIndexToNameMappings_;
	std::unordered_map<ComponentTypeIndex, ExtComponentType> componentIndexToTypeMappings_;
	std::unordered_map<ReplicationTypeIndex, ExtComponentType> replicationIndexToTypeMappings_;
	std::unordered_map<STDString, int32_t> systemIndexMappings_;
	std::vector<STDString const*> systemTypeIdToName_;
	std::unordered_map<STDString, int32_t> queryMappings_;
	std::vector<STDString const*> queryTypeIdToName_;
	std::unordered_map<STDString, int32_t> staticDataMappings_;
	std::vector<STDString const*> staticDataIdToName_;

	bool initialized_{ false };

	void BindSystem(std::string_view name, int32_t id);
	void BindQuery(std::string_view name, int32_t id);
	void BindStaticData(std::string_view name, int32_t id);
	void BindComponent(std::string_view name, int32_t id);
	void BindReplication(std::string_view name, int32_t id);
	void* GetRawComponent(char const* nameGuid, ExtComponentType type);
	void* GetRawComponent(FixedString const& guid, ExtComponentType type);
	resource::GuidResourceBankBase* GetRawResourceManager(ExtResourceManagerType type);
};

class ServerEntitySystemHelpers : public EntitySystemHelpersBase
{
public:
	void Setup();

	EntityWorld* GetEntityWorld() override;
};

class ClientEntitySystemHelpers : public EntitySystemHelpersBase
{
public:
	void Setup();

	EntityWorld* GetEntityWorld() override;
};

END_NS()
