//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineState.h>

#import <MobileTimer/MTBedtimeDNDStateMachineEventHandler-Protocol.h>

@class NSString;

@interface MTBedtimeDNDStateMachineState : MTStateMachineState <MTBedtimeDNDStateMachineEventHandler>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)bedtimeDNDEnabled:(BOOL)arg1 userRequested:(BOOL)arg2 date:(id)arg3;
- (id)determineNextState:(BOOL)arg1;
- (id)nextBedtimeDNDEndDate;
- (id)nextBedtimeDNDEndDateAfterDate:(id)arg1;
- (id)nextBedtimeDNDStartDate;
- (id)nextBedtimeDNDStartDateAfterDate:(id)arg1;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (void)updateState:(BOOL)arg1;
- (void)userWokeUp;

@end
