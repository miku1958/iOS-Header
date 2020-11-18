//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/TUIButtonBarViewProvider-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, _UIButtonBarButtonVisualProvider;
@protocol TUIAssistantButtonBarViewDelegate, _UIButtonBarAppearanceDelegate;

@interface TUIAssistantButtonBarView : UIView <TUIButtonBarViewProvider>
{
    BOOL _constrainedHorizontally;
    NSArray *_buttonGroups;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    long long _buttonAlignment;
    id<TUIAssistantButtonBarViewDelegate> _delegate;
    double _horizontalMargins;
    id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIView *_buttonContainer;
    double _effectiveInterItemSpacing;
    NSMutableOrderedSet *_groupViews;
}

@property (weak, nonatomic) id<_UIButtonBarAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property (nonatomic) long long buttonAlignment; // @synthesize buttonAlignment=_buttonAlignment;
@property (strong, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property (strong, nonatomic) NSArray *buttonGroups; // @synthesize buttonGroups=_buttonGroups;
@property (nonatomic) BOOL constrainedHorizontally; // @synthesize constrainedHorizontally=_constrainedHorizontally;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUIAssistantButtonBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double effectiveInterItemSpacing; // @synthesize effectiveInterItemSpacing=_effectiveInterItemSpacing;
@property (strong, nonatomic) NSMutableOrderedSet *groupViews; // @synthesize groupViews=_groupViews;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalMargins; // @synthesize horizontalMargins=_horizontalMargins;
@property (nonatomic) double minimumInterGroupSpace; // @synthesize minimumInterGroupSpace=_minimumInterGroupSpace;
@property (nonatomic) double minimumInterItemSpace; // @synthesize minimumInterItemSpace=_minimumInterItemSpace;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;

- (void).cxx_destruct;
- (id)_allVisibleBarItemViews;
- (void)_checkBarButtonItemState:(id)arg1;
- (void)_collapseGroupsIfNecessaryForWidth:(double)arg1;
- (BOOL)_containsFlexibleGroupViews;
- (void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2;
- (id)_groupViewForBarButtonItemGroup:(id)arg1;
- (struct UIEdgeInsets)_insetsForHorizontalMargin;
- (double)_interItemSpacingThatFits:(struct CGSize)arg1 forGroupSize:(struct CGSize)arg2;
- (id)_itemViewForSender:(id)arg1;
- (struct CGSize)_preferredTitleSizeForBarButtonItem:(id)arg1;
- (struct CGSize)_totalGroupSizeThatFits:(struct CGSize)arg1;
- (void)_uncollapseAllGroupsForNewSizeIfNecessary:(struct CGSize)arg1;
- (id)_uncollapsedGroupViews;
- (void)_updateBarButtonItemHiddenState;
- (id)_visibleGroupViews;
- (id)_visibleGroups;
- (void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)preferredSizeDidChangeForButtonBarItem:(id)arg1;
- (struct CGSize)preferredSizeForButtonBarItem:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)validateButtonGroups;

@end
