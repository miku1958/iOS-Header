//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXProvider.h>

#import <CallKit/CXProviderExtensionVendorContextDelegate-Protocol.h>
#import <CallKit/NSExtensionRequestHandling-Protocol.h>

@class CXProviderExtensionVendorContext, NSString;

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling>
{
    CXProviderExtensionVendorContext *_extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CXProviderExtensionVendorContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2;
- (void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(BOOL)arg2;
- (void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2;
- (BOOL)requiresProxyingAVAudioSessionState;

@end

