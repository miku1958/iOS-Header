//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLAssetContainer-Protocol.h>

@class NSDictionary, NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSPredicate, NSString, NSURL, UIImage;

@protocol PLAlbumProtocol <PLAssetContainer>

@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, strong, nonatomic) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (strong, nonatomic) NSString *importSessionID;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (readonly, strong, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) int kindValue;
@property (readonly, strong, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (readonly, strong, nonatomic) UIImage *posterImage;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (strong, nonatomic) NSDictionary *slideshowSettings;
@property (readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;

- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

@optional
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
- (void)setUINotificationsEnabled:(BOOL)arg1;
@end

