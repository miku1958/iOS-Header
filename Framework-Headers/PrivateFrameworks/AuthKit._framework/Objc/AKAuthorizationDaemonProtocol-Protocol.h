//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AKAuthorizationCredentialStateRequest, AKAuthorizationRevokeUpgradeContext, AKAuthorizationUserResponse, AKCredentialRequestContext, NSDictionary, NSString, NSXPCListenerEndpoint;

@protocol AKAuthorizationDaemonProtocol
- (void)continueFetchingIconForRequestContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)establishConnectionWithNotificationHandlerEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(NSXPCListenerEndpoint *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)fetchAppleOwnedDomainSetWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getCredentialStateForClientID:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)getCredentialStateForRequest:(AKAuthorizationCredentialStateRequest *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)getPresentationContextForRequestContext:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorizationPresentationContext *, NSError *))arg2;
- (void)performAuthorization:(AKCredentialRequestContext *)arg1 completion:(void (^)(AKAuthorization *, NSError *))arg2;
- (void)performAuthorizationWithContext:(AKCredentialRequestContext *)arg1 withUserProvidedInformation:(AKAuthorizationUserResponse *)arg2 completion:(void (^)(AKAuthorization *, NSError *))arg3;
- (void)revokeUpgradeWithContext:(AKAuthorizationRevokeUpgradeContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)startDiscoveryWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end
