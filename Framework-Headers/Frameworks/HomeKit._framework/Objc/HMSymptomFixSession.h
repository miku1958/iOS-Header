//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFTimerDelegate-Protocol.h>

@class HMFTimer, HMFUnfairLock, HMSymptom, NSError, NSString, NSUUID, SFDeviceRepairSession, UIViewController, _HMContext;
@protocol HMSymptomFixSessionDelegate;

@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate>
{
    HMFUnfairLock *_lock;
    BOOL _deviceRepairSessionFinished;
    BOOL _hasSymptomDisappeared;
    unsigned int _deviceRepairFlags;
    long long _state;
    id<HMSymptomFixSessionDelegate> _delegate;
    NSError *_error;
    SFDeviceRepairSession *_deviceRepairSession;
    HMFTimer *_symptomDisappearanceTimer;
    UIViewController *_presentingViewController;
    _HMContext *_context;
    NSString *_logIdentifier;
    HMSymptom *_symptom;
    NSUUID *_deviceIdentifier;
}

@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMSymptomFixSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (nonatomic) unsigned int deviceRepairFlags; // @synthesize deviceRepairFlags=_deviceRepairFlags;
@property (strong, nonatomic) SFDeviceRepairSession *deviceRepairSession; // @synthesize deviceRepairSession=_deviceRepairSession;
@property (nonatomic, getter=isDeviceRepairSessionFinished) BOOL deviceRepairSessionFinished; // @synthesize deviceRepairSessionFinished=_deviceRepairSessionFinished;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL hasSymptomDisappeared; // @synthesize hasSymptomDisappeared=_hasSymptomDisappeared;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMSymptom *symptom; // @synthesize symptom=_symptom;
@property (strong, nonatomic) HMFTimer *symptomDisappearanceTimer; // @synthesize symptomDisappearanceTimer=_symptomDisappearanceTimer;

+ (id)_createDeviceRepairSession;
+ (id)_createSymptomDisappearanceTimer;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)_startSymptomDisappearanceTimer;
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)arg1 error:(id)arg2;
- (void)_updateState;
- (void)dealloc;
- (id)init;
- (id)initWithSymptom:(id)arg1 deviceIdentifier:(id)arg2 context:(id)arg3;
- (void)noteSymptomDisappeared;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end

