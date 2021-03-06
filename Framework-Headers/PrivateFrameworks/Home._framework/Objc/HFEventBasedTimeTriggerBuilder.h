//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFConcreteTimeTriggerBuilder.h>

@class NSSet;

@interface HFEventBasedTimeTriggerBuilder : HFConcreteTimeTriggerBuilder
{
    NSSet *_stagedEvents;
}

@property (strong, nonatomic) NSSet *stagedEvents; // @synthesize stagedEvents=_stagedEvents;

- (void).cxx_destruct;
- (void)_setupWithExistingTrigger:(id)arg1;
- (id)_updateEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (void)setRecurrences:(id)arg1;

@end

