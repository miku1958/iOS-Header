//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartPhotoPlaybackIntent-Protocol.h>

@class NSString, _INPBContactList, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation, _INPBString, _INPBStringList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <_INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _excludedAttributes;
    CDStruct_95bda58d _includedAttributes;
    struct _has;
    _INPBString *_albumName;
    _INPBContactList *_contentPerson;
    _INPBDateTimeRange *_dateCreated;
    _INPBIntentMetadata *_intentMetadata;
    _INPBStringList *_keywordString;
    _INPBLocation *_locationCreated;
    _INPBContactList *_peopleInPhoto;
    _INPBStringList *_searchTerm;
}

@property (strong, nonatomic) _INPBString *albumName; // @synthesize albumName=_albumName;
@property (strong, nonatomic) _INPBContactList *contentPerson; // @synthesize contentPerson=_contentPerson;
@property (strong, nonatomic) _INPBDateTimeRange *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int *excludedAttributes;
@property (readonly, nonatomic) unsigned long long excludedAttributesCount;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasContentPerson;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasKeywordString;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (readonly, nonatomic) BOOL hasPeopleInPhoto;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int *includedAttributes;
@property (readonly, nonatomic) unsigned long long includedAttributesCount;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBStringList *keywordString; // @synthesize keywordString=_keywordString;
@property (strong, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property (strong, nonatomic) _INPBContactList *peopleInPhoto; // @synthesize peopleInPhoto=_peopleInPhoto;
@property (strong, nonatomic) _INPBStringList *searchTerm; // @synthesize searchTerm=_searchTerm;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsExcludedAttributes:(id)arg1;
- (int)StringAsIncludedAttributes:(id)arg1;
- (void)addExcludedAttribute:(int)arg1;
- (void)addIncludedAttribute:(int)arg1;
- (void)clearExcludedAttributes;
- (void)clearIncludedAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)excludedAttributeAtIndex:(unsigned long long)arg1;
- (id)excludedAttributesAsString:(int)arg1;
- (int)includedAttributeAtIndex:(unsigned long long)arg1;
- (id)includedAttributesAsString:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExcludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setIncludedAttributes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
