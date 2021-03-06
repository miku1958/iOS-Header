//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIColor, UIContextualAction, UISwipeActionButton;
@protocol UISwipeActionPullViewDelegate;

@interface UISwipeActionPullView : UIView
{
    UIView *_clippingView;
    NSMutableArray *_buttons;
    NSArray *_actions;
    UISwipeActionButton *_pressedButton;
    BOOL _swipeActionsDidChange;
    BOOL _isTentative;
    double _openThreshold;
    double _confirmationThreshold;
    double _minimumOffset;
    unsigned long long _style;
    BOOL _buttonsUnderlapSwipedView;
    BOOL _autosizesButtons;
    unsigned long long _cellEdge;
    double _currentOffset;
    id<UISwipeActionPullViewDelegate> _delegate;
    UIColor *_backgroundPullColor;
    unsigned long long _state;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) BOOL autosizesButtons; // @synthesize autosizesButtons=_autosizesButtons;
@property (copy, nonatomic) UIColor *backgroundPullColor; // @synthesize backgroundPullColor=_backgroundPullColor;
@property (nonatomic) BOOL buttonsUnderlapSwipedView; // @synthesize buttonsUnderlapSwipedView=_buttonsUnderlapSwipedView;
@property (readonly, nonatomic) unsigned long long cellEdge; // @synthesize cellEdge=_cellEdge;
@property (readonly, nonatomic) double confirmationThreshold;
@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (readonly, nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property (weak, nonatomic) id<UISwipeActionPullViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) double openThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) UIContextualAction *primarySwipeAction;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (Class)_buttonClass;
- (double)_directionalMultiplier;
- (double)_interButtonPadding;
- (void)_layoutClippingLayer;
- (double)_paddingToSwipedView;
- (void)_performAction:(id)arg1 offset:(double)arg2 extraOffset:(double)arg3;
- (void)_pressedButton:(id)arg1;
- (void)_rebuildButtons;
- (void)_setLayerBounds:(struct CGRect)arg1;
- (void)_setWidth:(double)arg1;
- (void)_setupClippingViewIfNeeded;
- (unsigned long long)_swipeActionCount;
- (void)_tappedButton:(id)arg1;
- (double)_totalInterButtonPadding;
- (void)_unpressedButton:(id)arg1;
- (void)configureWithSwipeActions:(id)arg1;
- (id)description;
- (void)freeze;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 cellEdge:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)moveToOffset:(double)arg1 extraOffset:(double)arg2 animator:(id)arg3 usingSpringWithStiffness:(double)arg4 initialVelocity:(double)arg5;
- (void)resetView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)sourceViewForAction:(id)arg1;

@end

