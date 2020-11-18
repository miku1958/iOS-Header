//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SKUIStorePageSectionContext, SKUIViewElementLayoutContext, UIColor;
@protocol SKUIGridViewElementPageSectionConfigurationDataSource;

@interface SKUIGridViewElementPageSectionConfiguration : NSObject
{
    long long _cardVerticalSpacingStyle;
    double _cellContentWidth;
    BOOL _cellPaddingNeedsReloading;
    double _cellPaddingInteriorHorizontal;
    double _cellPaddingLeftEdgeHorizontal;
    double _cellPaddingRightEdgeHorizontal;
    struct UIEdgeInsets _gridViewElementStyleElementPadding;
    double _gridViewElementStyleItemWidth;
    BOOL _gridViewElementStyleItemWidthIsPercentage;
    BOOL _gridIsEdgeToEdge;
    BOOL _hasGridViewElementStyle;
    BOOL _hasHeader;
    struct UIEdgeInsets _separatorMargins;
    long long _lockupType;
    double _minimumCellHeight;
    unsigned long long _numberOfGridItems;
    NSArray *_positions;
    UIColor *_separatorColor;
    long long _separatorStyle;
    struct UIEdgeInsets _separatorWidths;
    BOOL _showsEditMode;
    NSArray *_viewElements;
    struct {
        unsigned int configurePositionForItemAtIndexPath:1;
    } _dataSourceRespondsToSelectorFlags;
    BOOL _rendersWithPerspective;
    SKUIViewElementLayoutContext *_cellLayoutContext;
    long long _numberOfColumns;
    SKUIStorePageSectionContext *_pageSectionContext;
    id<SKUIGridViewElementPageSectionConfigurationDataSource> _dataSource;
}

@property (strong, nonatomic) SKUIViewElementLayoutContext *cellLayoutContext; // @synthesize cellLayoutContext=_cellLayoutContext;
@property (readonly, nonatomic) double columnContentWidth;
@property (readonly, nonatomic) double columnWidth;
@property (weak, nonatomic) id<SKUIGridViewElementPageSectionConfigurationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (strong, nonatomic) SKUIStorePageSectionContext *pageSectionContext; // @synthesize pageSectionContext=_pageSectionContext;
@property (nonatomic) BOOL rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property (readonly, nonatomic) BOOL showsEditMode; // @synthesize showsEditMode=_showsEditMode;

- (void).cxx_destruct;
- (id)_cardArtworkBoundingSizeForIndexPath:(id)arg1;
- (Class)_cardCellClassForCard:(id)arg1;
- (double)_cellContentWidth;
- (double)_cellHeightForViewElement:(id)arg1 width:(double)arg2;
- (struct UIEdgeInsets)_cellInsetsForViewElement:(id)arg1 indexPath:(id)arg2;
- (double)_cellPaddingInteriorHorizontal;
- (double)_cellPaddingLeftEdgeHorizontal;
- (double)_cellPaddingRightEdgeHorizontal;
- (double)_columnContentWidthPaddingForWidth:(double)arg1;
- (void)_enumerateViewElementsForRowOfIndexPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_isContainedWithinExploreTemplateWithGridViewElement:(id)arg1;
- (id)_lockupCellReuseIdentifierWithLockup:(id)arg1;
- (long long)_lockupTypeForLockup:(id)arg1;
- (struct UIEdgeInsets)_normalizedContentInsetForViewElement:(id)arg1 indexPath:(id)arg2;
- (long long)_numberOfColumnsForWidth:(double)arg1 style:(id)arg2;
- (void)_reloadCellPaddingIfNeeded;
- (BOOL)_useOrdinalPadding;
- (id)backgroundColorForViewElement:(id)arg1;
- (Class)cellClassForViewElement:(id)arg1;
- (id)cellForViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)cellSizeForViewElement:(id)arg1 indexPath:(id)arg2;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)configureCell:(id)arg1 forViewElement:(id)arg2 indexPath:(id)arg3;
- (Class)lockupCellClassWithLockup:(id)arg1;
- (long long)positionForIndexPath:(id)arg1;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 forViewElement:(id)arg2 reason:(long long)arg3;
- (void)requestCellLayoutForViewElement:(id)arg1;
- (struct UIEdgeInsets)sectionContentInsetAdjustedFromValue:(struct UIEdgeInsets)arg1 forGridViewElement:(id)arg2;
- (void)updateLayoutPropertiesForGridViewElement:(id)arg1;
- (void)updateStylePropertiesForGridViewElement:(id)arg1 gridItemViewElements:(id)arg2 numberOfGridItems:(unsigned long long)arg3;
- (BOOL)viewElementIsStandardCard:(id)arg1;

@end

