//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSCKDatabase;
@protocol OS_dispatch_queue;

@interface IDSCloudKitKeyElectionStore : NSObject
{
    IDSCKDatabase *_database;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) IDSCKDatabase *database; // @synthesize database=_database;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (BOOL)isItemNotFoundError:(id)arg1;
- (void).cxx_destruct;
- (id)_itemFromRecord:(id)arg1 error:(id *)arg2;
- (id)_recordFromItem:(id)arg1;
- (id)_recordID;
- (void)fetchAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 queue:(id)arg2;
- (void)removeAccountIdentityItemWithCompletion:(CDUnknownBlockType)arg1;
- (void)storeAccountIdentityItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

