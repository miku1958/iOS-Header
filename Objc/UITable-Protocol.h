//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEditable-Protocol.h>
#import <UIKitCore/UITableConstantsTableProviding-Protocol.h>

@class UIColor, UIScrollView;

@protocol UITable <UIEditable, UITableConstantsTableProviding>

@property (readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) BOOL allowsMultipleSelectionDuringEditing;
@property (readonly, nonatomic, getter=_backgroundInset) double backgroundInset;
@property (readonly, nonatomic, getter=_bottomPadding) double bottomPadding;
@property (readonly, nonatomic) BOOL cellLayoutMarginsFollowReadableWidth;
@property (readonly, nonatomic, getter=_cellSafeAreaInsets) struct UIEdgeInsets cellSafeAreaInsets;
@property (readonly, nonatomic) double estimatedRowHeight;
@property (readonly, nonatomic) double estimatedSectionFooterHeight;
@property (readonly, nonatomic) double estimatedSectionHeaderHeight;
@property (readonly, nonatomic, getter=_indexBarExtentFromEdge) double indexBarExtentFromEdge;
@property (readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame;
@property (readonly, nonatomic, getter=_multiselectCheckmarkColor) UIColor *multiselectCheckmarkColor;
@property (readonly, nonatomic, getter=_numberOfSections) long long numberOfSections;
@property (readonly, nonatomic) BOOL overlapsSectionHeaderViews;
@property (readonly, nonatomic, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property (readonly, nonatomic) double rowHeight;
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property (readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property (readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) BOOL sectionContentInsetFollowsLayoutMargins;
@property (readonly, nonatomic, getter=_sectionCornerRadius) double sectionCornerRadius;
@property (readonly, nonatomic) double sectionFooterHeight;
@property (readonly, nonatomic) double sectionHeaderHeight;
@property (readonly, nonatomic) struct UIEdgeInsets separatorInset;
@property (readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) BOOL separatorInsetIsRelativeToCellEdges;
@property (readonly, nonatomic, getter=_isShowingIndex) BOOL showingIndex;
@property (readonly, nonatomic, getter=_topPadding) double topPadding;
@property (readonly, nonatomic) BOOL usesVariableMargins;

- (long long)_numberOfRowsInSection:(long long)arg1;
- (BOOL)_shouldHaveFooterViewForSection:(long long)arg1;
- (BOOL)_shouldHaveHeaderViewForSection:(long long)arg1;
@end

