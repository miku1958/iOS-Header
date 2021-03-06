//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachine.h>

#import <MobileTimer/MTSleepModeStateMachineEventHandler-Protocol.h>

@class MTSleepModeStateMachineInitialState, MTSleepModeStateMachineOffState, MTSleepModeStateMachineWaitingState, NSString;

@interface MTSleepModeStateMachine : MTStateMachine <MTSleepModeStateMachineEventHandler>
{
    MTSleepModeStateMachineInitialState *_initialState;
    MTSleepModeStateMachineOffState *_offState;
    MTSleepModeStateMachineWaitingState *_waitingState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MTSleepModeStateMachineInitialState *initialState; // @synthesize initialState=_initialState;
@property (readonly, nonatomic) MTSleepModeStateMachineOffState *offState; // @synthesize offState=_offState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) MTSleepModeStateMachineWaitingState *waitingState; // @synthesize waitingState=_waitingState;

- (void).cxx_destruct;
- (id)currentDate;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (BOOL)isSleepModeEnabled:(BOOL *)arg1;
- (BOOL)isUserAsleep;
- (id)keepOffUntilDate;
- (id)onStateWithSleepModeEndDate:(id)arg1;
- (id)sleepAlarm;
- (void)sleepModeEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3;
- (BOOL)stateMachine:(id)arg1 disengageSleepModeUserRequested:(BOOL)arg2;
- (BOOL)stateMachine:(id)arg1 engageSleepModeUntilDate:(id)arg2 userEngaged:(BOOL)arg3;
- (void)stateMachine:(id)arg1 keepSleepModeOffUntilDate:(id)arg2;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepSleepModeOff:(id)arg1;
- (id)stateMachineLog;
- (void)updateState:(BOOL)arg1;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1;
- (void)userWokeUp;

@end

