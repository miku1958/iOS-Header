//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HDContentProtectionObserver, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HDContentProtectionObserverWrapper : NSObject
{
    id<HDContentProtectionObserver> _observer;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, weak, nonatomic) id<HDContentProtectionObserver> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObserver:(id)arg1 queue:(id)arg2;

@end

