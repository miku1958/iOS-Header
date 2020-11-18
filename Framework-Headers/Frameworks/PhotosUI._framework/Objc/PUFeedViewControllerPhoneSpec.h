//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedViewControllerSpec.h>

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec
{
}

- (BOOL)canUseSimplePreheatManager;
- (double)collectionViewContentInset;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(BOOL)arg7;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (id)gridSpec;
- (long long)largeNumberOfSubjectsForLikes;
- (struct CGSize)minimumVideoTileSize;
- (id)photosPickerSpec;
- (long long)promptStyle;
- (BOOL)shouldHideBarsInLandscape;
- (BOOL)shouldUseFullscreenLayout;
- (struct UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (struct CGSize)thumbnailSize;

@end
