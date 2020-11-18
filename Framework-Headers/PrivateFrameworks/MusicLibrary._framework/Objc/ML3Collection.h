//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/ML3Entity.h>

@interface ML3Collection : ML3Entity
{
}

+ (id)artworkCacheIDProperty;
+ (BOOL)canonicalizeCollectionRepresentativeItemsWithWriteConnection:(id)arg1;
+ (id)collectionEntityClasses;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (BOOL)removeOrphanedCollectionsInLibrary:(id)arg1 withConnection:(id)arg2;
+ (id)trackForeignPersistentID;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned long long)arg3;
+ (BOOL)updateRepresentativeItemPersistentIDsInLibrary:(id)arg1 persistentIDs:(const long long *)arg2 count:(unsigned long long)arg3 usingConnection:(id)arg4;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (void)updateCloudStatus;
- (void)updateRepresentativeCollectionValues:(id)arg1 existingRepresentativePersistentID:(unsigned long long)arg2 forUpdateTrackValues:(id)arg3;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2;
- (void)updateTrackValues:(id)arg1;

@end

