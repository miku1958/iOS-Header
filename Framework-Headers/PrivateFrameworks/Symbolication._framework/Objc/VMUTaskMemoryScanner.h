//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/VMUCommonGraphInterface-Protocol.h>

@class NSMutableArray, NSString, VMUClassInfoMap, VMUDebugTimer, VMUObjectIdentifier, VMUProcessObjectGraph, VMURangeArray, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface>
{
    unsigned int _task;
    int _pid;
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    struct _VMURegionMap *_regionMap;
    VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    struct _VMUInstanceValues *_instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    id *_classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    struct _VMUScanLocationCache **_scanCaches;
    BOOL _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    unsigned int _scanningMask;
    VMUDebugTimer *_debugTimer;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_binaryImagesDescription;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
    BOOL _abandonedMarkingEnabled;
    BOOL _saveNodeLabelsInGraph;
    VMUProcessObjectGraph *_processObjectGraph;
    void *_userMarkedAbandoned;
    unsigned long long _cfPasteboardReservedBase;
}

@property (nonatomic) BOOL abandonedMarkingEnabled; // @synthesize abandonedMarkingEnabled=_abandonedMarkingEnabled;
@property (readonly, nonatomic) NSString *binaryImagesDescription; // @synthesize binaryImagesDescription=_binaryImagesDescription;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned int mallocNodeCount;
@property (nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
@property (readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) VMUObjectIdentifier *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly, nonatomic) NSString *processDescriptionString; // @synthesize processDescriptionString=_processDescriptionString;
@property (readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionsCount;
@property (nonatomic) BOOL saveNodeLabelsInGraph; // @synthesize saveNodeLabelsInGraph=_saveNodeLabelsInGraph;
@property (nonatomic) unsigned int scanningMask; // @synthesize scanningMask=_scanningMask;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int task; // @synthesize task=_task;
@property (readonly, nonatomic) unsigned int vmPageSize;
@property (readonly, nonatomic) unsigned int zoneCount; // @synthesize zoneCount=_zonesCount;

+ (void)initialize;
+ (id)nodeDescription:(CDStruct_599faf0f)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3;
+ (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(CDStruct_599faf0f)arg2 destinationNode:(CDStruct_599faf0f)arg3 sortedVMRegions:(id)arg4 symbolicator:(struct _CSTypeRef)arg5 alignmentSpacing:(unsigned int)arg6;
- (void).cxx_destruct;
- (void)_buildRegionPageBlockMaps;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_destroyLinearClassInfos;
- (void)_findMarkedAbandonedBlocks;
- (void)_fixupBlockIsas;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(BOOL)arg3 actions:(CDUnknownBlockType)arg4;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int *)arg1 nodeCount:(unsigned int)arg2 recorder:(CDUnknownBlockType)arg3;
- (void)_sortAndClassifyBlocks;
- (void)_sortBlocks;
- (BOOL)_suspend;
- (void)_updateLinearClassInfos;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)addRootNodesFromTask;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
- (void *)contentForNode:(unsigned int)arg1;
- (void *)copyUserMarked;
- (void)dealloc;
- (void)detachFromTask;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasLabelsForNodes;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)labelForNode:(unsigned int)arg1;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)processSnapshotGraph;
- (id)processSnapshotGraphWithMallocStackLogs:(BOOL)arg1;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
- (void)refineTypesWithOverlay:(id)arg1;
- (void)removeRootReachableNodes;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (BOOL)validateAddressRange:(struct _VMURange)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;

@end

