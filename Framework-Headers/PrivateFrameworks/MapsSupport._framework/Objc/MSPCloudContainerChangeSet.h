//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLock, NSMutableSet;

@interface MSPCloudContainerChangeSet : NSObject
{
    NSMutableSet *_changes;
    NSMutableSet *_deletes;
    NSLock *_lock;
}

@property (readonly, nonatomic) NSDictionary *allChangesById;
@property (readonly, nonatomic) NSArray *changedRecords;
@property (readonly, nonatomic) NSArray *deletedRecords;
@property (readonly, nonatomic) BOOL hasChanges;

- (void).cxx_destruct;
- (void)addChangedRecord:(id)arg1;
- (void)addDeletedRecord:(id)arg1;
- (void)addRecord:(id)arg1;
- (id)description;
- (id)init;
- (void)threadSafeAddReplicaRecord:(id)arg1 toSet:(id)arg2;
- (id)threadSafeArrayFromSet:(id)arg1;

@end
