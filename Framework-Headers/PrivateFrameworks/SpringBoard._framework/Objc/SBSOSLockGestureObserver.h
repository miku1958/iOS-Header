//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBPressSequenceRecognizerDelegate-Protocol.h>

@class BSAction, NSString, SBPressSequenceObserver, SBPressSequenceRecognizer, SBPressSequenceSettings, SBPressSequenceValidator;
@protocol SBSOSLockGestureObserverDelegate;

@interface SBSOSLockGestureObserver : NSObject <SBPressSequenceRecognizerDelegate>
{
    SBPressSequenceRecognizer *_recognizer;
    SBPressSequenceValidator *_validator;
    SBPressSequenceSettings *_settings;
    BOOL _lastKnownActiveState;
    BSAction *_triggerAction;
    BOOL _gestureLoggingEnabled;
    BOOL _sosEnabled;
    SBPressSequenceObserver *_sosLockPressSequenceObserver;
    id<SBSOSLockGestureObserverDelegate> _delegate;
    long long _configuration;
}

@property (readonly, nonatomic) long long configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBSOSLockGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGestureLoggingEnabled) BOOL gestureLoggingEnabled; // @synthesize gestureLoggingEnabled=_gestureLoggingEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) BOOL sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property (strong, nonatomic) SBPressSequenceObserver *sosLockPressSequenceObserver; // @synthesize sosLockPressSequenceObserver=_sosLockPressSequenceObserver;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long triggerMechanism;

- (void).cxx_destruct;
- (void)_configure;
- (void)_configureSettings;
- (double)_intervalThatSucceeds;
- (void)_noteTriggerActionRecievedResponse;
- (void)_noteTriggerDidBecomeActive;
- (void)_noteTriggerDidBecomeInactive;
- (unsigned long long)_numberOfPressesThatActivate;
- (unsigned long long)_numberOfPressesThatTrigger;
- (void)_setRecognizer:(id)arg1;
- (id)_validator;
- (double)_watchdogInterval;
- (id)init;
- (id)initWithConfiguration:(long long)arg1;
- (void)noteDidBeginSOSWithUUID:(id)arg1;
- (void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
- (void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;
- (void)pressSequenceRecognizerDidFail:(id)arg1;
- (void)registerPressDownWithTimestamp:(double)arg1;
- (void)registerPressUpWithTimestamp:(double)arg1;
- (void)resetWithNewConfiguration:(long long)arg1;

@end
