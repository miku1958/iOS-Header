//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariFoundation/NSObject-Protocol.h>

@class NSString;

@protocol SFAutoFillHelperProtocol <NSObject>
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:(NSString *)arg1 confirmPasswordRules:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
@end

