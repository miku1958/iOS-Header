//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTilingLayout.h>

@interface PUSectionedTilingLayout : PUTilingLayout
{
    long long _numberOfSections;
    struct _PUSectionedTilingLayoutSectionInfo *_sectionInfos;
    struct _NSRange _computedSections;
    long long _seedSection;
    struct CGPoint _seedSectionOrigin;
    BOOL _leftToRight;
    struct CGSize _interSectionSpacing;
}

@property (readonly, nonatomic) struct _NSRange computedSections;
@property (nonatomic) struct CGSize interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property (nonatomic) BOOL leftToRight; // @synthesize leftToRight=_leftToRight;

- (void)_computeSeedSectionIfNeeded;
- (void)_ensureComputedSectionsHaveBeenSeeded;
- (void)_invalidateNumberOfSections;
- (void)_markAllSectionInfosInvalid;
- (long long)_numberOfSections;
- (BOOL)_scrollsHorizontallyNotVertically;
- (struct _PUSectionedTilingLayoutSectionInfo *)_sectionInfoForSection:(long long)arg1;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGRect)boundsForSection:(long long)arg1;
- (void)computeSectionsInRect:(struct CGRect)arg1;
- (struct CGRect)contentBounds;
- (void)dealloc;
- (id)init;
- (void)invalidateLayoutForUpdateWithItems:(id)arg1;
- (void)invalidateSectionInfos;
- (id)layoutInfosForTilesInRect:(struct CGRect)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)prepareLayout;
- (void)setVisibleRect:(struct CGRect)arg1;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;

@end

