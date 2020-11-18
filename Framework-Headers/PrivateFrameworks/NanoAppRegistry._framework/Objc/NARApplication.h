//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoAppRegistry/NSSecureCoding-Protocol.h>

@class NARGlance, NSArray, NSDictionary, NSString;

@interface NARApplication : NSObject <NSSecureCoding>
{
    unsigned long long _sequenceNumber;
    NSString *_launchServicesBundleType;
    NSString *_parentApplicationBundleIdentifier;
    NARGlance *_glance;
    NSDictionary *_infoPlist;
    NSDictionary *_localizedStrings;
    NSDictionary *_iTunesPlistStrings;
}

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (strong, nonatomic) NARGlance *glance; // @synthesize glance=_glance;
@property (strong, nonatomic) NSDictionary *iTunesPlistStrings; // @synthesize iTunesPlistStrings=_iTunesPlistStrings;
@property (strong, nonatomic) NSDictionary *infoPlist; // @synthesize infoPlist=_infoPlist;
@property (readonly, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *launchServicesBundleType; // @synthesize launchServicesBundleType=_launchServicesBundleType;
@property (readonly, nonatomic) NSArray *localizations;
@property (readonly, nonatomic) NSDictionary *localizedBundleNames;
@property (readonly, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) NSDictionary *localizedDisplayNames;
@property (strong, nonatomic) NSDictionary *localizedStrings; // @synthesize localizedStrings=_localizedStrings;
@property (readonly, copy, nonatomic) NSString *parentApplicationBundleIdentifier; // @synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier;
@property (nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (readonly, nonatomic) NSArray *supportedSchemes;
@property (readonly, nonatomic) NSString *vendorName;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1 localization:(id)arg2;

@end

