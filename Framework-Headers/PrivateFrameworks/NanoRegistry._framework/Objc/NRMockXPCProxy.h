//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NRMockXPCProxy : NSProxy
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _async;
    id _target;
}

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

