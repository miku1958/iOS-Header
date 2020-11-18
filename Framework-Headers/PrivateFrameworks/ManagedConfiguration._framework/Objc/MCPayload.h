//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MCProfile, NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject
{
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    long long _version;
    NSString *_persistentResourceID;
    BOOL _mustInstallNonInteractively;
}

@property (readonly, strong, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, strong, nonatomic) NSString *friendlyName;
@property (readonly, strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, strong, nonatomic) NSArray *installationWarnings;
@property (nonatomic) BOOL mustInstallNonInteractively; // @synthesize mustInstallNonInteractively=_mustInstallNonInteractively;
@property (readonly, strong, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property (readonly, strong, nonatomic) NSString *payloadDescription; // @synthesize payloadDescription=_payloadDescription;
@property (strong, nonatomic) NSString *persistentResourceID; // @synthesize persistentResourceID=_persistentResourceID;
@property (readonly, weak, nonatomic) MCProfile *profile; // @synthesize profile=_profile;
@property (readonly, nonatomic) NSDictionary *restrictions;
@property (readonly, strong, nonatomic) NSString *type; // @synthesize type=_type;
@property (readonly, nonatomic) long long version; // @synthesize version=_version;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
+ (id)typeStrings;
+ (id)wrapperPayloadDictionary;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end

