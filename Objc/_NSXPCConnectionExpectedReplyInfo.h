//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBlock, NSDictionary, NSXPCInterface;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExpectedReplyInfo : NSObject
{
    NSBlock *_replyBlock;
    CDUnknownBlockType _errorBlock;
    NSObject<OS_dispatch_semaphore> *_timeoutSemaphore;
    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    unsigned long long _proxyNumber;
}

- (void)dealloc;

@end

