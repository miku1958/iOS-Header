//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider;
@protocol TUIButtonBarViewProvider;

@interface TUIAssistantButtonBarGroupView : UIView
{
    NSMutableArray *_visibleButtons;
    BOOL _collapsed;
    UIBarButtonItemGroup *_barButtonItemGroup;
    double _itemSpacing;
    id<TUIButtonBarViewProvider> _buttonProvider;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property (strong, nonatomic) UIBarButtonItemGroup *barButtonItemGroup; // @synthesize barButtonItemGroup=_barButtonItemGroup;
@property (weak, nonatomic) id<TUIButtonBarViewProvider> buttonProvider; // @synthesize buttonProvider=_buttonProvider;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) BOOL containsFlexibleItems;
@property (nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property (readonly, nonatomic) NSArray *visibleButtons;
@property (strong, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider; // @synthesize visualProvider=_visualProvider;

- (void).cxx_destruct;
- (id)_buttonBarItemViewForBarButtonItem:(id)arg1;
- (BOOL)_canBeCollapsed;
- (void)_ensureVisibleButtonsForVisibleItems;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (struct CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2;
- (id)_visibleItems;
- (id)_visibleItemsAllowingCollapse:(BOOL)arg1;
- (id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

