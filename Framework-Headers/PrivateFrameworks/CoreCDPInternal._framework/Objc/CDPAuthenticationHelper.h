//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPAuthenticationHelper : NSObject
{
}

+ (id)_authContextForContext:(id)arg1;
+ (void)_authWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_contextForPrimaryAccount;
+ (id)_contextForPrimaryAccountSilentAuth;
+ (void)silentAuthenticationForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)silentAuthenticationForPrimaryAccountWithCompletion:(CDUnknownBlockType)arg1;

@end

