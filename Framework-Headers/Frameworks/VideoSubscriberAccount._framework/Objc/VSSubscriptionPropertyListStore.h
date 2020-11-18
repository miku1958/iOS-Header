//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSAtomicStore.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionPropertyListStore : NSAtomicStore
{
}

+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (BOOL)load:(id *)arg1;
- (id)newCacheNodeForManagedObject:(id)arg1;
- (id)newReferenceObjectForManagedObject:(id)arg1;
- (BOOL)save:(id *)arg1;
- (id)type;
- (void)updateCacheNode:(id)arg1 fromManagedObject:(id)arg2;

@end
