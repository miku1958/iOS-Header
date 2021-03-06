//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMSMappedBundleInfo, AMSProcessInfo, NSString;

@interface AMSUserAgent : NSObject
{
    AMSMappedBundleInfo *_bundleInfo;
    AMSProcessInfo *_processInfo;
}

@property (readonly, nonatomic) AMSMappedBundleInfo *bundleInfo; // @synthesize bundleInfo=_bundleInfo;
@property (strong, nonatomic) NSString *clientName;
@property (strong, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) AMSProcessInfo *processInfo; // @synthesize processInfo=_processInfo;

+ (id)_sharedCache;
+ (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)cachedUserAgentForBundleIdentifier:(id)arg1;
+ (id)userAgentForProcessInfo:(id)arg1;
- (void).cxx_destruct;
- (id)_compileAndShouldCache:(BOOL *)arg1;
- (id)_iOSComponentBuildVersion;
- (id)_iOSComponentClientInfo;
- (id)_iOSComponentDeviceModel;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentProductVersion;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_sharedComponentFrameworkVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 productType:(id)arg2;
- (id)_userAgentSuffix;
- (id)compile;
- (id)initWithProcessInfo:(id)arg1;

@end

