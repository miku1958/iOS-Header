//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSValue, UICollectionViewLayoutAttributes;
@protocol CKAvatarPickerLayoutDelegate;

@interface CKAvatarPickerLayout : UICollectionViewLayout
{
    BOOL _isInEditingMode;
    unsigned long long _layoutMode;
    id<CKAvatarPickerLayoutDelegate> _delegate;
    UICollectionViewLayoutAttributes *_titleSupplementaryAttr;
    NSArray *_attrCollection;
    NSArray *_supplementaryAttrCollection;
    NSArray *_cutoutAttrCollection;
    UICollectionViewLayoutAttributes *_leftShadowDecorationAttr;
    UICollectionViewLayoutAttributes *_rightShadowDecorationAttr;
    NSValue *_editingFrameValue;
}

@property (copy, nonatomic) NSArray *attrCollection; // @synthesize attrCollection=_attrCollection;
@property (copy, nonatomic) NSArray *cutoutAttrCollection; // @synthesize cutoutAttrCollection=_cutoutAttrCollection;
@property (weak, nonatomic) id<CKAvatarPickerLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSValue *editingFrameValue; // @synthesize editingFrameValue=_editingFrameValue;
@property (nonatomic) BOOL isInEditingMode; // @synthesize isInEditingMode=_isInEditingMode;
@property (nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *leftShadowDecorationAttr; // @synthesize leftShadowDecorationAttr=_leftShadowDecorationAttr;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *rightShadowDecorationAttr; // @synthesize rightShadowDecorationAttr=_rightShadowDecorationAttr;
@property (copy, nonatomic) NSArray *supplementaryAttrCollection; // @synthesize supplementaryAttrCollection=_supplementaryAttrCollection;
@property (strong, nonatomic) UICollectionViewLayoutAttributes *titleSupplementaryAttr; // @synthesize titleSupplementaryAttr=_titleSupplementaryAttr;

- (void).cxx_destruct;
- (BOOL)_canShowShadowClipping;
- (unsigned long long)_itemCount;
- (void)_setupBannerLayout;
- (void)_setupDefaultLayout;
- (BOOL)_shouldShowContactNames;
- (BOOL)_shouldShowCutouts;
- (BOOL)_shouldShowTitle;
- (BOOL)_usesGroupAvatar;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithLayoutMode:(unsigned long long)arg1;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutAndCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)nameLayoutAttributesCollectionAtPoint:(struct CGPoint)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)wantsChromelessAppearance;

@end

