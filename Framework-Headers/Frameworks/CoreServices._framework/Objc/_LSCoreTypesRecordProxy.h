//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class LSBundleRecord;

__attribute__((visibility("hidden")))
@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>
{
    LSBundleRecord *_realRecord;
}

@property (readonly, nonatomic) LSBundleRecord *_realRecord; // @synthesize _realRecord;

+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (id)description;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)SDKVersion;
- (id)UIBackgroundModes;
- (id)URL;
- (id)WKBackgroundModes;
- (id)_loadRealRecord;
- (id)accentColorName;
- (id)applicationIdentifier;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)bundleIdentifier;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)dataContainerURL;
- (id)debugDescription;
- (id)description;
- (void)detach;
- (BOOL)developerType;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)executableURL;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intentDefinitionURLs;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFreeProfileValidated;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isProfileValidated;
- (BOOL)isUPPValidated;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1;
- (id)localizedShortName;
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;
- (id)machOUUIDs;
- (id)managedPersonas;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)platform;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)serviceRecords;
- (id)signerOrganization;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (BOOL)supportsNowPlaying;

@end

