//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol BSXPCConnectionListenerHandler, OS_dispatch_queue, OS_xpc_object;

@interface BSXPCConnectionListener : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    id<BSXPCConnectionListenerHandler> _handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
