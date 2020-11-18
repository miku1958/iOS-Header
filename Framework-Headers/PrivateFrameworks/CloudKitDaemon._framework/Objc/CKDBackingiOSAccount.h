//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDBackingAccount.h>

@class ACAccount, ACAccountStore;

__attribute__((visibility("hidden")))
@interface CKDBackingiOSAccount : CKDBackingAccount
{
    ACAccountStore *_accountStore;
    ACAccount *_parentAppleAccount;
}

@property (readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic) ACAccount *ckAccount;
@property (strong, nonatomic) ACAccount *parentAppleAccount; // @synthesize parentAppleAccount=_parentAppleAccount;

+ (id)accountWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (void)determineCloudKitInfoFromEmail:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)primaryAccountInStore:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithParentAccount:(id)arg1 inStore:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (id)cloudKitAuthToken;
- (BOOL)cloudKitIsEnabled;
- (BOOL)cloudPhotosIsEnabled;
- (id)dsid;
- (id)iCloudAuthToken;
- (BOOL)iCloudDriveAllowsCellularAccess;
- (id)identifier;
- (id)primaryEmail;

@end

