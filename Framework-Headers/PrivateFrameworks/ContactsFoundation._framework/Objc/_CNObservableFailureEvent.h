//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservableEvent.h>

@class NSError;

@interface _CNObservableFailureEvent : CNObservableEvent
{
    NSError *_error;
}

- (void).cxx_destruct;
- (void)dematerializeWithObserver:(id)arg1;
- (id)error;
- (unsigned long long)eventType;
- (BOOL)hasValue;
- (unsigned long long)hash;
- (id)initWithError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)value;

@end

