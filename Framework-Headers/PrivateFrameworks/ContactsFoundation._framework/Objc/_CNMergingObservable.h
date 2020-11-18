//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CNMergingObservable : CNObservable
{
    NSArray *_observables;
    NSMutableArray *_remainingObservables;
    NSMutableArray *_cancelationTokens;
}

- (void)cancelRemainingObservables;
- (void)dealloc;
- (id)initWithObservables:(id)arg1;
- (BOOL)observableIsLastToComplete:(id)arg1;
- (id)subscribe:(id)arg1;

@end

