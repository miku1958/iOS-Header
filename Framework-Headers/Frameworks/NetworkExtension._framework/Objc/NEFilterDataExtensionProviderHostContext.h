//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

#import <NetworkExtension/NEFilterDataExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderProtocol-Protocol.h>

@class NSString;

@interface NEFilterDataExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleRulesChanged;
- (void)provideRemediationMap:(id)arg1;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)report:(id)arg1;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendSocketContentFilterRequest;

@end

