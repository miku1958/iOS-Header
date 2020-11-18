//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class LCServiceLoggingParameters, NSArray, NSData;

@interface LCServiceLoggingConfiguration : PBCodable
{
    BOOL _hasDefaultParameters;
    BOOL _hasConfigurationVersion;
    int _configurationVersion;
    NSArray *_applications;
    NSArray *_blacklistedBundleIdentifiers;
    LCServiceLoggingParameters *_defaultParameters;
}

@property (copy, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property (copy, nonatomic) NSArray *blacklistedBundleIdentifiers; // @synthesize blacklistedBundleIdentifiers=_blacklistedBundleIdentifiers;
@property (nonatomic) int configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property (strong, nonatomic) LCServiceLoggingParameters *defaultParameters; // @synthesize defaultParameters=_defaultParameters;
@property (nonatomic) BOOL hasConfigurationVersion; // @synthesize hasConfigurationVersion=_hasConfigurationVersion;
@property (nonatomic) BOOL hasDefaultParameters; // @synthesize hasDefaultParameters=_hasDefaultParameters;
@property (readonly, nonatomic) NSData *jsonData;

- (void).cxx_destruct;
- (void)addApplications:(id)arg1;
- (void)addBlacklistedBundleIdentifiers:(id)arg1;
- (id)applicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationsCount;
- (id)blacklistedBundleIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)blacklistedBundleIdentifiersCount;
- (void)clearApplications;
- (void)clearBlacklistedBundleIdentifiers;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
