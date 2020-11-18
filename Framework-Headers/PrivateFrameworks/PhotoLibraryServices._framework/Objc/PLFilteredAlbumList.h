//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMapperDataSource-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappingCache-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;
@protocol NSObject><NSCopying, PLIndexMappingCache;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    int filter;
    PLManagedAlbumList *backingAlbumList;
    NSPredicate *predicate;
}

@property (strong, nonatomic) NSMutableOrderedSet *_albums;
@property (readonly, strong, nonatomic) NSString *_prettyDescription;
@property (readonly, strong, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) short albumListType;
@property (readonly, strong, nonatomic) NSMutableOrderedSet *albums;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
@property (strong, nonatomic) PLManagedAlbumList *backingAlbumList; // @synthesize backingAlbumList;
@property (readonly, copy, nonatomic) id<NSObject><NSCopying> cachedIndexMapState;
@property (readonly, nonatomic) BOOL canEditAlbums;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter; // @synthesize filter;
@property (readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) PLIndexMapper *indexMapper;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, strong, nonatomic) PLPhotoLibrary *photoLibrary;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;
- (void).cxx_destruct;
- (void)_backingContextDidChange:(id)arg1;
- (void)_invalidateFilteredIndexes;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (BOOL)canEditContainers;
- (id)containers;
- (id)containersRelationshipName;
- (unsigned long long)countOfFilteredAlbums;
- (void)dealloc;
- (Class)derivedChangeNotificationClass;
- (void)enumerateDerivedAlbumLists:(CDUnknownBlockType)arg1;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (void)getFilteredAlbums:(id *)arg1 range:(struct _NSRange)arg2;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)arg1;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned long long)arg2;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)needsReordering;
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)registerDerivedAlbumList:(struct NSObject *)arg1;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)arg1;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)setNeedsReordering;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)updateAlbumsOrderIfNeeded;

@end

