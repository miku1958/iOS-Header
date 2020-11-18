//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/APSConnectionDelegate-Protocol.h>

@class APSConnection, NSMutableArray, NSString;

@interface FMAPSHandler : NSObject <APSConnectionDelegate>
{
    BOOL _registerForDarkWake;
    BOOL _registrationsSuspended;
    APSConnection *_apsConnection;
    NSMutableArray *_registeredDelegates;
    NSMutableArray *_pendingPushes;
    NSString *_environmentName;
}

@property (strong, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property (readonly, nonatomic) NSString *apsToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *pendingPushes; // @synthesize pendingPushes=_pendingPushes;
@property (nonatomic) BOOL registerForDarkWake; // @synthesize registerForDarkWake=_registerForDarkWake;
@property (strong, nonatomic) NSMutableArray *registeredDelegates; // @synthesize registeredDelegates=_registeredDelegates;
@property (nonatomic) BOOL registrationsSuspended; // @synthesize registrationsSuspended=_registrationsSuspended;
@property (readonly) Class superclass;

+ (id)constantForEnvironmentString:(id)arg1;
- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 onTopic:(id)arg2;
- (void)_registrationsWereResumed;
- (void)_setEnabledTopics:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)deregisterDelegate:(id)arg1;
- (id)init;
- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2;
- (void)invalidate;
- (void)registerDelegate:(id)arg1 forTopic:(id)arg2;
- (void)resumeRegistrations;
- (void)suspendRegistrations;

@end
