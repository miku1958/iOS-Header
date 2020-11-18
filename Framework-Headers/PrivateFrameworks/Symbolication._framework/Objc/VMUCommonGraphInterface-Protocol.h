//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Symbolication/NSObject-Protocol.h>

@class NSString, VMUClassInfoMap;

@protocol VMUCommonGraphInterface <NSObject>

@property (readonly, nonatomic) unsigned int nodeCount;
@property (readonly, nonatomic) unsigned int nodeNamespaceSize;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) VMUClassInfoMap *realizedClasses;
@property (readonly, nonatomic) unsigned int regionCount;
@property (readonly, nonatomic) unsigned int vmPageSize;
@property (readonly, nonatomic) unsigned int zoneCount;

- (unsigned int)enumerateObjectsWithBlock:(void (^)(unsigned int, struct, BOOL *))arg1;
- (unsigned int)enumerateReferencesWithBlock:(void (^)(unsigned int, unsigned int, unsigned int, struct, BOOL *))arg1;
- (unsigned int)enumerateRegionsWithBlock:(void (^)(VMUVMRegion *, BOOL *))arg1;
- (NSString *)labelForNode:(unsigned int)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
- (NSString *)zoneNameForIndex:(unsigned int)arg1;
@end
