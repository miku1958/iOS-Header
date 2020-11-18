//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NRDevice, NSUUID;

@interface CLKDevice : NSObject
{
    BOOL _runningGraceOrLater;
    BOOL _isLuxo;
    BOOL _supportsTritium;
    BOOL _isZeusBlack;
    BOOL _limitedToPreGlory;
    BOOL _isBridgeActive;
    BOOL _isExplorer;
    BOOL _hasRichMediaComplications;
    BOOL _supportsUrsa;
    int _pairedDeviceCapabilitiesChangeNotificationToken;
    struct os_unfair_lock_s _capabilitiesLock;
    unsigned long long _version;
    unsigned long long _sizeClass;
    double _screenScale;
    double _screenCornerRadius;
    unsigned long long _collectionType;
    unsigned long long _materialType;
    NRDevice *_nrDevice;
    struct CGRect _screenBounds;
}

@property (readonly, nonatomic) struct os_unfair_lock_s capabilitiesLock; // @synthesize capabilitiesLock=_capabilitiesLock;
@property (nonatomic) unsigned long long collectionType; // @synthesize collectionType=_collectionType;
@property (nonatomic) BOOL hasRichMediaComplications; // @synthesize hasRichMediaComplications=_hasRichMediaComplications;
@property (nonatomic) BOOL isBridgeActive; // @synthesize isBridgeActive=_isBridgeActive;
@property (nonatomic) BOOL isExplorer; // @synthesize isExplorer=_isExplorer;
@property (readonly, nonatomic) BOOL isLocked;
@property (nonatomic) BOOL isLuxo; // @synthesize isLuxo=_isLuxo;
@property (readonly, nonatomic) BOOL isZeusBlack; // @synthesize isZeusBlack=_isZeusBlack;
@property (readonly, nonatomic) BOOL limitedToPreGlory; // @synthesize limitedToPreGlory=_limitedToPreGlory;
@property (nonatomic) unsigned long long materialType; // @synthesize materialType=_materialType;
@property (strong, nonatomic) NRDevice *nrDevice; // @synthesize nrDevice=_nrDevice;
@property (readonly, nonatomic) NSUUID *nrDeviceUUID;
@property (readonly, nonatomic) unsigned int nrDeviceVersion;
@property (readonly, nonatomic) int pairedDeviceCapabilitiesChangeNotificationToken; // @synthesize pairedDeviceCapabilitiesChangeNotificationToken=_pairedDeviceCapabilitiesChangeNotificationToken;
@property (readonly, nonatomic, getter=isRunningGraceOrLater) BOOL runningGraceOrLater; // @synthesize runningGraceOrLater=_runningGraceOrLater;
@property (nonatomic) struct CGRect screenBounds; // @synthesize screenBounds=_screenBounds;
@property (nonatomic) double screenCornerRadius; // @synthesize screenCornerRadius=_screenCornerRadius;
@property (nonatomic) double screenScale; // @synthesize screenScale=_screenScale;
@property (nonatomic) unsigned long long sizeClass; // @synthesize sizeClass=_sizeClass;
@property (readonly, nonatomic) BOOL supportsTritium; // @synthesize supportsTritium=_supportsTritium;
@property (nonatomic) BOOL supportsUrsa; // @synthesize supportsUrsa=_supportsUrsa;
@property (readonly, nonatomic) BOOL unlockedSinceBoot;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)_cachedDeviceForUUID:(id)arg1;
+ (void)_deviceDidBecomeActive;
+ (void)_resetCurrentDevice;
+ (id)activeNRDevice;
+ (id)currentDevice;
+ (id)deviceForNRDevice:(id)arg1;
+ (id)deviceForNRDevice:(id)arg1 forced:(BOOL)arg2;
+ (id)deviceForNRDeviceUUID:(id)arg1;
+ (void)initialize;
+ (id)nrDeviceForNRDeviceUUID:(id)arg1;
+ (void)setCurrentDevice:(id)arg1;
- (void).cxx_destruct;
- (void)_loadDeviceInfo;
- (BOOL)_queryAndCacheNanoRegistryDeviceCapabilities;
- (void)dealloc;
- (id)initWithNRDevice:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
