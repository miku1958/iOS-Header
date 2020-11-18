//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, IMUserNotificationCenter, NSMutableSet;

@interface FTPasswordManager : NSObject
{
    NSMutableSet *_runningQueries;
    ACAccountStore *_accountStore;
    IMUserNotificationCenter *_userNotificationCenter;
}

+ (id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(BOOL)arg3 showForgetPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5;
+ (id)sharedInstance;
- (id)_accountBasedOnProfileID:(id)arg1 orUsername:(id)arg2 inStore:(id)arg3;
- (id)_accountOptionsDictForRenewCredentialsForService:(id)arg1 username:(id)arg2;
- (id)_accountWithProfileID:(id)arg1 username:(id)arg2 inStore:(id)arg3;
- (id)_accountWithProfileIDMatchingUser:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsername:(id)arg1 inStore:(id)arg2;
- (id)_accountWithUsernameAlias:(id)arg1 inStore:(id)arg2;
- (id)_findIDSAccountInStore:(id)arg1 withCriteria:(CDUnknownBlockType)arg2;
- (id)_findIDSAccountsInStore:(id)arg1 withCriteria:(CDUnknownBlockType)arg2;
- (id)_keychainAuthTokenForUsername:(id)arg1 service:(id)arg2;
- (id)_keychainPasswordForUsername:(id)arg1 service:(id)arg2;
- (id)_primaryAppleAccount;
- (id)_profileIDForUsername:(id)arg1 inStore:(id)arg2;
- (void)_setKeychainAuthToken:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (void)_setKeychainPassword:(id)arg1 forUsername:(id)arg2 service:(id)arg3;
- (id)acAccountWithProfileID:(id)arg1 username:(id)arg2 accountStore:(id)arg3;
- (void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2;
- (void)dealloc;
- (void)fetchAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)fetchPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id *)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithUserNotificationCenter:(id)arg1;
- (BOOL)isiCloudSignedIn;
- (id)profileIDForACAccount:(id)arg1;
- (void)requestAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(BOOL)arg4 showForgotPassword:(BOOL)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(BOOL)arg3 showForgotPassword:(BOOL)arg4 shouldRememberPassword:(BOOL)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 accountStatus:(id)arg6 outRequestID:(id *)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)setAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 authToken:(id)arg4 selfHandle:(id)arg5 outRequestID:(id *)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)setHandlesForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 handles:(id)arg4;
- (void)setPasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 password:(id)arg4 outRequestID:(id *)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (BOOL)supportsAuthTokenRequests;

@end

