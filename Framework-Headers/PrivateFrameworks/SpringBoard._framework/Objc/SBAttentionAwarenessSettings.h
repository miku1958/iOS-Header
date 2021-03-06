//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUISettings.h>

#import <SpringBoard/MCProfileConnectionObserver-Protocol.h>

@class NSString;

@interface SBAttentionAwarenessSettings : SBUISettings <MCProfileConnectionObserver>
{
    BOOL _allowsAttentionAwareAutoLock;
    BOOL _supportsAttentionSensor;
    BOOL _shouldUseAttentionSensor;
    BOOL _isObservingDataSources;
    struct AWNotification_s *_attentionAwarenessToken;
    double _sampleInterval;
    double _dimInterval;
    double _sleepInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dimInterval; // @synthesize dimInterval=_dimInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property (nonatomic) BOOL shouldUseAttentionSensor;
@property (nonatomic) double sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property (readonly) Class superclass;

+ (BOOL)attentionSensorSupported;
+ (id)settingsControllerModule;
- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)setDefaultValues;

@end

