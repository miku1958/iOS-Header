//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class IKChangeSet, NSArray, NSIndexSet;
@protocol _TVStackViewDelegateFlowLayout;

@interface _TVStackViewFlowLayout : UICollectionViewLayout
{
    id<_TVStackViewDelegateFlowLayout> _stackViewDelegateFlowLayout;
    struct {
        BOOL hasShowcaseFactorDidChange;
    } _stackViewDelegateFlowLayoutFlags;
    NSArray *_oldSectionCellLayoutAttributes;
    IKChangeSet *_changeSet;
    NSIndexSet *_indexesAddedAtEnd;
    struct CGPoint _initialContentOffset;
    BOOL _isFullReplace;
    double _lastLayoutWidth;
    long long _supplementaryCellSection;
    NSArray *_supplementaryCellLayoutAttributes;
    CDUnknownBlockType _onPrepareLayout;
    double _showcaseHeight;
    double _showcaseFactor;
    NSArray *_sectionCellLayoutAttributes;
    struct CGSize _contentSize;
}

@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (copy, nonatomic) CDUnknownBlockType onPrepareLayout; // @synthesize onPrepareLayout=_onPrepareLayout;
@property (copy, nonatomic) NSArray *sectionCellLayoutAttributes; // @synthesize sectionCellLayoutAttributes=_sectionCellLayoutAttributes;
@property (readonly, nonatomic) double showcaseFactor; // @synthesize showcaseFactor=_showcaseFactor;
@property (nonatomic) double showcaseHeight; // @synthesize showcaseHeight=_showcaseHeight;
@property (copy, nonatomic) NSArray *supplementaryCellLayoutAttributes; // @synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes;
@property (nonatomic) long long supplementaryCellSection; // @synthesize supplementaryCellSection=_supplementaryCellSection;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (double)_computeShowcaseFactorForContentOffset:(struct CGPoint)arg1;
- (id)_oldLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_prepareSectionMetrics;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
