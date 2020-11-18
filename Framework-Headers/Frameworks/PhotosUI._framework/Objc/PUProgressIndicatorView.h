//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PLRoundProgressView, UIActivityIndicatorView, UILabel, _UIBackdropView;

@interface PUProgressIndicatorView : UIView
{
    UIActivityIndicatorView *_spinnerView;
    PLRoundProgressView *_pieProgressView;
    _UIBackdropView *_backgroundView;
    UILabel *_messageLabel;
    NSArray *_spinnerViewConstraints;
    NSArray *_pieProgressViewConstraints;
    NSArray *_backgroundViewConstraints;
    NSArray *_messageLabelConstraints;
    NSArray *_labelAndSpinnerConstraints;
    NSArray *_labelAndPieProgressConstraints;
    BOOL _wantsImmediateHide;
    BOOL _wantsAnimatedHide;
    CDUnknownBlockType _completionHandler;
    BOOL _isDeterminate;
    BOOL _showsBackground;
    long long _style;
    double _currentProgress;
    NSString *_localizedMessage;
    long long __currentState;
    double __timestampBeganShowing;
}

@property (nonatomic, setter=_setCurrentState:) long long _currentState; // @synthesize _currentState=__currentState;
@property (nonatomic, setter=_setTimestampBeganShowing:) double _timestampBeganShowing; // @synthesize _timestampBeganShowing=__timestampBeganShowing;
@property (nonatomic) double currentProgress; // @synthesize currentProgress=_currentProgress;
@property (nonatomic, setter=setDeterminate:) BOOL isDeterminate; // @synthesize isDeterminate=_isDeterminate;
@property (copy, nonatomic) NSString *localizedMessage; // @synthesize localizedMessage=_localizedMessage;
@property (readonly, nonatomic, getter=isShowingProgress) BOOL showingProgress;
@property (nonatomic) BOOL showsBackground; // @synthesize showsBackground=_showsBackground;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (void)_endShowingProgressIfReady;
- (void)_handleBeginShowingAnimated:(BOOL)arg1 wasImmediate:(BOOL)arg2;
- (id)_newBackdropBackgroundView;
- (void)_updatePieProgress;
- (void)_updateProgressViewsAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateProgressViewsWithAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateSubviewsOrdering;
- (void)beginShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2;
- (void)beginShowingProgressWithDelay:(double)arg1 animated:(BOOL)arg2;
- (void)endShowingProgressImmediately:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateConstraints;

@end

