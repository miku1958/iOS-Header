//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <PassKitCore/PKIssuerProvisioningExtensionConsumerContextExportedInterface-Protocol.h>

@class NSMutableArray, NSString;

@interface PKIssuerProvisioningExtensionConsumerContext : NSExtensionContext <PKIssuerProvisioningExtensionConsumerContextExportedInterface>
{
    struct os_unfair_lock_s _lock;
    BOOL _invalidated;
    BOOL _connected;
    NSMutableArray *_blocksQueuedForConnected;
    NSString *_teamID;
    BOOL _entitled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)generateRequestWithEntryIdentifier:(id)arg1 configuration:(id)arg2 certificateChain:(id)arg3 nonce:(id)arg4 nonceSignature:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)init;
- (void)passEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remotePassEntriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;

@end

