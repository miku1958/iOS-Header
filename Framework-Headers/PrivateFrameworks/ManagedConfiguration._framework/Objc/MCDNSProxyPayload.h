//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSDictionary, NSString;

@interface MCDNSProxyPayload : MCPayload
{
    NSString *_appBundleIdentifier;
    NSString *_providerBundleIdentifier;
    NSDictionary *_providerConfiguration;
}

@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;

@end

