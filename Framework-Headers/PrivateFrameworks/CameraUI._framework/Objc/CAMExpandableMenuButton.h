//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexSet, NSMutableArray, NSMutableIndexSet, UIView;
@protocol CAMExpandableMenuButtonDelegate;

@interface CAMExpandableMenuButton : UIControl
{
    BOOL _expanded;
    long long _selectedIndex;
    long long _expansionOrientation;
    long long _orientation;
    id<CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
    NSMutableArray *__menuItems;
    UIView *__headerView;
    NSIndexSet *__hiddenIndexesWhileCollapsed;
    NSMutableIndexSet *__highlightedIndexesWhileCollapsed;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (readonly, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property (readonly, copy, nonatomic) NSIndexSet *_hiddenIndexesWhileCollapsed; // @synthesize _hiddenIndexesWhileCollapsed=__hiddenIndexesWhileCollapsed;
@property (readonly, copy, nonatomic) NSMutableIndexSet *_highlightedIndexesWhileCollapsed; // @synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed;
@property (readonly, nonatomic) NSMutableArray *_menuItems; // @synthesize _menuItems=__menuItems;
@property (weak, nonatomic) id<CAMExpandableMenuButtonDelegate> expandableMenuDelegate; // @synthesize expandableMenuDelegate=_expandableMenuDelegate;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (nonatomic) long long expansionOrientation; // @synthesize expansionOrientation=_expansionOrientation;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;

+ (double)expansionDuration;
- (void).cxx_destruct;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForHorizontalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize)_layoutForVerticalCollapsedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalCollapsedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalExpandedLandscapeButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalExpandedPortraitButton:(BOOL)arg1;
- (struct CGSize)_layoutForVerticalExpandedPortraitButtonApplyToHeaderView:(BOOL)arg1 applyToSelectedItem:(BOOL)arg2 applyToOtherViews:(BOOL)arg3;
- (struct CGSize)_layoutForVerticalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2;
- (struct CGSize)_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2;
- (id)_selectedLabel;
- (void)_updateFromExpansionChangeAnimated:(BOOL)arg1;
- (void)_updateFromOrientationChangeAnimated:(BOOL)arg1;
- (void)_updateFromSelectedIndexChange;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)collapseMenuAnimated:(BOOL)arg1;
- (double)collapsedSelectedLabelHorizontalMargin;
- (void)completeExpansionToProposedFrame:(struct CGRect)arg1;
- (void)expandMenuAnimated:(BOOL)arg1;
- (void)finishCollapsingAnimated:(BOOL)arg1;
- (void)finishExpansionAnimated:(BOOL)arg1;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1 expanded:(BOOL)arg2;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (id)init;
- (id)initWithExpansionOrientation:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)intrinsicContentSizeForExpansion:(BOOL)arg1;
- (void)layoutSubviews;
- (long long)numberOfMenuItems;
- (void)prepareHeaderViewForExpanding:(BOOL)arg1;
- (void)reloadData;
- (void)setHighlighted:(BOOL)arg1 forIndex:(long long)arg2;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAllowExpansion;
- (BOOL)shouldIgnoreMenuInteraction;
- (void)startCollapsingWithProposedFrame:(struct CGRect)arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect)arg1;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (void)updateToContentSize:(id)arg1;
- (BOOL)wantsSelectedItemToBeVisible;

@end

