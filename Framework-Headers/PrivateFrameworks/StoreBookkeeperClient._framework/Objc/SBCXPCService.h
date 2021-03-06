//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, SBCClientConfiguration, SBCXPCServiceInterface;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject
{
    BOOL _connectionConfigured;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    SBCClientConfiguration *_clientConfiguration;
    SBCXPCServiceInterface *_XPCServiceInterface;
}

@property (readonly) SBCXPCServiceInterface *XPCServiceInterface; // @synthesize XPCServiceInterface=_XPCServiceInterface;
@property (readonly) SBCClientConfiguration *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property (getter=isConnectionConfigured) BOOL connectionConfigured; // @synthesize connectionConfigured=_connectionConfigured;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;
- (void).cxx_destruct;
- (void)_openServiceConnection;
- (void)_serverDidLaunch;
- (void)closeServiceConnection;
- (void)dealloc;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (id)newServiceConnection;
- (void)setClientConfiguration:(id)arg1;

@end

