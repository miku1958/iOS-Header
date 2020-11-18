//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonGestureParametersObserver-Protocol.h>
#import <SpringBoard/SBPressPrecedenceArbiter-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class BSMonotonicReferenceTime, NSString, SBClickGestureRecognizer, SBHardwareButtonGestureParameters, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBPressGestureRecognizer, SBVolumeHardwareButton, UIGestureRecognizer;

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <UIGestureRecognizerDelegate, SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter>
{
    unsigned long long _aggdStartTime;
    BSMonotonicReferenceTime *_lastPressDownReferenceTime;
    SBLockHardwareButtonActions *_buttonActions;
    SBHardwareButtonGestureParameters *_buttonGestureParameters;
    SBPressGestureRecognizer *_buttonDownGestureRecognizer;
    SBClickGestureRecognizer *_singlePressGestureRecognizer;
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;
    SBClickGestureRecognizer *_doublePressGestureRecognizer;
    SBClickGestureRecognizer *_triplePressGestureRecognizer;
    SBClickGestureRecognizer *_quadruplePressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    SBLongPressGestureRecognizer *_shutdownGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
    SBVolumeHardwareButton *_volumeHardwareButton;
    long long _homeButtonType;
    unsigned long long _configuredMaximumPressCount;
    unsigned long long _currentPressCount;
}

@property (strong, nonatomic) SBLockHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
@property (strong, nonatomic) SBPressGestureRecognizer *buttonDownGestureRecognizer; // @synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer;
@property (strong, nonatomic) SBHardwareButtonGestureParameters *buttonGestureParameters; // @synthesize buttonGestureParameters=_buttonGestureParameters;
@property (nonatomic) unsigned long long configuredMaximumPressCount; // @synthesize configuredMaximumPressCount=_configuredMaximumPressCount;
@property (nonatomic) unsigned long long currentPressCount; // @synthesize currentPressCount=_currentPressCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SBClickGestureRecognizer *doublePressGestureRecognizer; // @synthesize doublePressGestureRecognizer=_doublePressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeButtonType; // @synthesize homeButtonType=_homeButtonType;
@property (weak, nonatomic) SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property (readonly, nonatomic) BOOL isButtonDown;
@property (strong, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property (strong, nonatomic) SBClickGestureRecognizer *quadruplePressGestureRecognizer; // @synthesize quadruplePressGestureRecognizer=_quadruplePressGestureRecognizer;
@property (weak, nonatomic) UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property (weak, nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer; // @synthesize shutdownGestureRecognizer=_shutdownGestureRecognizer;
@property (strong, nonatomic) SBClickGestureRecognizer *singlePressGestureRecognizer; // @synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBClickGestureRecognizer *triplePressGestureRecognizer; // @synthesize triplePressGestureRecognizer=_triplePressGestureRecognizer;
@property (weak, nonatomic) SBVolumeHardwareButton *volumeHardwareButton; // @synthesize volumeHardwareButton=_volumeHardwareButton;

- (void).cxx_destruct;
- (void)SOSTriggerMechanismDidChange;
- (void)_createGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_reconfigureButtonGestureRecognizers;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(BOOL)arg1;
- (void)_updatePressCountForDownEvent;
- (void)buttonDown:(id)arg1;
- (void)cancelLongPress;
- (void)doublePress:(id)arg1;
- (void)forceResetSequenceDidBegin;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)hardwareButtonGestureParameters;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(BOOL)arg8;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6;
- (void)longPress:(id)arg1;
- (id)preemptablePressGestureRecognizers;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)quadruplePress:(id)arg1;
- (BOOL)reverseFadeOutIfNeeded;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (void)singlePress:(id)arg1;
- (void)triplePress:(id)arg1;

@end
