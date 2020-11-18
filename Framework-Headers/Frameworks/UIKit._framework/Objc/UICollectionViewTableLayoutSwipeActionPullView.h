//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UICollectionViewTableLayoutSwipeAction, UIColor, _UIFeedbackStatesBehavior;
@protocol UICollectionViewTableLayoutSwipeActionPullViewDelegate;

__attribute__((visibility("hidden")))
@interface UICollectionViewTableLayoutSwipeActionPullView : UIView
{
    NSMutableArray *_buttons;
    NSArray *_actions;
    UIView *_backgroundView;
    BOOL _swipeActionsDidChange;
    double _openThreshold;
    double _confirmationThreshold;
    unsigned long long _cellEdge;
    unsigned long long _state;
    double _currentOffset;
    id<UICollectionViewTableLayoutSwipeActionPullViewDelegate> _delegate;
    double _progressToConfirm;
    _UIFeedbackStatesBehavior *_feedbackBehavior;
}

@property (readonly, nonatomic) unsigned long long cellEdge; // @synthesize cellEdge=_cellEdge;
@property (readonly, nonatomic) double confirmationThreshold;
@property (readonly, nonatomic) double currentOffset; // @synthesize currentOffset=_currentOffset;
@property (nonatomic) id<UICollectionViewTableLayoutSwipeActionPullViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) _UIFeedbackStatesBehavior *feedbackBehavior; // @synthesize feedbackBehavior=_feedbackBehavior;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic) double openThreshold;
@property (readonly, nonatomic) UIColor *primaryActionColor;
@property (readonly, nonatomic) BOOL primaryActionIsDestructive;
@property (readonly, nonatomic) BOOL primaryActionResetsSwipedRow;
@property (readonly, nonatomic) UICollectionViewTableLayoutSwipeAction *primarySwipeAction;
@property (nonatomic) double progressToConfirm; // @synthesize progressToConfirm=_progressToConfirm;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (double)_directionalMultiplier;
- (unsigned long long)_nextStateForPullView;
- (BOOL)_offsetMeetsConfirmationThreshold:(double)arg1 progress:(double *)arg2;
- (double)_progressToState:(unsigned long long)arg1;
- (void)_rebuildButtons;
- (unsigned long long)_swipeActionCount;
- (void)_tappedButton:(id)arg1;
- (void)configureWithSwipeActions:(id)arg1;
- (id)description;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithCellEdge:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)moveToOffset:(double)arg1 animated:(BOOL)arg2 usingSpringWithStiffnessFactor:(double)arg3 initialVelocity:(double)arg4;
- (void)resetView;

@end
