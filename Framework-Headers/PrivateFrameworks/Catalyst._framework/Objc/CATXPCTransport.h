//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTransport.h>

#import <Catalyst/CATXPCInterface-Protocol.h>

@class NSString, NSXPCConnection;

@interface CATXPCTransport : CATTransport <CATXPCInterface>
{
    NSXPCConnection *mConnection;
    BOOL mConnectionHasResumed;
    BOOL mConnectionShouldInvalidate;
    BOOL mConnectionHasInvalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
- (void).cxx_destruct;
- (BOOL)boolValueForEntitlement:(id)arg1;
- (void)dealloc;
- (void)didInvalidate;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)arg1;
- (void)processMessage:(id)arg1;
- (void)resumeConnection;
- (void)setUpConnection;
- (void)suspendConnection;
- (void)tearDownConnection;
- (void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2;
- (id)valueForEntitlement:(id)arg1;

@end

