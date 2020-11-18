//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFTimer, HMHomeInvitationData, NSArray, NSDate, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDHomeInvitation : HMFObject <HMFTimerDelegate, NSSecureCoding>
{
    long long _invitationState;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDHome *_home;
    HMHomeInvitationData *_invitationData;
    NSObject<OS_dispatch_queue> *_clientQueue;
    CDUnknownBlockType _resolutionHandler;
    CDUnknownBlockType _expirationHandler;
    HMFTimer *_timer;
    NSArray *_operations;
}

@property (readonly, nonatomic, getter=isAccepted) BOOL accepted;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDeclined) BOOL declined;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (strong, nonatomic) HMHomeInvitationData *invitationData; // @synthesize invitationData=_invitationData;
@property (nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
@property (strong, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (copy, nonatomic) CDUnknownBlockType resolutionHandler; // @synthesize resolutionHandler=_resolutionHandler;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_configureTimer;
- (void)_resolve:(BOOL)arg1;
- (void)accept;
- (void)decline;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (void)expire;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;
- (BOOL)refreshDisplayName;
- (void)timerDidFire:(id)arg1;
- (void)updateInvitationState:(long long)arg1;
- (void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2;

@end

