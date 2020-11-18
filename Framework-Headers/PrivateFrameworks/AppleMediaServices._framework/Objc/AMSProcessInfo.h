//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSMappedBundleInfo, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface AMSProcessInfo : NSObject <NSCopying, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSString *_partnerHeader;
    NSString *_accountMediaType;
    NSData *_auditTokenData;
    NSString *_bundleIdentifier;
    NSURL *_bundleURL;
    NSString *_clientVersion;
    NSString *_executableName;
    NSString *_localizedName;
    NSString *_proxyAppBundleID;
    NSString *_userAgentSuffix;
    AMSMappedBundleInfo *_mappedBundleInfo;
}

@property (strong, nonatomic) NSString *accountMediaType; // @synthesize accountMediaType=_accountMediaType;
@property (readonly, nonatomic, getter=isAccountsDaemon) BOOL accountsDaemon;
@property (strong, nonatomic) NSData *auditTokenData; // @synthesize auditTokenData=_auditTokenData;
@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
@property (strong, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property (strong, nonatomic) NSString *executableName; // @synthesize executableName=_executableName;
@property (strong, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) AMSMappedBundleInfo *mappedBundleInfo; // @synthesize mappedBundleInfo=_mappedBundleInfo;
@property (strong, nonatomic) NSString *partnerHeader;
@property (strong, nonatomic) NSString *proxyAppBundleID; // @synthesize proxyAppBundleID=_proxyAppBundleID;
@property (strong, nonatomic) NSString *userAgentSuffix; // @synthesize userAgentSuffix=_userAgentSuffix;

+ (void)_accessProcessInfoCache:(CDUnknownBlockType)arg1;
+ (id)_bundleForIdentifier:(id)arg1 record:(id)arg2;
+ (id)_bundleRecordForIdentifier:(id)arg1;
+ (void)_cacheProcessInfo:(id)arg1;
+ (id)_cachedProcessInfoForIdentifier:(id)arg1;
+ (id)_currentProcessBundleIdentifier;
+ (BOOL)boolForEntitlement:(id)arg1;
+ (BOOL)boolForMachLookupAccess:(id)arg1;
+ (void)copyPropertiesFrom:(id)arg1 to:(id)arg2;
+ (id)currentProcess;
+ (id)defaultMediaTypeAccessQueue;
+ (id)defaultMediaTypeForCurrentProcess;
+ (BOOL)isBuddyRunning;
+ (void)setDefaultMediaTypeForCurrentProcess:(id)arg1;
+ (id)stringForEntitlement:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)valueForEntitlement:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)generateConfiguration;
- (id)generateConfigurationFromBag:(id)arg1;
- (id)generateConfigurationFromBagContract:(id)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
