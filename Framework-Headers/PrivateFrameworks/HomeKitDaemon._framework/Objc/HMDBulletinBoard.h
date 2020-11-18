//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class BBDataProviderConnection, HMDBulletinProvider, HMDHomeManager, NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoard : HMFObject <NSSecureCoding>
{
    BOOL _enabled;
    NSArray *_categories;
    NSObject<OS_dispatch_queue> *_workQueue;
    BBDataProviderConnection *_dataProviderConnection;
    HMDBulletinProvider *_bulletinProvider;
    HMDHomeManager *_homeManager;
    NSMutableDictionary *_characteristicTuples;
}

@property (strong, nonatomic) HMDBulletinProvider *bulletinProvider; // @synthesize bulletinProvider=_bulletinProvider;
@property (readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property (strong, nonatomic) NSMutableDictionary *characteristicTuples; // @synthesize characteristicTuples=_characteristicTuples;
@property (strong, nonatomic) BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (weak, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)_supportedNonSecureServices;
+ (id)_supportedSecureServices;
+ (void)archive;
+ (id)bulletinSupportedCharacteristicsForService:(id)arg1;
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;
+ (void)initializeMapping;
+ (BOOL)isBulletinSupportedForCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (BOOL)isBulletinSupportedForNonSecureCharacteristicType:(id)arg1 serviceType:(id)arg2;
+ (BOOL)isCriticalNonSecureServiceType:(id)arg1;
+ (BOOL)presentationValueOfCharacteristic:(id)arg1 equalTo:(id)arg2;
+ (id)sharedBulletinBoard;
+ (BOOL)supportsSecureCoding;
+ (id)unarchive;
- (void).cxx_destruct;
- (id)_bulletinWithRecordID:(id)arg1;
- (BOOL)_hasDuplicateBulletinForCharacteristic:(id)arg1;
- (id)_insertBulletinWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary *)arg7 actionContext:(struct NSDictionary *)arg8;
- (id)_insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2;
- (id)_lookupBulletinForCharacteristic:(id)arg1;
- (void)_removeBulletinsUsingPredicate:(id)arg1;
- (BOOL)_shouldPostBulletinOnCurrentValueChangeForCharacteristic:(id)arg1;
- (void)_updateBulletin:(id)arg1;
- (void)_updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2 changedByThisDevice:(BOOL)arg3;
- (void)configureHomeManager:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertBulletinForIncomingInvitation:(id)arg1;
- (id)insertBulletinForSecureTrigger:(id)arg1;
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 snapshotData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isTargetCharacteristic:(id)arg1 matchCurrentCharacteristic:(id)arg2;
- (void)refreshHomeBadgeNumber;
- (void)refreshHomeConfiguration;
- (void)reloadDefaultSectionInfo;
- (void)removeAllBulletins;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeBulletinsForAccessory:(id)arg1;
- (void)removeBulletinsForHome:(id)arg1;
- (void)removeBulletinsForService:(id)arg1;
- (void)removeBulletinsForTrigger:(id)arg1;
- (id)updateBulletinForFirmwareUpdateInHome:(id)arg1;

@end
