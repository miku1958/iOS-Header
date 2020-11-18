//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>
#import <PhotosUI/PLCloudFeedNavigating-Protocol.h>

@class NSString, PHAsset, PHAssetCollection, PLCloudSharedAlbum, PLCloudSharedComment, PLManagedAsset, UIViewController;

@protocol PLRootLibraryNavigationController <NSObject, PLCloudFeedNavigating>
- (BOOL)albumIsAvailableForNavigation:(struct NSObject *)arg1;
- (BOOL)assetIsAvailableForNavigation:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2;
- (BOOL)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1;
- (BOOL)assetIsAvailableForNavigationInMoments:(PLManagedAsset *)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
- (BOOL)cloudFeedIsAvailableForNavigation;
- (BOOL)commentIsAvailableForNavigation:(PLCloudSharedComment *)arg1 inAsset:(PLManagedAsset *)arg2;
- (BOOL)contentModeIsAvailableForNavigation:(int)arg1;
- (void)navigateToAlbum:(struct NSObject *)arg1 animated:(BOOL)arg2 completion:(void (^)(UIViewController *))arg3;
- (void)navigateToAsset:(PLManagedAsset *)arg1 animated:(BOOL)arg2;
- (void)navigateToAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2 animated:(BOOL)arg3;
- (void)navigateToCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToCloudFeedWithCompletion:(void (^)(UIViewController *))arg1;
- (void)navigateToComment:(PLCloudSharedComment *)arg1 forAsset:(PLManagedAsset *)arg2 animated:(BOOL)arg3;
- (void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)navigateToLastYearPhotosSearchAnimated:(BOOL)arg1;
- (UIViewController *)navigateToMemoryWithLocalIdentifier:(NSString *)arg1;
- (void)navigateToOneUpForAsset:(PHAsset *)arg1 inAssetContainer:(PHAssetCollection *)arg2 animated:(BOOL)arg3;
- (void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
- (void)navigateToPhotosSearchAnimated:(BOOL)arg1;
- (void)navigateToRevealAlbum:(struct NSObject *)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAsset:(PLManagedAsset *)arg1 inAlbum:(struct NSObject *)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealCloudFeedAsset:(PLManagedAsset *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedComment:(PLCloudSharedComment *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(PLCloudSharedAlbum *)arg1 completion:(void (^)(UIViewController *))arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
@end

