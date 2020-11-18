//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString, UICollectionView, UIColor, _UIListSeparatorConfiguration;
@protocol NSCollectionLayoutEnvironment_Private, UITableConstants;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject <NSCopying>
{
    BOOL _stylesFirstItemAsHeader;
    BOOL __apiVersion;
    _UIListSeparatorConfiguration *_separatorConfiguration;
    long long _appearanceStyle;
    double _rowHeight;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedRowHeight;
    double _estimatedSectionHeaderHeight;
    double _estimatedSectionFooterHeight;
    long long _separatorStyle;
    CDUnknownBlockType _separatorInsetProvider;
    CDUnknownBlockType _leadingSwipeActionsConfigurationProvider;
    CDUnknownBlockType _trailingSwipeActionsConfigurationProvider;
    CDUnknownBlockType _willBeginSwipingHandler;
    CDUnknownBlockType _didEndSwipingHandler;
    UICollectionView *_collectionView;
    id<NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
    NSArray *_itemHeights;
    NSString *__headerElementKind;
    NSString *__footerElementKind;
    UIColor *__backgroundColor;
}

@property (nonatomic, getter=_isAPIVersion) BOOL _apiVersion; // @synthesize _apiVersion=__apiVersion;
@property (strong, nonatomic) UIColor *_backgroundColor; // @synthesize _backgroundColor=__backgroundColor;
@property (copy, nonatomic) NSString *_footerElementKind; // @synthesize _footerElementKind=__footerElementKind;
@property (copy, nonatomic) NSString *_headerElementKind; // @synthesize _headerElementKind=__headerElementKind;
@property (copy, nonatomic, getter=_separatorConfiguration, setter=_setSeparatorConfiguration:) _UIListSeparatorConfiguration *_separatorConfiguration; // @synthesize _separatorConfiguration;
@property (readonly, nonatomic, getter=_separatorConfigurationNoCopy) _UIListSeparatorConfiguration *_separatorConfigurationNoCopy;
@property (nonatomic) long long appearanceStyle; // @synthesize appearanceStyle=_appearanceStyle;
@property (readonly, weak, nonatomic, getter=_collectionView) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants;
@property (copy, nonatomic) CDUnknownBlockType didEndSwipingHandler; // @synthesize didEndSwipingHandler=_didEndSwipingHandler;
@property (nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property (nonatomic) double estimatedSectionFooterHeight; // @synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight;
@property (nonatomic) double estimatedSectionHeaderHeight; // @synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight;
@property (copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights; // @synthesize itemHeights=_itemHeights;
@property (readonly, nonatomic, getter=_layoutEnvironment) id<NSCollectionLayoutEnvironment_Private> layoutEnvironment; // @synthesize layoutEnvironment=_layoutEnvironment;
@property (copy, nonatomic) CDUnknownBlockType leadingSwipeActionsConfigurationProvider; // @synthesize leadingSwipeActionsConfigurationProvider=_leadingSwipeActionsConfigurationProvider;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (nonatomic) double sectionFooterHeight; // @synthesize sectionFooterHeight=_sectionFooterHeight;
@property (nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets separatorInset;
@property (copy, nonatomic) CDUnknownBlockType separatorInsetProvider; // @synthesize separatorInsetProvider=_separatorInsetProvider;
@property (nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property (nonatomic) BOOL stylesFirstItemAsHeader; // @synthesize stylesFirstItemAsHeader=_stylesFirstItemAsHeader;
@property (copy, nonatomic) CDUnknownBlockType trailingSwipeActionsConfigurationProvider; // @synthesize trailingSwipeActionsConfigurationProvider=_trailingSwipeActionsConfigurationProvider;
@property (readonly, nonatomic, getter=_wantsSwipeActions) BOOL wantsSwipeActions;
@property (copy, nonatomic) CDUnknownBlockType willBeginSwipingHandler; // @synthesize willBeginSwipingHandler=_willBeginSwipingHandler;

+ (id)new;
- (void).cxx_destruct;
- (void)_addSupplementaryItemsToLayout:(id)arg1;
- (id)_createSeparatorForBottom:(BOOL)arg1;
- (id)_createSwipeActionsContainer;
- (double)_defaultCellHeight;
- (long long)_defaultContentInsetsReference;
- (double)_defaultSectionFooterHeight;
- (double)_defaultSectionHeaderHeight;
- (long long)_defaultSeparatorStyleForAppearanceStyle:(long long)arg1;
- (double)_effectiveEstimatedRowHeight;
- (double)_effectiveEstimatedSectionFooterHeight;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (id)_generateLayoutGroup:(id)arg1;
- (BOOL)_hasFooter;
- (BOOL)_hasHeaderOrFirstItemStyledAsHeader;
- (struct NSDirectionalEdgeInsets)_sectionContentInsetsForAppearanceStyleWithDefaultInsets:(struct NSDirectionalEdgeInsets)arg1;
- (double)_separatorHeight;
- (BOOL)_shouldDrawThickSeparators;
- (BOOL)_shouldPinSupplementaries;
- (BOOL)_shouldSupplementariesFollowSectionInsets;
- (id)_traitCollection;
- (BOOL)_usesSectionBackgroundDecoration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithAppearanceStyle:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)initWithCollectionView:(id)arg1;

@end

