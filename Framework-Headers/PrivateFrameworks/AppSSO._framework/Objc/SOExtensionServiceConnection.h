//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppSSO/SORemoteExtensionServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSXPCListenerEndpoint *_serviceXpcEndpoint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSXPCListenerEndpoint *serviceXpcEndpoint; // @synthesize serviceXpcEndpoint=_serviceXpcEndpoint;
@property (readonly) Class superclass;
@property (strong) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (BOOL)_connectToService;
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithListenerEndpoint:(id)arg1;

@end

