//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExposureNotification/NSCopying-Protocol.h>
#import <ExposureNotification/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _enableRecursiveReportType;
    BOOL _matchingRestrictedToRegion;
    NSString *_appBundleIdentifier;
    NSArray *_classificationCriteria;
    NSDictionary *_exposureConfigurationValues;
    double _privacyParameterInputCandenceInterval;
}

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (readonly, copy, nonatomic) NSArray *classificationCriteria; // @synthesize classificationCriteria=_classificationCriteria;
@property (readonly, nonatomic) BOOL enableRecursiveReportType; // @synthesize enableRecursiveReportType=_enableRecursiveReportType;
@property (readonly, copy, nonatomic) NSDictionary *exposureConfigurationValues; // @synthesize exposureConfigurationValues=_exposureConfigurationValues;
@property (readonly, nonatomic) BOOL matchingRestrictedToRegion; // @synthesize matchingRestrictedToRegion=_matchingRestrictedToRegion;
@property (readonly, nonatomic) double privacyParameterInputCandenceInterval; // @synthesize privacyParameterInputCandenceInterval=_privacyParameterInputCandenceInterval;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1;

@end
