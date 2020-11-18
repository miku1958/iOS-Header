//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBControlHomeIntent-Protocol.h>

@class NSArray, NSString, _INPBHomeAttribute, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBHomeAttribute *_attribute;
    NSArray *_contents;
    NSArray *_entities;
    _INPBIntentMetadata *_intentMetadata;
}

@property (strong, nonatomic) _INPBHomeAttribute *attribute; // @synthesize attribute=_attribute;
@property (copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property (readonly, nonatomic) unsigned long long contentsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property (readonly, nonatomic) unsigned long long entitiesCount;
@property (readonly, nonatomic) BOOL hasAttribute;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (readonly) Class superclass;

+ (Class)contentsType;
+ (Class)entitiesType;
- (void).cxx_destruct;
- (void)addContents:(id)arg1;
- (void)addEntities:(id)arg1;
- (void)clearContents;
- (void)clearEntities;
- (id)contentsAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

