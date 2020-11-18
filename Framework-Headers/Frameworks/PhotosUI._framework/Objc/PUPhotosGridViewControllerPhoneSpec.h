//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewControllerSpec.h>

@interface PUPhotosGridViewControllerPhoneSpec : PUPhotosGridViewControllerSpec
{
}

+ (struct CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 bestSpacing:(double *)arg3 bestInset:(double *)arg4;
- (id)albumPickerViewControllerSpec;
- (struct CGSize)baseInterItemSpacing;
- (BOOL)canDisplayOptionsInPopover;
- (BOOL)canDisplaySearchActionInNavigationBar;
- (BOOL)canDisplaySlideshowButton;
- (long long)cellFillMode;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (long long)forceLoadInitialSectionCount;
- (struct UIEdgeInsets)gridContentInsets;
- (id)photosPickerViewControllerSpec;
- (BOOL)shouldPlaceSelectAllButtonInRightNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (int)thumbnailImageFormat;

@end
