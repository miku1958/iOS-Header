//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNObserver-Protocol.h>

@class CNSuspendableSchedulerDecorator, NSString;
@protocol CNObserver;

@interface _CNBufferedObserver : NSObject <CNObserver>
{
    CNSuspendableSchedulerDecorator *_observerScheduler;
    id<CNObserver> _observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNObserver> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) CNSuspendableSchedulerDecorator *observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property (readonly) Class superclass;

+ (id)bufferObserver:(id)arg1 schedulerProvider:(id)arg2;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 scheduler:(id)arg2;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;
- (void)resume;

@end

