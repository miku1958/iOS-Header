//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

@property (readonly, strong, nonatomic) NSString *_prettyDescription;
@property (readonly, strong, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter; // @synthesize filter=_filter;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;

+ (struct NSObject *)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)_invalidateAllAlbums;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (short)albumListType;
- (id)albums;
- (void)assetContainerListDidChange:(id)arg1;
- (BOOL)canEditAlbums;
- (BOOL)canEditContainers;
- (id)containers;
- (id)containersRelationshipName;
- (void)dealloc;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (BOOL)isEmpty;
- (id)managedObjectContext;
- (BOOL)needsReordering;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)setNeedsReordering;
- (void)updateAlbumsOrderIfNeeded;

@end

