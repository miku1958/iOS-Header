//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPDKStorageUtils : NSObject
{
}

+ (void)_registerForSyncNotifications;
+ (id)entityStream;
+ (void)initialize;
+ (id)namedEntityRecordFromEvent:(id)arg1;
+ (id)readOnlyKnowledgeStore;
+ (id)readWriteKnowledgeStore;
+ (id)registerForNamedEntitiesRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForNamedEntitiesRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForTopicsRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
+ (id)registerForTopicsRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
+ (void)removeObserver:(id)arg1;
+ (id)topicRecordFromEvent:(id)arg1;
+ (id)topicStream;

@end

