//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetViewer/ASVAROnboardingUIUpdateManagerDelegate-Protocol.h>

@class ARSession, ASVGlyphRenderer, ASVRoundedButton, ASVUpdateManager, MISSING_TYPE, NSLayoutConstraint, NSString, SensorInterceptor, UILabel, UISelectionFeedbackGenerator;
@protocol ASVAROnboardingUIViewDelegate;

@interface ASVAROnboardingUIView : UIView <ASVAROnboardingUIUpdateManagerDelegate>
{
    unsigned long long _currentTrackingState;
    unsigned long long _previousTrackingState;
    unsigned long long _animationState;
    UIView *_backgroundView;
    UIView *_moveDeviceTextContainer;
    UILabel *_moveDeviceText;
    UILabel *_relocalizeText;
    ASVRoundedButton *_resetButton;
    ARSession *_session;
    SensorInterceptor *_motionSensorInterceptor;
    ASVUpdateManager *_updateManager;
    ASVGlyphRenderer *_renderer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSLayoutConstraint *_resetButtonBottomLayoutConstraint;
    long long _currentResetButtonOrientation;
    MISSING_TYPE *_recentPositions[10];
    float _recentAccelerationValues[30];
    MISSING_TYPE *_initialCameraTranslation;
    MISSING_TYPE *_initialCameraRotation;
    MISSING_TYPE *_lastCameraTranslation;
    MISSING_TYPE *_lastCameraRight;
    MISSING_TYPE *_currentCameraTranslation;
    MISSING_TYPE *_rotationStartCameraTranslation;
    MISSING_TYPE *_rotationStartCameraRight;
    double _showUITime;
    double _lastUpdateTime;
    double _startShutdownTime;
    double _currentStateTime;
    double _lastAccelOverThresholdTime;
    float _lastOrientationRotation;
    float _accelerationBaseline;
    float _accelerationThreshold;
    float _currentCubeAngle;
    BOOL _initialTransformSet;
    BOOL _isAnimating;
    BOOL _isRelocalizing;
    BOOL _accelerationBaselineCalculated;
    BOOL _hasDisplayedPreviously;
    int _currentPositionIndex;
    int _accelOverThresholdCount;
    int _currentAccelerationIndex;
    BOOL _allowRotateAutoDismiss;
    BOOL _showResumeTextAfterFirstDisplay;
    BOOL _showAllAnimationStatesBeforeHiding;
    BOOL _showAnimatedUI;
    BOOL _interceptARKitSensorData;
    BOOL _enableHapticFeedback;
    float _resetButtonLandscapeVerticalOffset;
    float _resetButtonPortraitVerticalOffset;
    float _moveDistanceThreshold;
    id<ASVAROnboardingUIViewDelegate> _delegate;
    double _inactiveTimeBeforeShowUI;
    double _minimumAnimationTime;
}

@property (nonatomic) BOOL allowRotateAutoDismiss; // @synthesize allowRotateAutoDismiss=_allowRotateAutoDismiss;
@property (readonly, nonatomic) unsigned long long animationState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ASVAROnboardingUIViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableHapticFeedback; // @synthesize enableHapticFeedback=_enableHapticFeedback;
@property (readonly) unsigned long long hash;
@property (nonatomic) double inactiveTimeBeforeShowUI; // @synthesize inactiveTimeBeforeShowUI=_inactiveTimeBeforeShowUI;
@property (nonatomic) BOOL interceptARKitSensorData; // @synthesize interceptARKitSensorData=_interceptARKitSensorData;
@property (readonly, nonatomic) BOOL isAnimating;
@property (nonatomic) double minimumAnimationTime; // @synthesize minimumAnimationTime=_minimumAnimationTime;
@property (nonatomic) float moveDistanceThreshold; // @synthesize moveDistanceThreshold=_moveDistanceThreshold;
@property (nonatomic) float resetButtonLandscapeVerticalOffset; // @synthesize resetButtonLandscapeVerticalOffset=_resetButtonLandscapeVerticalOffset;
@property (nonatomic) float resetButtonPortraitVerticalOffset; // @synthesize resetButtonPortraitVerticalOffset=_resetButtonPortraitVerticalOffset;
@property (weak, nonatomic) ARSession *session;
@property (nonatomic) BOOL showAllAnimationStatesBeforeHiding; // @synthesize showAllAnimationStatesBeforeHiding=_showAllAnimationStatesBeforeHiding;
@property (nonatomic) BOOL showAnimatedUI; // @synthesize showAnimatedUI=_showAnimatedUI;
@property (nonatomic) BOOL showResumeTextAfterFirstDisplay; // @synthesize showResumeTextAfterFirstDisplay=_showResumeTextAfterFirstDisplay;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasHomeButton;
- (void)activate;
- (void)buttonPress:(id)arg1;
- (float)calculateAverageAcceleration;
- (MISSING_TYPE *)calculateAveragePosition;
- (void)clampToNearestQuarterRotation;
- (void)cleanupAnimatedUI;
- (void)createConstraintsForCurrentDeviceOrientation;
- (void)dealloc;
- (void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3;
- (void)hide;
- (void)hideAll:(double)arg1;
- (void)hideBackground:(double)arg1;
- (void)hideOnboardingUI;
- (void)hideOrientationUI:(double)arg1;
- (void)hideResetButton:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interceptSensorDelegates;
- (BOOL)isRelocalizing;
- (BOOL)isShowingBackground;
- (BOOL)isShowingMoveDeviceUI;
- (BOOL)isShowingRelocalizeUI;
- (void)layoutSubviews;
- (CDStruct_14d5dc5e)lookAt:center:up: /* Error: Ran out of types for this method. */;
- (void)orientationChanged;
- (CDStruct_14d5dc5e)ortho2d:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6;
- (CDStruct_14d5dc5e)perspective_fov:(float)arg1 aspect:(float)arg2 near:(float)arg3 far:(float)arg4;
- (void)populateRecentPositions: /* Error: Ran out of types for this method. */;
- (void)prepare;
- (void)prepareAnimatedUI;
- (void)prepareOnboardingUI;
- (float)radians:(float)arg1;
- (void)relocalize;
- (void)resetAccelerationBaseline;
- (void)resizeForDrawable:(id)arg1;
- (void)restoreSensorDelegates;
- (void)setAnimationState:(unsigned long long)arg1;
- (void)showBackground:(double)arg1;
- (void)showMoveDeviceUI:(double)arg1;
- (void)showRelocalizeUI:(double)arg1;
- (void)shutdown;
- (void)shutdownRenderer;
- (void)startupRenderer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)update:(double)arg1;
- (void)updateConstraints;
- (void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2;
- (void)updateMetalLayer;
- (void)updateMoveDeviceText:(id)arg1 fadeText:(BOOL)arg2;
- (void)updateMoveText:(BOOL)arg1;
- (void)updatePositionData:(id)arg1 currentTime:(double)arg2;
- (void)updateResetButtonWithFadeIn:(BOOL)arg1;

@end

