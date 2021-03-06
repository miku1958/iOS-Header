//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;

@interface _KSiCloudDeviceListMonitor : NSObject
{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    long long _majorVersForCloudKitSyncMacOS;
    long long _minorVersForCloudKitSyncMacOS;
    long long _minorSubversionForCloudKitSyncMacOS;
    long long _majorVersForCloudKitSynciOS;
    long long _minorVersForCloudKitSynciOS;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (nonatomic) long long majorVersForCloudKitSyncMacOS; // @synthesize majorVersForCloudKitSyncMacOS=_majorVersForCloudKitSyncMacOS;
@property (nonatomic) long long majorVersForCloudKitSynciOS; // @synthesize majorVersForCloudKitSynciOS=_majorVersForCloudKitSynciOS;
@property (nonatomic) long long minorSubversionForCloudKitSyncMacOS; // @synthesize minorSubversionForCloudKitSyncMacOS=_minorSubversionForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSyncMacOS; // @synthesize minorVersForCloudKitSyncMacOS=_minorVersForCloudKitSyncMacOS;
@property (nonatomic) long long minorVersForCloudKitSynciOS; // @synthesize minorVersForCloudKitSynciOS=_minorVersForCloudKitSynciOS;

+ (id)iCloudDeviceListMonitor;
- (void).cxx_destruct;
- (BOOL)canMigrateToCloudKit;
- (void)dealloc;
- (void)fetchCloudKitDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchICloudDevicesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)isAccountCompatibleForCloudKitSyncingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)isSWVersionCloudKitSyncCompatible:(id)arg1;
- (void)queryMigrationState;
- (void)resetDataNoAccount;

@end

