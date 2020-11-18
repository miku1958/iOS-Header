//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSIndexPath, NSIndexSet, PUSectionedGridLayout, PUSectionedGridLayoutInvalidationContext;

@protocol PUSectionedGridLayoutDelegate <NSObject>

@optional
- (long long)numberOfVisualSectionsForSectionedGridLayout:(PUSectionedGridLayout *)arg1;
- (double)sectionedGridLayout:(PUSectionedGridLayout *)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(PUSectionedGridLayout *)arg1 aspectRatioForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didInvalidateWithContext:(PUSectionedGridLayoutInvalidationContext *)arg2;
- (void)sectionedGridLayout:(PUSectionedGridLayout *)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (struct UIEdgeInsets)sectionedGridLayout:(PUSectionedGridLayout *)arg1 finalContentInsetForCurrentContentInset:(struct UIEdgeInsets)arg2;
- (long long)sectionedGridLayout:(PUSectionedGridLayout *)arg1 maximumRowsForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(PUSectionedGridLayout *)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (NSIndexSet *)sectionedGridLayout:(PUSectionedGridLayout *)arg1 sectionsForVisualSection:(long long)arg2;
- (struct CGPoint)sectionedGridLayout:(PUSectionedGridLayout *)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;
- (NSIndexPath *)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(PUSectionedGridLayout *)arg1;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(PUSectionedGridLayout *)arg1;
- (void)sectionedGridLayoutWillPrepareLayout:(PUSectionedGridLayout *)arg1;
@end

