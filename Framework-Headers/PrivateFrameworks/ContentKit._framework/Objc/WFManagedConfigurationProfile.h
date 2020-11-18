//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, MCProfileConnection, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface WFManagedConfigurationProfile : NSObject
{
    NSSet *_managedAppBundleIDs;
    ACAccount *_primaryAppleAccount;
    NSObject<OS_dispatch_queue> *_operatingQueue;
    ACAccountStore *_accountStore;
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_accountIdentifiersByDataClass;
    MCProfileConnection *_profileConnection;
}

@property (readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass; // @synthesize accountIdentifiersByDataClass=_accountIdentifiersByDataClass;
@property (readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
@property (readonly) BOOL isBluetoothModificationAllowed;
@property (readonly) BOOL isOpenInRestrictionInEffect;
@property (readonly) BOOL isWiFiPowerModificationAllowed;
@property (readonly, copy, nonatomic) NSSet *managedAppBundleIDs; // @synthesize managedAppBundleIDs=_managedAppBundleIDs;
@property (readonly) BOOL mayOpenFromManagedToUnmanaged;
@property (readonly) BOOL mayOpenFromUnmanagedToManaged;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue; // @synthesize operatingQueue=_operatingQueue;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) ACAccount *primaryAppleAccount; // @synthesize primaryAppleAccount=_primaryAppleAccount;
@property (readonly, copy, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;

+ (id)defaultProfile;
- (void).cxx_destruct;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)accountWithIdentifier:(id)arg1;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;
- (void)handleManagedAppDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithProfileConnection:(id)arg1 accountStore:(id)arg2;
- (BOOL)isAccountBasedSourceApp:(id)arg1;
- (BOOL)isAccountManaged:(id)arg1;
- (BOOL)isAppManaged:(id)arg1;
- (unsigned long long)managedLevelForContentOfURL:(id)arg1;
- (void)removeCachedChildrenAccountForAccount:(id)arg1;

@end
