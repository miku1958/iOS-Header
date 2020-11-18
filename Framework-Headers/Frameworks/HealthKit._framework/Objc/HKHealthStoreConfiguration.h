//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKProfileIdentifier, NSString;

@interface HKHealthStoreConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _applicationSDKVersion;
    NSString *_sourceBundleIdentifier;
    NSString *_debugIdentifier;
    HKProfileIdentifier *_profileIdentifier;
}

@property (readonly, nonatomic) unsigned int applicationSDKVersion; // @synthesize applicationSDKVersion=_applicationSDKVersion;
@property (readonly, copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // @synthesize profileIdentifier=_profileIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceBundleIdentifier:(id)arg1 debugIdentifier:(id)arg2 profileIdentifier:(id)arg3 applicationSDKVersion:(unsigned int)arg4;
- (BOOL)isEqual:(id)arg1;

@end
