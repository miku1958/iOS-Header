//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/BSTimer.h>

@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSTimer
{
    SBPIPInterruptionAssertion *_debouncedAssertion;
}

@property (weak, nonatomic) SBPIPInterruptionAssertion *debouncedAssertion; // @synthesize debouncedAssertion=_debouncedAssertion;

- (void).cxx_destruct;

@end

