//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUAlbumListViewControllerCommonPhoneSpec.h>

@interface PUAlbumListViewControllerPhoneSpec : PUAlbumListViewControllerCommonPhoneSpec
{
}

- (long long)cellContentViewLayout;
- (struct CGSize)cellSizeForStackSize:(struct CGSize)arg1;
- (void)configureGridLayout:(id)arg1 forLayoutReferenceSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void)configureStackViewWithGridStyle:(id)arg1;
- (unsigned long long)folderStackViewStyle;
- (struct CGSize)imageSize;
- (struct CGSize)imageSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (id)nameOfAddSharedAlbumPlaceholderImage;
- (id)nameOfEmptyAlbumPlaceholderImage;
- (id)nameOfEmptySharedAlbumPlaceholderImage;
- (id)nameOfHiddenAlbumPlaceholderImage;
- (id)nameOfRecentlyDeletedAlbumPlaceholderImage;
- (double)sectionFooterHeight;
- (double)sectionHeaderHeight;
- (struct UIEdgeInsets)sectionInsetsForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (BOOL)shouldShowSectionHeaders;
- (BOOL)shouldUseTableView;
- (struct CGSize)stackSize;
- (struct CGSize)stackSizeForLayoutReferenceSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (unsigned long long)stackViewStyle;

@end

