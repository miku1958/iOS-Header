//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SiriContext;

@interface SASActivationRequest : NSObject
{
    int _waketimeMIB[12];
    unsigned long long _waketimeMIBSize;
    long long _activationType;
    long long _activationEvent;
    SiriContext *_context;
    double _activationTime;
    double _buttonDownTime;
    long long _requestSource;
}

@property (nonatomic) long long activationEvent; // @synthesize activationEvent=_activationEvent;
@property (nonatomic) double activationTime; // @synthesize activationTime=_activationTime;
@property (nonatomic) long long activationType; // @synthesize activationType=_activationType;
@property (nonatomic) double buttonDownTime; // @synthesize buttonDownTime=_buttonDownTime;
@property (strong, nonatomic) SiriContext *context; // @synthesize context=_context;
@property (nonatomic) long long requestSource; // @synthesize requestSource=_requestSource;

+ (long long)requestSourceForButtonIdentifier:(long long)arg1;
- (void).cxx_destruct;
- (double)buttonDownTimestamp;
- (double)computedActivationTime;
- (id)description;
- (id)eventSource;
- (id)init;
- (id)initWithBreadcrumbRequest;
- (id)initWithButtonIdentifier:(long long)arg1 context:(id)arg2;
- (id)initWithContinuityContext:(id)arg1;
- (id)initWithDirectActionEvent:(long long)arg1 context:(id)arg2;
- (id)initWithSimpleActivation:(long long)arg1;
- (id)initWithSpotlightContext:(id)arg1;
- (id)initWithTestingContext:(id)arg1;
- (id)initWithVoiceTriggerContext:(id)arg1;
- (id)initWithVoiceTriggerRequest;
- (BOOL)isBluetoothRequest;
- (BOOL)isButtonRequest;
- (BOOL)isContinuityRequest;
- (BOOL)isDeviceButtonRequest;
- (BOOL)isDirectActionRequest;
- (BOOL)isEyesFreeRequestSource;
- (BOOL)isHoldToTalkSource;
- (BOOL)isSpotlightRequest;
- (BOOL)isTestingRequest;
- (BOOL)isUIFreeRequestSource;
- (BOOL)isVoiceRequest;

@end
