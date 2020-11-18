//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewControllerCommonPhoneSpec.h>

@interface PUAlbumListViewControllerCommonImagePickerSpec : PUAlbumListViewControllerCommonPhoneSpec
{
}

- (long long)cellContentViewLayout;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize)imageSize;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (BOOL)shouldUseCollageForCloudFeedPlaceholder;
- (BOOL)shouldUseTableView;
- (BOOL)showsDeleteButtonOnCellContentView;
- (struct CGSize)stackSize;
- (unsigned long long)stackViewStyle;

@end

