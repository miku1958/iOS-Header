//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@class NSLock;
@protocol EFObservable;

@interface _EFDistinctUntilChangedObservable : EFObservable
{
    id<EFObservable> _observable;
    id _lastObservedResult;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (BOOL)_isLastResultDistinctFromResult:(id)arg1;
- (id)initWithObservable:(id)arg1;
- (id)subscribe:(id)arg1;

@end

