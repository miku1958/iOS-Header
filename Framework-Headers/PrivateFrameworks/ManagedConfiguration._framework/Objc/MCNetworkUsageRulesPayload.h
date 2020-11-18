//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCNetworkUsageRulesPayload : MCPayload
{
    NSArray *_applicationRules;
}

@property (copy, nonatomic) NSArray *applicationRules; // @synthesize applicationRules=_applicationRules;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end

