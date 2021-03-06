//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSString;
@protocol CNObserver, _CNObservableSkipUntilInputObserverDelegate;

@interface _CNObservableSkipUntilInputObserver : NSObject <CNObserver>
{
    id<CNObserver> _observer;
    id<_CNObservableSkipUntilInputObserverDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) id<_CNObservableSkipUntilInputObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id<CNObserver> observer; // @synthesize observer=_observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end

