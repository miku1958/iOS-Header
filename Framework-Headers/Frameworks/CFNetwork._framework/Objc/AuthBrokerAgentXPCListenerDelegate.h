//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSXPCListenerDelegate-Protocol.h>

@class ABRequestHandler, NSString;
@protocol OS_dispatch_queue;

@interface AuthBrokerAgentXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    ABRequestHandler *_requestHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
