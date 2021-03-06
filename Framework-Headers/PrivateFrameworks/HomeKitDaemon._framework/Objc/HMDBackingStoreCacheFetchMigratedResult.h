//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult : HMDBackingStoreOperation
{
    BOOL _update;
    BOOL _migration;
    HMDBackingStoreCacheGroup *_group;
    CDUnknownBlockType _fetchResult;
}

@property (copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property (strong, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property (readonly) BOOL migration; // @synthesize migration=_migration;
@property (readonly) BOOL update; // @synthesize update=_update;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 update:(BOOL)arg2 migration:(BOOL)arg3 fetchResult:(CDUnknownBlockType)arg4;
- (id)mainReturningError;

@end

