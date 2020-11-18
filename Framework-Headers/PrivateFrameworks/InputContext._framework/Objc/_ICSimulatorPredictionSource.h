//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICPredictionSource-Protocol.h>

@interface _ICSimulatorPredictionSource : NSObject <_ICPredictionSource>
{
}

- (void)connectionsPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(CDUnknownBlockType)arg5;
- (void)eventPredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(CDUnknownBlockType)arg5;
- (id)genErrorWithMessage:(id)arg1 withCode:(int)arg2;
- (id)getValueWithFieldOfInterest:(id)arg1 withContact:(id)arg2 withLocale:(id)arg3;
- (BOOL)isFirstPersonTrigger:(id)arg1;
- (id)labelFromCNLabel:(id)arg1 withLocale:(id)arg2;
- (void)namesWithContactsLimit:(unsigned long long)arg1 withFoundLimit:(unsigned long long)arg2 timeout:(float)arg3 handler:(CDUnknownBlockType)arg4;
- (void)peoplePredictionsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeout:(float)arg4 handler:(CDUnknownBlockType)arg5;

@end

