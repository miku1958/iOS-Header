//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@protocol EFObservable, EFScheduler;

@interface _EFIdealTimerObservable : EFObservable
{
    id<EFObservable> _input;
    id<EFScheduler> _scheduler;
    double _interval;
}

- (void).cxx_destruct;
- (id)initWithObservable:(id)arg1 timeInterval:(double)arg2 scheduler:(id)arg3;
- (id)subscribe:(id)arg1;

@end
