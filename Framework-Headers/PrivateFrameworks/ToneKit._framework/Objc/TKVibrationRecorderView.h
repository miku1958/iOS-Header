//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ToneKit/TKVibrationRecorderTouchSurfaceDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, UILabel, UIToolbar;
@protocol NSCopying, TKVibrationRecorderStyleProvider, TKVibrationRecorderViewDelegate, UILayoutSupport;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate>
{
    id<TKVibrationRecorderStyleProvider> _styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    BOOL _isReplayModeEnabled;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    BOOL _isAnimatingProgress;
    id<NSCopying> _displayLinkManagerObserverToken;
    id<TKVibrationRecorderViewDelegate> _delegate;
    id<UILayoutSupport> _topLayoutGuide;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TKVibrationRecorderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UILayoutSupport> topLayoutGuide; // @synthesize topLayoutGuide=_topLayoutGuide;

- (void).cxx_destruct;
- (void)_enterWaitingModeWithAnimation:(BOOL)arg1 enablePlayButton:(BOOL)arg2;
- (void)_exitWaitingModeWithAnimation:(BOOL)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(BOOL)arg2 rightButtonIdentifier:(int)arg3 enabled:(BOOL)arg4 animated:(BOOL)arg5;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)_updateProgress:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)enterRecordingMode;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)exitRecordingModeWithPlayButtonEnabled:(BOOL)arg1;
- (void)exitReplayMode;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)startAnimatingProgress;
- (void)stopAnimatingProgress;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;

@end

