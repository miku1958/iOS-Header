//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCInterface, TRIServerContext;

@interface TRIXPCAllocationStatusServiceListener : NSObject <NSXPCListenerDelegate>
{
    TRIServerContext *_serverContext;
    NSXPCInterface *_interface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServerContext:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

