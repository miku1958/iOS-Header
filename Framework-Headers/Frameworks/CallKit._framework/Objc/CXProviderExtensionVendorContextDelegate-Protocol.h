//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXProviderExtensionVendorContext, CXTransaction;

@protocol CXProviderExtensionVendorContextDelegate <NSObject>
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledActionTimeout:(CXAction *)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledAudioSessionActivationStateChangedTo:(BOOL)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 receivedCommittedTransaction:(CXTransaction *)arg2;
@end

