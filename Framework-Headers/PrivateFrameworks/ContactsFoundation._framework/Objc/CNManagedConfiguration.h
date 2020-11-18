//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject
{
    NSString *_bundleIdentifier;
    id<CNManagedProfileConnection> _profileConnection;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) id<CNManagedProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;

+ (id)bundleIdentifierForAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)bundleIdentifierFromEntitlementForAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)bundleIdentifierFromInfoPlistForAuditToken:(CDStruct_6ad76789 *)arg1;
+ (id)os_log;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)arg1;
- (BOOL)accountIsManaged:(id)arg1;
- (BOOL)accountIsManagedForIdentifier:(id)arg1;
- (BOOL)allowsLocalAccount;
- (BOOL)canReadFromAccountWithIdentifier:(id)arg1;
- (BOOL)canWriteToAccountWithIdentifier:(id)arg1;
- (BOOL)deviceHasManagementRestrictions;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1 managedProfileConnection:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;

@end
