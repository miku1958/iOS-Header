//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSArray;

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline
{
    NSArray *_modes;
    double _delay;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3;

@end

