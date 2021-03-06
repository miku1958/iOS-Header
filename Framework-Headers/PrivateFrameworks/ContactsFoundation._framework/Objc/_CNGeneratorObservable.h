//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class CNCancelationToken;
@protocol CNScheduler;

@interface _CNGeneratorObservable : CNObservable
{
    id _state;
    CDUnknownBlockType _condition;
    CDUnknownBlockType _nextState;
    CDUnknownBlockType _resultSelector;
    CDUnknownBlockType _delay;
    id<CNScheduler> _scheduler;
    CNCancelationToken *_cancelable;
}

- (void).cxx_destruct;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;
- (BOOL)isCanceled;
- (BOOL)isFinished;
- (void)scheduleNextResultForObserver:(id)arg1;
- (void)sendCurrentStateToObserver:(id)arg1;
- (void)sendResultsToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)updateState;

@end

