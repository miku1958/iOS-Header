//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlCollectionViewLayoutInfo, HUQuickControlGridLayoutManager, NSLayoutConstraint, NSMutableDictionary;

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout
{
    HUQuickControlCollectionViewControllerLayoutOptions *_layoutOptions;
    HUQuickControlGridLayoutManager *_layoutManager;
    NSLayoutConstraint *_heightConstraint;
    NSMutableDictionary *_cachedLayoutAttributesByIndexPath;
    NSMutableDictionary *_cachedSectionHeaderLayoutAttributes;
    HUQuickControlCollectionViewLayoutInfo *_layoutInfo;
    struct UIEdgeInsets _contentInset;
}

@property (readonly, nonatomic) NSMutableDictionary *cachedLayoutAttributesByIndexPath; // @synthesize cachedLayoutAttributesByIndexPath=_cachedLayoutAttributesByIndexPath;
@property (readonly, nonatomic) NSMutableDictionary *cachedSectionHeaderLayoutAttributes; // @synthesize cachedSectionHeaderLayoutAttributes=_cachedSectionHeaderLayoutAttributes;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property (strong, nonatomic) HUQuickControlCollectionViewLayoutInfo *layoutInfo; // @synthesize layoutInfo=_layoutInfo;
@property (strong, nonatomic) HUQuickControlGridLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property (strong, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (void)_computeGridLayoutAttributesForLayoutInfo:(id)arg1;
- (void)_computeLayoutInfo;
- (id)_computeRowLayoutOriginsFromLayoutDetails:(id)arg1 forSectionSettings:(id)arg2;
- (id)_computeRowLayoutsForGridLayout:(id)arg1 gridLayoutSettings:(id)arg2;
- (id)_computeSizingLayoutInfo;
- (id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)delegate;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
