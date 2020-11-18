//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/ENGroupContextCacheMiddleware-Protocol.h>
#import <IDS/ENGroupContextDataSource-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSGroupContextDataSource : NSObject <ENGroupContextDataSource, ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_groupContextCacheMiddleware;
- (id)_groupContextDataSource;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 fetchGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 upsertGroupWithInfo:(id)arg2 previousGroup:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)groupFromPublicDataRepresentation:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)participantsForCypher:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)publicDataRepresentationForGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateCachedGroup:(id)arg1 isParentOfGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
