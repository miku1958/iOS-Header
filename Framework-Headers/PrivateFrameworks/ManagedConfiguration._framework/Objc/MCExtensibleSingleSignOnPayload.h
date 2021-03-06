//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSDictionary, NSString;

@interface MCExtensibleSingleSignOnPayload : MCPayload
{
    NSString *_esso_type;
    NSString *_esso_realm;
    NSString *_esso_extensionIdentifier;
    NSString *_esso_teamIdentifier;
    NSDictionary *_esso_extensionData;
    NSArray *_esso_URLs;
    NSArray *_esso_hosts;
}

@property (strong, nonatomic) NSArray *esso_URLs; // @synthesize esso_URLs=_esso_URLs;
@property (strong, nonatomic) NSDictionary *esso_extensionData; // @synthesize esso_extensionData=_esso_extensionData;
@property (strong, nonatomic) NSString *esso_extensionIdentifier; // @synthesize esso_extensionIdentifier=_esso_extensionIdentifier;
@property (strong, nonatomic) NSArray *esso_hosts; // @synthesize esso_hosts=_esso_hosts;
@property (strong, nonatomic) NSString *esso_realm; // @synthesize esso_realm=_esso_realm;
@property (strong, nonatomic) NSString *esso_teamIdentifier; // @synthesize esso_teamIdentifier=_esso_teamIdentifier;
@property (strong, nonatomic) NSString *esso_type; // @synthesize esso_type=_esso_type;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
- (BOOL)_validateHost:(id)arg1 outError:(id *)arg2;
- (id)_validateURLString:(id)arg1 outError:(id *)arg2;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)title;
- (id)verboseDescription;

@end

