//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, HMDBackingStoreCacheShareGroup, NSArray, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchModelObjects : HMDBackingStoreOperation
{
    HMDBackingStoreCacheGroup *_group;
    HMDBackingStoreCacheShareGroup *_share;
    CDUnknownBlockType _fetchResult;
    NSArray *_uuids;
    NSArray *_names;
    NSUUID *_parent;
    NSString *_type;
}

@property (copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property (strong, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property (strong, nonatomic) NSArray *names; // @synthesize names=_names;
@property (strong, nonatomic) NSUUID *parent; // @synthesize parent=_parent;
@property (strong, nonatomic) HMDBackingStoreCacheShareGroup *share; // @synthesize share=_share;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;
@property (strong, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;

- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 names:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(CDUnknownBlockType)arg4;
- (id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithNames:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)initWithParent:(id)arg1 type:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithShareGroup:(id)arg1 names:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithShareGroup:(id)arg1 parent:(id)arg2 type:(id)arg3 fetchResult:(CDUnknownBlockType)arg4;
- (id)initWithShareGroup:(id)arg1 uuids:(id)arg2 fetchResult:(CDUnknownBlockType)arg3;
- (id)initWithUUIDs:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;
- (id)mainReturningError;

@end

