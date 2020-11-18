//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBHomeGestureExclusionTrapezoidSettings;

@interface SBHomeGestureSettings : PTSettings
{
    BOOL _homeGestureEnabled;
    BOOL _recognizeAlongEdge;
    BOOL _snapToMaxVelocityThresholdAfterAccelerationDip;
    BOOL _injectGestureVelocityForZoomDown;
    BOOL _onlyInjectVelocityForShortFlicks;
    BOOL _morphShouldShowBlackCurtainOverSource;
    BOOL _morphShouldMatchMove;
    BOOL _preventMultipleEdgesAfterAppInteraction;
    BOOL _resetSwitcherListAfterAppInteraction;
    double _hysteresis;
    double _minimumYDistanceForHomeOrAppSwitcher;
    double _minimumYDistanceToConsiderAccelerationDip;
    double _minimumXDistanceForFirstArcSwipe;
    double _minimumXDistanceToTriggerArcByDistancePortrait;
    double _minimumXDistanceToTriggerArcByDistanceLandscape;
    double _maximumYDistanceToTriggerArcByDistance;
    double _maximumYDistanceToTriggerArcByFlick;
    double _velocityYThresholdForUnconditionalHome;
    double _minimumYVelocityForHome;
    double _velocityXThresholdForUnconditionalArcSwipe;
    double _minimumYVelocityForArcSwipe;
    double _normalizedDistanceYThresholdForUnconditionalHome;
    double _normalizedDistanceYThresholdRangeForUnconditionalHome;
    double _pauseVelocityThresholdForAppSwitcher;
    double _pauseVelocityThresholdForDefiniteAppSwitcher;
    double _maximumAdaptivePauseVelocityThresholdForAppSwitcher;
    double _maximumAdaptiveVelocityThresholdForDock;
    double _appSwitcherVelocityThresholdIncreasingRateFraction;
    double _dockVelocityThresholdIncreasingRateFraction;
    double _adaptiveThresholdsDecreasingRateFraction;
    double _velocitySlopeThresholdForBottomSwipeUpArc;
    double _velocitySlopeThresholdForScrunchArc;
    double _velocitySlopeThresholdForCurrentLayout;
    double _edgeDistanceToCorrectGestureFinalDestination;
    double _edgeAngleWindow;
    double _cardFlyInMaximumVelocityThreshold;
    double _cardFlyInDelayAfterEnteringAppSwitcher;
    double _maximumDistanceYThresholdToPresentDock;
    double _homeGestureCenterZoomDownCenterYOffsetFactor;
    double _verticalRubberbandStart;
    double _verticalRubberbandEnd;
    double _verticalRubberbandDistance;
    double _verticalRubberbandExponent;
    double _horizontalRubberbandStart;
    double _horizontalRubberbandEnd;
    double _horizontalRubberbandDistance;
    double _horizontalRubberbandExponent;
    double _positionVelocityXPercentOfGestureVelocityX;
    double _positionVelocityYPercentOfGestureVelocityY;
    double _scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
    double _maximumScaleVelocity;
    double _morphSourceClipDuration;
    double _morphTargetUnclipDuration;
    double _morphSourceUnclipDuration;
    double _morphTargetClipDuration;
    double _secondsToAllowMultipleEdges;
    double _secondsToResetSwitcherListAfterTransition;
    double _travelDistanceForTranslatingScreenHeight;
    double _minimumDistanceThresholdToScaleMultiplier;
    SBHomeGestureExclusionTrapezoidSettings *_exclusionTrapezoidSettings;
}

@property (nonatomic) double adaptiveThresholdsDecreasingRateFraction; // @synthesize adaptiveThresholdsDecreasingRateFraction=_adaptiveThresholdsDecreasingRateFraction;
@property (nonatomic) double appSwitcherVelocityThresholdIncreasingRateFraction; // @synthesize appSwitcherVelocityThresholdIncreasingRateFraction=_appSwitcherVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double cardFlyInDelayAfterEnteringAppSwitcher; // @synthesize cardFlyInDelayAfterEnteringAppSwitcher=_cardFlyInDelayAfterEnteringAppSwitcher;
@property (nonatomic) double cardFlyInMaximumVelocityThreshold; // @synthesize cardFlyInMaximumVelocityThreshold=_cardFlyInMaximumVelocityThreshold;
@property (nonatomic) double dockVelocityThresholdIncreasingRateFraction; // @synthesize dockVelocityThresholdIncreasingRateFraction=_dockVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double edgeAngleWindow; // @synthesize edgeAngleWindow=_edgeAngleWindow;
@property (nonatomic) double edgeDistanceToCorrectGestureFinalDestination; // @synthesize edgeDistanceToCorrectGestureFinalDestination=_edgeDistanceToCorrectGestureFinalDestination;
@property (strong, nonatomic) SBHomeGestureExclusionTrapezoidSettings *exclusionTrapezoidSettings; // @synthesize exclusionTrapezoidSettings=_exclusionTrapezoidSettings;
@property (nonatomic) double homeGestureCenterZoomDownCenterYOffsetFactor; // @synthesize homeGestureCenterZoomDownCenterYOffsetFactor=_homeGestureCenterZoomDownCenterYOffsetFactor;
@property (nonatomic, getter=isHomeGestureEnabled) BOOL homeGestureEnabled; // @synthesize homeGestureEnabled=_homeGestureEnabled;
@property (nonatomic) double horizontalRubberbandDistance; // @synthesize horizontalRubberbandDistance=_horizontalRubberbandDistance;
@property (nonatomic) double horizontalRubberbandEnd; // @synthesize horizontalRubberbandEnd=_horizontalRubberbandEnd;
@property (nonatomic) double horizontalRubberbandExponent; // @synthesize horizontalRubberbandExponent=_horizontalRubberbandExponent;
@property (nonatomic) double horizontalRubberbandStart; // @synthesize horizontalRubberbandStart=_horizontalRubberbandStart;
@property (nonatomic) double hysteresis; // @synthesize hysteresis=_hysteresis;
@property (nonatomic) BOOL injectGestureVelocityForZoomDown; // @synthesize injectGestureVelocityForZoomDown=_injectGestureVelocityForZoomDown;
@property (nonatomic) double maximumAdaptivePauseVelocityThresholdForAppSwitcher; // @synthesize maximumAdaptivePauseVelocityThresholdForAppSwitcher=_maximumAdaptivePauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double maximumAdaptiveVelocityThresholdForDock; // @synthesize maximumAdaptiveVelocityThresholdForDock=_maximumAdaptiveVelocityThresholdForDock;
@property (nonatomic) double maximumDistanceYThresholdToPresentDock; // @synthesize maximumDistanceYThresholdToPresentDock=_maximumDistanceYThresholdToPresentDock;
@property (nonatomic) double maximumScaleVelocity; // @synthesize maximumScaleVelocity=_maximumScaleVelocity;
@property (nonatomic) double maximumYDistanceToTriggerArcByDistance; // @synthesize maximumYDistanceToTriggerArcByDistance=_maximumYDistanceToTriggerArcByDistance;
@property (nonatomic) double maximumYDistanceToTriggerArcByFlick; // @synthesize maximumYDistanceToTriggerArcByFlick=_maximumYDistanceToTriggerArcByFlick;
@property (nonatomic) double minimumDistanceThresholdToScaleMultiplier; // @synthesize minimumDistanceThresholdToScaleMultiplier=_minimumDistanceThresholdToScaleMultiplier;
@property (nonatomic) double minimumXDistanceForFirstArcSwipe; // @synthesize minimumXDistanceForFirstArcSwipe=_minimumXDistanceForFirstArcSwipe;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistanceLandscape; // @synthesize minimumXDistanceToTriggerArcByDistanceLandscape=_minimumXDistanceToTriggerArcByDistanceLandscape;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistancePortrait; // @synthesize minimumXDistanceToTriggerArcByDistancePortrait=_minimumXDistanceToTriggerArcByDistancePortrait;
@property (nonatomic) double minimumYDistanceForHomeOrAppSwitcher; // @synthesize minimumYDistanceForHomeOrAppSwitcher=_minimumYDistanceForHomeOrAppSwitcher;
@property (nonatomic) double minimumYDistanceToConsiderAccelerationDip; // @synthesize minimumYDistanceToConsiderAccelerationDip=_minimumYDistanceToConsiderAccelerationDip;
@property (nonatomic) double minimumYVelocityForArcSwipe; // @synthesize minimumYVelocityForArcSwipe=_minimumYVelocityForArcSwipe;
@property (nonatomic) double minimumYVelocityForHome; // @synthesize minimumYVelocityForHome=_minimumYVelocityForHome;
@property (nonatomic) BOOL morphShouldMatchMove; // @synthesize morphShouldMatchMove=_morphShouldMatchMove;
@property (nonatomic) BOOL morphShouldShowBlackCurtainOverSource; // @synthesize morphShouldShowBlackCurtainOverSource=_morphShouldShowBlackCurtainOverSource;
@property (nonatomic) double morphSourceClipDuration; // @synthesize morphSourceClipDuration=_morphSourceClipDuration;
@property (nonatomic) double morphSourceUnclipDuration; // @synthesize morphSourceUnclipDuration=_morphSourceUnclipDuration;
@property (nonatomic) double morphTargetClipDuration; // @synthesize morphTargetClipDuration=_morphTargetClipDuration;
@property (nonatomic) double morphTargetUnclipDuration; // @synthesize morphTargetUnclipDuration=_morphTargetUnclipDuration;
@property (nonatomic) double normalizedDistanceYThresholdForUnconditionalHome; // @synthesize normalizedDistanceYThresholdForUnconditionalHome=_normalizedDistanceYThresholdForUnconditionalHome;
@property (nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHome; // @synthesize normalizedDistanceYThresholdRangeForUnconditionalHome=_normalizedDistanceYThresholdRangeForUnconditionalHome;
@property (nonatomic) BOOL onlyInjectVelocityForShortFlicks; // @synthesize onlyInjectVelocityForShortFlicks=_onlyInjectVelocityForShortFlicks;
@property (nonatomic) double pauseVelocityThresholdForAppSwitcher; // @synthesize pauseVelocityThresholdForAppSwitcher=_pauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double pauseVelocityThresholdForDefiniteAppSwitcher; // @synthesize pauseVelocityThresholdForDefiniteAppSwitcher=_pauseVelocityThresholdForDefiniteAppSwitcher;
@property (nonatomic) double positionVelocityXPercentOfGestureVelocityX; // @synthesize positionVelocityXPercentOfGestureVelocityX=_positionVelocityXPercentOfGestureVelocityX;
@property (nonatomic) double positionVelocityYPercentOfGestureVelocityY; // @synthesize positionVelocityYPercentOfGestureVelocityY=_positionVelocityYPercentOfGestureVelocityY;
@property (nonatomic) BOOL preventMultipleEdgesAfterAppInteraction; // @synthesize preventMultipleEdgesAfterAppInteraction=_preventMultipleEdgesAfterAppInteraction;
@property (nonatomic) BOOL recognizeAlongEdge; // @synthesize recognizeAlongEdge=_recognizeAlongEdge;
@property (nonatomic) BOOL resetSwitcherListAfterAppInteraction; // @synthesize resetSwitcherListAfterAppInteraction=_resetSwitcherListAfterAppInteraction;
@property (nonatomic) double scaleVelocityPercentOfGestureVelocityYDividedByViewHeight; // @synthesize scaleVelocityPercentOfGestureVelocityYDividedByViewHeight=_scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
@property (nonatomic) double secondsToAllowMultipleEdges; // @synthesize secondsToAllowMultipleEdges=_secondsToAllowMultipleEdges;
@property (nonatomic) double secondsToResetSwitcherListAfterTransition; // @synthesize secondsToResetSwitcherListAfterTransition=_secondsToResetSwitcherListAfterTransition;
@property (nonatomic) BOOL snapToMaxVelocityThresholdAfterAccelerationDip; // @synthesize snapToMaxVelocityThresholdAfterAccelerationDip=_snapToMaxVelocityThresholdAfterAccelerationDip;
@property (nonatomic) double travelDistanceForTranslatingScreenHeight; // @synthesize travelDistanceForTranslatingScreenHeight=_travelDistanceForTranslatingScreenHeight;
@property (nonatomic) double velocitySlopeThresholdForBottomSwipeUpArc; // @synthesize velocitySlopeThresholdForBottomSwipeUpArc=_velocitySlopeThresholdForBottomSwipeUpArc;
@property (nonatomic) double velocitySlopeThresholdForCurrentLayout; // @synthesize velocitySlopeThresholdForCurrentLayout=_velocitySlopeThresholdForCurrentLayout;
@property (nonatomic) double velocitySlopeThresholdForScrunchArc; // @synthesize velocitySlopeThresholdForScrunchArc=_velocitySlopeThresholdForScrunchArc;
@property (nonatomic) double velocityXThresholdForUnconditionalArcSwipe; // @synthesize velocityXThresholdForUnconditionalArcSwipe=_velocityXThresholdForUnconditionalArcSwipe;
@property (nonatomic) double velocityYThresholdForUnconditionalHome; // @synthesize velocityYThresholdForUnconditionalHome=_velocityYThresholdForUnconditionalHome;
@property (nonatomic) double verticalRubberbandDistance; // @synthesize verticalRubberbandDistance=_verticalRubberbandDistance;
@property (nonatomic) double verticalRubberbandEnd; // @synthesize verticalRubberbandEnd=_verticalRubberbandEnd;
@property (nonatomic) double verticalRubberbandExponent; // @synthesize verticalRubberbandExponent=_verticalRubberbandExponent;
@property (nonatomic) double verticalRubberbandStart; // @synthesize verticalRubberbandStart=_verticalRubberbandStart;

+ (id)settingsControllerModule;
- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)setHomeGestureTuningDefaults;
- (void)setLatchDefaults;

@end
