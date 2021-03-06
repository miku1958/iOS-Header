//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray, PUParallaxComputer;

__attribute__((visibility("hidden")))
@interface PUFeedCollectionViewLayout : UICollectionViewLayout
{
    PUParallaxComputer *_parallaxComputer;
    NSMutableArray *_sectionLayoutInfos;
    struct CGSize _contentSize;
    BOOL _shouldDisplayCaptionsBelowBatches;
    BOOL _shouldApplyParallaxEffect;
    BOOL _shouldFloatThumbnails;
    BOOL _shouldFloatSectionHeaders;
    BOOL _shouldFloatWithEase;
    BOOL _shouldFloatOverShortDistances;
    long long _flowDirection;
    long long _parallaxModel;
    double _parallaxFactor;
    double _thumbnailSpacing;
    double _sectionHeaderBackgroundHeight;
    double _floatingBottomDecorationHeight;
    struct CGSize _sectionReferenceSize;
    struct CGSize _interTileSpacing;
    struct CGSize _noCaptionSpacing;
    struct UIEdgeInsets _captionPadding;
    struct UIEdgeInsets _floatPadding;
}

@property (nonatomic) struct UIEdgeInsets captionPadding; // @synthesize captionPadding=_captionPadding;
@property (nonatomic) struct UIEdgeInsets floatPadding; // @synthesize floatPadding=_floatPadding;
@property (nonatomic) double floatingBottomDecorationHeight; // @synthesize floatingBottomDecorationHeight=_floatingBottomDecorationHeight;
@property (nonatomic) long long flowDirection; // @synthesize flowDirection=_flowDirection;
@property (readonly, nonatomic) unsigned int flowDirectionEdge;
@property (nonatomic) struct CGSize interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property (nonatomic) struct CGSize noCaptionSpacing; // @synthesize noCaptionSpacing=_noCaptionSpacing;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property (nonatomic) long long parallaxModel; // @synthesize parallaxModel=_parallaxModel;
@property (nonatomic) double sectionHeaderBackgroundHeight; // @synthesize sectionHeaderBackgroundHeight=_sectionHeaderBackgroundHeight;
@property (nonatomic) struct CGSize sectionReferenceSize; // @synthesize sectionReferenceSize=_sectionReferenceSize;
@property (nonatomic) BOOL shouldApplyParallaxEffect; // @synthesize shouldApplyParallaxEffect=_shouldApplyParallaxEffect;
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches; // @synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches;
@property (nonatomic) BOOL shouldFloatOverShortDistances; // @synthesize shouldFloatOverShortDistances=_shouldFloatOverShortDistances;
@property (nonatomic) BOOL shouldFloatSectionHeaders; // @synthesize shouldFloatSectionHeaders=_shouldFloatSectionHeaders;
@property (nonatomic) BOOL shouldFloatThumbnails; // @synthesize shouldFloatThumbnails=_shouldFloatThumbnails;
@property (nonatomic) BOOL shouldFloatWithEase; // @synthesize shouldFloatWithEase=_shouldFloatWithEase;
@property (nonatomic) double thumbnailSpacing; // @synthesize thumbnailSpacing=_thumbnailSpacing;

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (void)_adjustFloatingLayoutAttributes:(id)arg1 inSection:(long long)arg2;
- (id)_delegate;
- (void)_enumerateSectionsInRect:(struct CGRect)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_getSize:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9;
- (void)_getSizeForHorizontalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9;
- (void)_getSizeForVerticalFlowDirection:(out struct CGSize *)arg1 headerSize:(out struct CGSize *)arg2 footerSize:(out struct CGSize *)arg3 fixedLayoutAttributes:(id)arg4 tileLayoutAttributes:(id)arg5 floatingLayoutAttributes:(id)arg6 type:(out long long *)arg7 forSection:(long long)arg8 isJoined:(BOOL)arg9;
- (long long)_layoutTilesAndGetNumberOfTilesOmittedWithCollectionView:(id)arg1 tileLayoutAttributes:(id)arg2 fixedLayoutAttributes:(id)arg3 origin:(inout struct CGPoint *)arg4 size:(inout struct CGSize *)arg5 sectionContentSize:(struct CGSize)arg6 itemCount:(long long)arg7 section:(long long)arg8;
- (struct CGRect)_layoutVerticalSectionHeaderIfNecessary:(id)arg1 fixedLayoutAttributes:(id)arg2 floatingLayoutAttributes:(id)arg3 section:(long long)arg4;
- (id)_parallaxComputer;
- (void)_sectionAtIndex:(long long)arg1 sizeDidChangeFrom:(struct CGSize)arg2 to:(struct CGSize)arg3;
- (void)_setOrigin:(struct CGPoint)arg1 forSectionLayoutInfo:(id)arg2;
- (void)_updateGlobalLayoutInfoWithOptions:(long long)arg1 sectionsWithUpdatedGroupIDs:(out id *)arg2;
- (void)_updateLayoutInfoForSection:(long long)arg1 ignoreSizeChange:(BOOL)arg2;
- (void)_updateParallaxComputer;
- (void)_updateParallaxForLayoutAttributes:(id)arg1;
- (void)_updateSectionLayoutInfosIfNecessary;
- (struct CGSize)collectionViewContentSize;
- (void)enumerateImageElementsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)frameForSection:(long long)arg1;
- (struct CGRect)frameForTileAtIndexPath:(id)arg1;
- (id)indexPathForImageElementAtPoint:(struct CGPoint)arg1;
- (id)init;
- (void)invalidateLayoutAndCache;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (long long)numberOfTilesOmittedInSection:(long long)arg1;
- (void)prepareLayout;
- (id)sectionsJoinedWithSection:(long long)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)updateCollectionViewWithDeletedSections:(id)arg1 insertedSections:(id)arg2 updatedSections:(id)arg3;

@end

