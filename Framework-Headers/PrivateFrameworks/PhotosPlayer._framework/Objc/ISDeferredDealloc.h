//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ISDeferredDealloc : NSObject
{
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}

+ (id)sharedInstance;
- (void)_performDeferredDealloc:(id)arg1;
- (void)dealloc;
- (id)init;

@end

