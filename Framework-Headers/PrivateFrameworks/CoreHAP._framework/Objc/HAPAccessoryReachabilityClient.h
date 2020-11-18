//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPAccessoryReachabilityClient-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>
#import <CoreHAP/HMFTimerDelegate-Protocol.h>

@class HAP2PropertyLock, HAP2SerializedOperationQueue, HAPDeviceID, HMFTimer, NSString;
@protocol HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient>
{
    id<HAPAccessoryReachabilityProfile> _profile;
    id<HAPAccessoryReachabilityDelegate> _delegate;
    HAP2SerializedOperationQueue *_operationQueue;
    HAP2PropertyLock *_propertyLock;
    HAPDeviceID *_identifier;
    long long _state;
    HMFTimer *_activityTimer;
    double _confirmInterval;
}

@property (readonly, nonatomic) double confirmInterval; // @synthesize confirmInterval=_confirmInterval;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAPAccessoryReachabilityDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)logCategory;
+ (id)new;
+ (id)shortDescription;
- (void).cxx_destruct;
- (void)_enterState:(long long)arg1;
- (void)_initializeMachine;
- (void)_poll;
- (void)_runStateMachine;
- (void)_stop;
- (void)_timerDidFire:(id)arg1;
- (void)_waitForActivity;
- (void)confirm;
- (id)init;
- (id)initWithIdentifier:(id)arg1 profile:(id)arg2 operationQueue:(id)arg3;
- (void)kick;
- (id)shortDescription;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)timerDidFire:(id)arg1;

@end
