//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup;

@interface HMDBackingStoreCacheFetchRecordMappings : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    CDUnknownBlockType _fetchResult;
}

@property (copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property (strong, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property (strong, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)initWithShareGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)mainReturningError;

@end
