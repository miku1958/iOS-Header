//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLSettingsSyncStateMachine;

@interface SCLSettingsSyncState : NSObject
{
    unsigned long long _status;
    SCLSettingsSyncStateMachine *_stateMachine;
}

@property (weak, nonatomic) SCLSettingsSyncStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly, nonatomic) unsigned long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (void)commitSettings;
- (void)didEnqueueMessage:(id)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (void)enqueueFailedWithError:(id)arg1;
- (id)initWithStateMachine:(id)arg1;
- (void)message:(id)arg1 didFailToAcknowledgeWithError:(id)arg2;
- (void)message:(id)arg1 failedWithError:(id)arg2;
- (void)messageDidSend:(id)arg1;
- (void)messageWasDelivered:(id)arg1;
- (void)settingsDidChange;
- (void)significantUserInteractionOccurred;
- (void)willExitWithNextState:(id)arg1;
- (void)xpcActivityStarted;

@end

