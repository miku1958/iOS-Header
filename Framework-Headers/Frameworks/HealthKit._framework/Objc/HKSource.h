//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_bundleIdentifier;
    BOOL _localDevice;
    NSString *_productType;
    unsigned long long _options;
}

@property (readonly) NSString *bundleIdentifier;
@property (nonatomic, getter=_isLocalDevice, setter=_setLocalDevice:) BOOL localDevice; // @synthesize localDevice=_localDevice;
@property (readonly) NSString *name;
@property (nonatomic, getter=_options, setter=_setOptions:) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic, getter=_productType, setter=_setProductType:) NSString *productType; // @synthesize productType=_productType;

+ (id)_currentSourceProductType:(BOOL)arg1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 clientBundleIdentifier:(id)arg2 isExtension:(BOOL)arg3;
+ (id)_sourceNameWithRepresentsCurrentDevice:(BOOL)arg1 defaultSource:(BOOL)arg2;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)defaultSource;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_hasFirstPartyBundleID;
- (id)_init;
- (BOOL)_isAppleWatch;
- (BOOL)_isApplication;
- (BOOL)_isPreferredSource;
- (BOOL)_requiresAuthorization;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setName:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

