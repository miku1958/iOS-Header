//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTXPCListener.h>

#import <coreroutine/NSXPCListenerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTInternalClientListener : RTXPCListener <NSXPCListenerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)handleClientConnection:(id)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

