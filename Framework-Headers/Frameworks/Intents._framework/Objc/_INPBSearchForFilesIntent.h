//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForFilesIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBString;

@interface _INPBSearchForFilesIntent : PBCodable <_INPBSearchForFilesIntent, NSSecureCoding, NSCopying>
{
    CDStruct_5a81f70e _has;
    int _entityType;
    int _scope;
    _INPBString *_appId;
    _INPBString *_entityName;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_properties;
    _INPBString *_scopeEntityName;
}

@property (strong, nonatomic) _INPBString *appId; // @synthesize appId=_appId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBString *entityName; // @synthesize entityName=_entityName;
@property (nonatomic) int entityType; // @synthesize entityType=_entityType;
@property (readonly, nonatomic) BOOL hasAppId;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasScope;
@property (readonly, nonatomic) BOOL hasScopeEntityName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;
@property (nonatomic) int scope; // @synthesize scope=_scope;
@property (strong, nonatomic) _INPBString *scopeEntityName; // @synthesize scopeEntityName=_scopeEntityName;
@property (readonly) Class superclass;

+ (Class)propertiesType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsScope:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)entityTypeAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)scopeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

