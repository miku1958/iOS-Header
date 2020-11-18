//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXPowerController : NSObject
{
    _Atomic unsigned int _assertionIdentifierGenerator;
    BOOL _backgrounded;
    unsigned int _assertionID;
    NSMutableDictionary *_assertionReasonsByIdentifier;
    NSObject<OS_dispatch_queue> *_powerControllerQueue;
    BKSProcessAssertion *_backgroundProcessAssertion;
    double _powerAssertionStartTime;
}

@property (nonatomic) unsigned int assertionID; // @synthesize assertionID=_assertionID;
@property (readonly, nonatomic) NSMutableDictionary *assertionReasonsByIdentifier; // @synthesize assertionReasonsByIdentifier=_assertionReasonsByIdentifier;
@property (strong, nonatomic) BKSProcessAssertion *backgroundProcessAssertion; // @synthesize backgroundProcessAssertion=_backgroundProcessAssertion;
@property (nonatomic, getter=isBackgrounded) BOOL backgrounded; // @synthesize backgrounded=_backgrounded;
@property (readonly, nonatomic) BOOL hasBackgroundAssertion;
@property (readonly, nonatomic) BOOL hasPowerAssertion;
@property (nonatomic) double powerAssertionStartTime; // @synthesize powerAssertionStartTime=_powerAssertionStartTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *powerControllerQueue; // @synthesize powerControllerQueue=_powerControllerQueue;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)acquireBackgroundAssertion;
- (void)acquireBackgroundAssertionIfNeeded;
- (void)addPowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (void)handleEnteringBackground;
- (void)handleEnteringForeground;
- (id)init;
- (void)invalidateBackgroundAssertion;
- (void)invalidateBackgroundAssertionIfNeeded;
- (void)releasePowerAssertion;
- (void)releasePowerAssertionIfNeeded;
- (void)removePowerAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)takePowerAssertion;
- (void)takePowerAssertionIfNeeded;

@end
