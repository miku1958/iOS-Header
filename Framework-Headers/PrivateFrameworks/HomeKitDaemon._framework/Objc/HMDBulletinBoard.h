//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class BBDataProviderConnection, HMDBulletinProvider, HMDHomeManager, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HMDBulletinBoard : NSObject <NSSecureCoding>
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

+ (void)archive;
+ (id)characteristicTupleKeyFromServiceContextID:(id)arg1 currentType:(id)arg2;
+ (void)initializeMapping;
+ (id)sharedBulletinBoard;
+ (BOOL)supportsSecureCoding;
+ (id)unarchive;
+ (BOOL)valueOfCharacteristic:(id)arg1 equalTo:(id)arg2;
- (void).cxx_destruct;
- (BOOL)_hasDuplicateBulletinForCharacteristic:(id)arg1;
- (void)_insertBulletinWithTitle:(id)arg1 imageURL:(id)arg2 message:(id)arg3 recordID:(id)arg4 bulletinType:(unsigned long long)arg5 actionURL:(id)arg6 bulletinContext:(struct NSDictionary *)arg7 actionContext:(struct NSDictionary *)arg8;
- (void)_insertImageBulletinsForChangedCharacteristics:(id)arg1 imageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_lookupBulletinForCharacteristic:(id)arg1;
- (void)_removeBulletinsUsingPredicate:(id)arg1;
- (void)_updateBulletin:(id)arg1;
- (void)configureHomeManager:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertBulletinForIncomingInvitation:(id)arg1;
- (id)insertBulletinForSecureTriggerExecutionPermission:(id)arg1;
- (void)insertBulletinsForChangedCharacteristics:(id)arg1 changedByThisDevice:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertImageBulletinsForChangedCharacteristics:(id)arg1 imageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)isSupportedCharacteristicForBulletin:(id)arg1;
- (BOOL)isTargetCharacteristic:(id)arg1 matchCurrentCharacteristic:(id)arg2;
- (BOOL)isTargetValueChangedByThisDevice:(id)arg1;
- (void)refreshHomeBadgeNumber;
- (void)refreshHomeConfiguration;
- (void)reloadDefaultSectionInfo;
- (void)removeAllBulletins;
- (void)removeBulletinWithRecordID:(id)arg1;
- (void)removeBulletinsForAccessory:(id)arg1;
- (void)removeBulletinsForHome:(id)arg1;
- (void)removeBulletinsForService:(id)arg1;
- (void)removeBulletinsForTrigger:(id)arg1;
- (id)trimMatchedCharacteristics:(id)arg1;
- (void)updateCharacteristicTupleFor:(id)arg1 withCurrentType:(id)arg2;

@end
