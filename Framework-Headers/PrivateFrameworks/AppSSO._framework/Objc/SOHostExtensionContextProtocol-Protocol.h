//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSSO/SOExtensionContextProtocol-Protocol.h>

@class NSDictionary, NSError, NSURL, SOAuthorizationCredential;

@protocol SOHostExtensionContextProtocol <SOExtensionContextProtocol>
- (void)authorizationDidCompleteWithCredential:(SOAuthorizationCredential *)arg1 error:(NSError *)arg2;
- (void)canOpenURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)presentAuthorizationViewControllerWithHints:(NSDictionary *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

