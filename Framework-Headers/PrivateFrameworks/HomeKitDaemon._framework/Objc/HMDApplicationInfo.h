//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSArray, NSData, NSHashTable, NSString, NSURL;
@protocol HMFLocking;

@interface HMDApplicationInfo : HMFObject <HMFLogging>
{
    NSString *_bundleIdentifier;
    BOOL _independent;
    id<HMFLocking> _lock;
    NSHashTable *_processes;
    HMDApplicationInfo *_companionApplicationInfo;
}

@property (readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly) unsigned long long hash;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (readonly, getter=isIndependent) BOOL independent; // @synthesize independent=_independent;
@property (readonly, getter=isInstalled) BOOL installed;
@property (readonly, copy) NSArray *processes;
@property (readonly) Class superclass;
@property (readonly, copy) NSData *vendorIdentifier;

+ (id)applicationInfoForBundleIdentifier:(id)arg1;
+ (id)applicationInfoForBundleURL:(id)arg1;
+ (id)logCategory;
+ (id)privateVendorIdentifier;
- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (id)attributeDescriptions;
- (id)clientIdentifierSalt:(id *)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)removeProcess:(id)arg1;
- (id)shortDescription;

@end
