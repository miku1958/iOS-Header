//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthenticationServices/NSObject-Protocol.h>

@class ASPasswordCredential, NSDictionary, NSError, NSString;

@protocol _ASAccountAuthenticationModificationExtensionHostContextProtocol <NSObject>
- (void)dismissRequestUI;
- (void)getSignInWithAppleAuthorizationWithState:(NSString *)arg1 nonce:(NSString *)arg2 completion:(void (^)(ASAuthorizationAppleIDCredential *, NSError *))arg3;
- (void)prepareToCancelRequestWithError:(NSError *)arg1 completion:(void (^)(void))arg2;
- (void)prepareToCompleteRequestWithUpdatedCredential:(ASPasswordCredential *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(void))arg3;
- (void)prepareToCompleteUpgradeToSignInWithAppleWithUserInfo:(NSDictionary *)arg1 completion:(void (^)(void))arg2;
@end
