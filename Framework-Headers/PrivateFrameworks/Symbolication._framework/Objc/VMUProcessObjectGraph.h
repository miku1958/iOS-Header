//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/VMUObjectGraph.h>

#import <Symbolication/VMUCommonGraphInterface-Protocol.h>

@class NSArray, NSMutableArray, NSString, VMUClassInfoMap;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface>
{
    int _pid;
    unsigned int _kernPageSize;
    unsigned long long _machAbsolute;
    CDUnknownBlockType _regionProvider;
    NSMutableArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_procDescription;
    NSString *_procName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL is64bit;
@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionCount;
@property (nonatomic) unsigned long long snapshotMachTime; // @synthesize snapshotMachTime=_machAbsolute;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *toolHeaderDescription;
@property (readonly, nonatomic) unsigned int vmPageSize; // @synthesize vmPageSize=_kernPageSize;
@property (readonly, nonatomic) unsigned int zoneCount;

- (unsigned int)activeRegionCount;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (void)dealloc;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithArchived:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNodes:(unsigned int)arg1 pid:(int)arg2 zoneNames:(id)arg3 classInfoMap:(id)arg4 regionCount:(unsigned int)arg5 nodeProvider:(CDUnknownBlockType)arg6 regionProvider:(CDUnknownBlockType)arg7;
- (void)internalizeNodes;
- (id)labelForNode:(unsigned int)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;

@end
