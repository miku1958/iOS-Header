//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface CKAppStripLayout : UICollectionViewLayout
{
    NSArray *_minifiedAttributes;
    NSArray *_magnifiedAttributes;
    NSArray *_supplementryMinifiedAttributes;
    NSArray *_supplementryMagnifiedAttributes;
    BOOL _inLayoutModeTransition;
    BOOL _shouldDimPluginCells;
    BOOL _shouldShowCellBorders;
    unsigned long long _layoutMode;
}

@property (nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property (nonatomic) BOOL shouldDimPluginCells; // @synthesize shouldDimPluginCells=_shouldDimPluginCells;
@property (nonatomic) BOOL shouldShowCellBorders; // @synthesize shouldShowCellBorders=_shouldShowCellBorders;

+ (double)maxHeight;
+ (double)minHeight;
- (void).cxx_destruct;
- (id)_attributesForLayoutMode:(unsigned long long)arg1;
- (id)_currentAttributes;
- (id)_currentSupplementryAttributes;
- (long long)_favoritesCount;
- (id)_generateAttributesForSpec:(struct _Spec)arg1;
- (id)_generateSupplementryAttributesForSpec:(struct _Spec)arg1 minified:(BOOL)arg2;
- (long long)_itemCount;
- (long long)_recentsCount;
- (struct _Spec)_specForLayoutMode:(unsigned long long)arg1;
- (id)_supplementryAttributesForLayoutMode:(unsigned long long)arg1;
- (struct CGSize)collectionViewContentSize;
- (struct CGSize)collectionViewContentSizeForLayoutMode:(unsigned long long)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finishLayoutModeTransition;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateCachedLayout;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareForLayoutModeTransition;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end

