//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface NSManagedObject (IC)
+ (id)objectFromObjectID:(id)arg1 context:(id)arg2;
+ (id)objectIDsFromObjects:(id)arg1;
+ (id)objectIDsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)objectIDsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)objectsFromObjectIDs:(id)arg1 context:(id)arg2;
+ (id)objectsFromObjectIDs:(id)arg1 relationshipKeyPathsForPrefetching:(id)arg2 context:(id)arg3;
+ (id)objectsMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3;
+ (id)objectsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;
+ (id)permanentObjectIDsFromObjects:(id)arg1;
+ (id)resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 relationshipKeyPathsForPrefetching:(id)arg4 context:(id)arg5;
- (BOOL)obtainPermanentObjectIDIfNecessary;
- (id)permanentObjectID;
- (void)postNotificationOnMainThreadAfterSaveWithName:(id)arg1;
- (void)postNotificationOnMainThreadWithName:(id)arg1;
@end
