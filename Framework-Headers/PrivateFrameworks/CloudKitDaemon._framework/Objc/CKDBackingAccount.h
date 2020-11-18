//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersonNameComponents, NSString, NSURL;

@interface CKDBackingAccount : NSObject
{
    BOOL _canAuthWithCloudKit;
}

@property (readonly, nonatomic) BOOL canAuthWithCloudKit; // @synthesize canAuthWithCloudKit=_canAuthWithCloudKit;
@property (readonly, nonatomic) BOOL cloudKitIsEnabled;
@property (readonly, nonatomic) BOOL cloudPhotosIsEnabled;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSString *username;

+ (BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
+ (id)accountQueue;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (BOOL)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (id)primaryAccountInStore:(id)arg1;
- (id)_init;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)init;
- (BOOL)isDataclassEnabled:(id)arg1;
- (id)parentAppleAccount;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveVerifiedAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccountProperiesInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

