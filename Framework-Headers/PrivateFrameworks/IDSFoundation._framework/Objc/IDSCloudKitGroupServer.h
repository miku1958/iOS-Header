//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCKDatabase;
@protocol OS_dispatch_queue;

@interface IDSCloudKitGroupServer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IDSCKDatabase *_database;
}

@property (strong, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)fetchGroupWithID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchGroupsWithStableGroupID:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (void)q_groupFromRecord:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveGroup:(id)arg1 inContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

