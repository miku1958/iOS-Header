//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKPrivacyController : NSObject
{
}

+ (BOOL)_hasEntitlementForAuthorizationExemption;
+ (id)sharedInstance;
+ (void)validatePermissionsExpiryWithCompletion:(CDUnknownBlockType)arg1;
- (long long)authorizationStatus;
- (void)requestAuthorization:(CDUnknownBlockType)arg1;

@end
