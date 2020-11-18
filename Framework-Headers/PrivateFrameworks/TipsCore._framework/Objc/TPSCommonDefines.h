//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TipsCore/IDSServiceDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUserDefaults, TPSTipStatusController;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject <IDSServiceDelegate>
{
    NSMutableArray *_cloudDevices;
    BOOL _tipsAccessAllowed;
    BOOL _supportsUIApplication;
    BOOL _phoneUI;
    int _maxVersion;
    NSString *_majorVersion;
    NSString *_model;
    NSUserDefaults *_appGroupDefaults;
    NSMutableDictionary *_appBundleIDMap;
    long long _assetRatioType;
    TPSTipStatusController *_tipStatusController;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_collectionStatusMap;
}

@property (strong, nonatomic) NSMutableDictionary *appBundleIDMap; // @synthesize appBundleIDMap=_appBundleIDMap;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults; // @synthesize appGroupDefaults=_appGroupDefaults;
@property (readonly, nonatomic) long long assetRatioType; // @synthesize assetRatioType=_assetRatioType;
@property (strong, nonatomic) NSMutableDictionary *collectionStatusMap; // @synthesize collectionStatusMap=_collectionStatusMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *majorVersion; // @synthesize majorVersion=_majorVersion;
@property (nonatomic) int maxVersion; // @synthesize maxVersion=_maxVersion;
@property (strong, nonatomic) NSString *model; // @synthesize model=_model;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI; // @dynamic padUI;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI; // @synthesize phoneUI=_phoneUI;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsUIApplication; // @synthesize supportsUIApplication=_supportsUIApplication;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (strong, nonatomic) TPSTipStatusController *tipStatusController; // @synthesize tipStatusController=_tipStatusController;
@property (readonly, nonatomic) BOOL tipsAccessAllowed; // @synthesize tipsAccessAllowed=_tipsAccessAllowed;

+ (id)appGroupIdentifier;
+ (BOOL)hardwareChanged;
+ (BOOL)isInternalDevice;
+ (id)osBuild;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)activateDateForCollectionIdentifier:(id)arg1;
- (void)activatedCollection:(id)arg1;
- (void)activatedCollections:(id)arg1;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)arg1;
- (BOOL)appValidWithIdentifier:(id)arg1;
- (void)clearDataCache;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)arg1;
- (id)collectionStatusForCollectionIdentifier:(id)arg1;
- (id)dateForCollectionIdentifier:(id)arg1 dateType:(unsigned long long)arg2;
- (void)featuredCollection:(id)arg1;
- (BOOL)hasLocaleChanged;
- (id)init;
- (void)notifiedCollection:(id)arg1;
- (id)reloadAppGroupDefaults;
- (void)reloadModelInformation;
- (void)resetCollectionStatusMap;
- (void)syncCollectionStatusMap;
- (void)updateCollectionStatus:(unsigned long long)arg1 collections:(id)arg2;
- (long long)userType;
- (void)viewedCollection:(id)arg1;

@end
