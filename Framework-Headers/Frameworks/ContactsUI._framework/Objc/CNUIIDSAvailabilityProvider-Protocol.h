//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNObservable, NSArray;
@protocol CNSchedulerProvider;

@protocol CNUIIDSAvailabilityProvider <NSObject>
- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id<CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id<CNSchedulerProvider>)arg2;
@end

