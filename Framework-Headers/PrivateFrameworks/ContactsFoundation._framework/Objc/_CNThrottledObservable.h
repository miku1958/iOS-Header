//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;

__attribute__((visibility("hidden")))
@interface _CNThrottledObservable : CNObservable
{
    double _interval;
    id<CNCancelable> _delayToken;
    id<CNObservable> _observable;
    id<CNScheduler> _scheduler;
    id _result;
    BOOL _hasResult;
    unsigned long long _resultCounter;
}

- (void)_cancel;
- (void)_clearResult;
- (void)_sendCompletionToObserver:(id)arg1;
- (void)_sendResultToObserver:(id)arg1 withIdentifier:(unsigned long long)arg2;
- (void)_setDelayToken:(id)arg1;
- (unsigned long long)_setResult:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 observable:(id)arg2 scheduler:(id)arg3;
- (id)subscribe:(id)arg1;

@end
