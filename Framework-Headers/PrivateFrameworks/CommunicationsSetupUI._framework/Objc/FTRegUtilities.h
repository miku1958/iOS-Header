//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTRegUtilities : NSObject
{
}

+ (void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2;
+ (void)changePasswordControllerDidCancel:(id)arg1;
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
+ (id)serviceWithType:(long long)arg1;
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;

@end

