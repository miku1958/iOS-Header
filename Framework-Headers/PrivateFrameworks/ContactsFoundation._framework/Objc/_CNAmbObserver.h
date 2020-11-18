//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class NSString;
@protocol CNObserver, _CNAmbObserverDelegate;

@interface _CNAmbObserver : NSObject <CNObserver>
{
    id<CNObserver> _observer;
    id<_CNAmbObserverDelegate> _delegate;
    BOOL _isWinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)declareWinner;
- (id)initWithObserver:(id)arg1 delegate:(id)arg2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
