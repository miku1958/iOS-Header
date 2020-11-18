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
@property (readonly, nonatomic) NSString *displayedHostname;
@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSPersonNameComponents *fullName;
@property (readonly, nonatomic) BOOL iCloudDriveAllowsCellularAccess;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isFakeAccount;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSURL *privateCloudDBURL;
@property (readonly, nonatomic) NSURL *privateCodeServiceURL;
@property (readonly, nonatomic) NSURL *privateDeviceServiceURL;
@property (readonly, nonatomic) NSURL *privateMetricsServiceURL;
@property (readonly, nonatomic) NSURL *privateShareServiceURL;
@property (readonly, nonatomic) NSString *serverPreferredPushEnvironment;
@property (readonly, nonatomic) NSString *sharingURLHostname;
@property (readonly, nonatomic) NSString *username;

+ (BOOL)_lockedEnsureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (Class)_platformBackingAccountClass;
+ (id)accountQueue;
+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)ensureCloudKitChildAccountOnParentAccount:(id)arg1 inStore:(id)arg2;
+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2 propertyOverrides:(id)arg3 overridesByDataclass:(id)arg4;
+ (id)primaryAccountInStore:(id)arg1;
- (id)_init;
- (id)accountPropertiesForDataclass:(id)arg1;
- (BOOL)canRenew;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)init;
- (BOOL)isDataclassEnabled:(id)arg1;
- (id)parentAppleAccount;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)urlForDataclass:(id)arg1;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

