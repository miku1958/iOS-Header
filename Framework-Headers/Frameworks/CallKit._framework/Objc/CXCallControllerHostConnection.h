//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallControllerHostProtocol-Protocol.h>
#import <CallKit/CXCallControllerVendorProtocol-Protocol.h>

@class NSBundle, NSSet, NSString, NSXPCConnection;
@protocol CXCallControllerHostConnectionDelegate, CXCallControllerVendorProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol>
{
    BOOL _hasVoIPBackgroundMode;
    NSString *_applicationIdentifier;
    NSBundle *_bundle;
    id<CXCallControllerHostConnectionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSXPCConnection *_connection;
    NSSet *_capabilities;
}

@property (copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (copy, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property (copy, nonatomic) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CXCallControllerHostConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL entitledForPrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL entitledForPublicAPI;
@property (nonatomic) BOOL hasVoIPBackgroundMode; // @synthesize hasVoIPBackgroundMode=_hasVoIPBackgroundMode;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CXCallControllerVendorProtocol> remoteObjectProxy;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)addOrUpdateCall:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1 serialQueue:(id)arg2;
- (oneway void)removeCall:(id)arg1;
- (oneway void)requestCalls:(CDUnknownBlockType)arg1;
- (oneway void)requestTransaction:(id)arg1 forExtensionIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;

@end

