//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NAScheduler;

__attribute__((visibility("hidden")))
@interface _HKSPObserverRecord : NSObject
{
    id _observer;
    id<NAScheduler> _callbackScheduler;
}

@property (readonly, nonatomic) id<NAScheduler> callbackScheduler; // @synthesize callbackScheduler=_callbackScheduler;
@property (readonly, weak, nonatomic) id observer; // @synthesize observer=_observer;

- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 callbackScheduler:(id)arg2;

@end

