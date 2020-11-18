//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString;

@interface ACAccount (BUAdditions)

@property (readonly, nonatomic) NSNumber *bu_DSID;
@property (readonly, nonatomic) NSString *bu_firstName;
@property (readonly, nonatomic) NSString *bu_fullName;
@property (readonly, nonatomic) BOOL bu_isManagedAppleID;
@property (readonly, nonatomic) NSString *bu_lastName;
@property (readonly, nonatomic) NSString *bu_storefront;

+ (id)bu_activeStoreAccount;
+ (id)bu_currentStorefront;
+ (id)bu_localStoreAccount;
+ (id)bu_storeAccountWithDSID:(id)arg1;
- (void)bu_removeWithCompletion:(CDUnknownBlockType)arg1;
- (id)bu_signOut;
@end
