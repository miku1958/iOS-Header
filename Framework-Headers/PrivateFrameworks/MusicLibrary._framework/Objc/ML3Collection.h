//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
{
}

+ (BOOL)_updateRepresentativeItemsForPersistentIDs:(id)arg1 usingConnection:(id)arg2;
+ (id)artworkCacheIDProperty;
+ (BOOL)canonicalizeCollectionRepresentativeItemsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)collectionEntityClasses;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)removeOrphanedCollectionsInLibrary:(id)arg1 usingConnection:(id)arg2;
+ (id)trackForeignPersistentID;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
