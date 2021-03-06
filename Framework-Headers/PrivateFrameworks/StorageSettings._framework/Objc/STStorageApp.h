//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPProviderDomain, LSApplicationProxy, LSApplicationRecord, NSArray, NSDate, NSString, PSUsageBundleApp;

@interface STStorageApp : NSObject
{
    LSApplicationRecord *_appRecord;
    long long _purgeableSize;
    BOOL _isDeleting;
    BOOL _isDemoting;
    NSString *_appPath;
    NSString *_dataPath;
    NSString *_vendorName;
    struct os_unfair_lock_s _recLock;
    BOOL _isAppClip;
    BOOL _isUserApp;
    BOOL _isSystemApp;
    BOOL _isInternalApp;
    BOOL _isDocumentApp;
    BOOL _specialSizePending;
    BOOL _isPseudoApp;
    BOOL _isApple;
    NSString *_appIdentifier;
    NSString *_bundleIdentifier;
    NSString *_name;
    FPProviderDomain *_fpDomain;
    PSUsageBundleApp *_usageBundleApp;
    NSArray *_mediaTypes;
    long long _externalDataSize;
    long long _sharedDataSize;
    long long _specialSize;
    long long _coreMLDataSize;
}

@property (strong) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property (readonly, nonatomic) LSApplicationProxy *appProxy;
@property (strong, nonatomic) LSApplicationRecord *appRecord; // @synthesize appRecord=_appRecord;
@property (strong) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property long long coreMLDataSize; // @synthesize coreMLDataSize=_coreMLDataSize;
@property (readonly) long long dataSize;
@property (readonly) NSArray *documents;
@property (readonly) long long dynamicSize;
@property long long externalDataSize; // @synthesize externalDataSize=_externalDataSize;
@property (strong) FPProviderDomain *fpDomain; // @synthesize fpDomain=_fpDomain;
@property (readonly) NSDate *installDate;
@property (readonly) BOOL isAppClip; // @synthesize isAppClip=_isAppClip;
@property BOOL isApple; // @synthesize isApple=_isApple;
@property (readonly) BOOL isDeletable;
@property (readonly) BOOL isDeleted;
@property (readonly) BOOL isDemotable;
@property (readonly) BOOL isDemoted;
@property BOOL isDocumentApp; // @synthesize isDocumentApp=_isDocumentApp;
@property BOOL isInternalApp; // @synthesize isInternalApp=_isInternalApp;
@property BOOL isPseudoApp; // @synthesize isPseudoApp=_isPseudoApp;
@property BOOL isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property (readonly) BOOL isUsageApp;
@property BOOL isUserApp; // @synthesize isUserApp=_isUserApp;
@property (readonly) NSDate *lastUsedDate;
@property (strong, nonatomic) NSArray *mediaTypes; // @synthesize mediaTypes=_mediaTypes;
@property (strong) NSString *name; // @synthesize name=_name;
@property (readonly) long long purgeableSize;
@property long long sharedDataSize; // @synthesize sharedDataSize=_sharedDataSize;
@property long long specialSize; // @synthesize specialSize=_specialSize;
@property BOOL specialSizePending; // @synthesize specialSizePending=_specialSizePending;
@property (readonly) long long staticSize;
@property (readonly) long long totalSize;
@property (strong) PSUsageBundleApp *usageBundleApp; // @synthesize usageBundleApp=_usageBundleApp;
@property (readonly) NSString *vendorName;
@property (readonly) NSString *versionString;

+ (void)_notifyAppsUpdated:(id)arg1;
+ (void)notifyAppsUpdated;
+ (void)setLaunchDatesNeedUpdating;
- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)arg1;
- (id)initWithApplicationRecord:(id)arg1;
- (void)loadInfo;
- (void)refreshAppState;
- (void)updateSpecialSize;

@end

