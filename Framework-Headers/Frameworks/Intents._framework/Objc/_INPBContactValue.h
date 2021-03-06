//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBContactValue-Protocol.h>

@class NSArray, NSString, _INPBContactHandle, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <_INPBContactValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int isMe:1;
        unsigned int suggestionType:1;
    } _has;
    BOOL _isMe;
    int _suggestionType;
    NSArray *_aliases;
    _INPBContactHandle *_contactHandle;
    NSString *_customIdentifier;
    NSString *_firstName;
    NSString *_fullName;
    NSString *_handle;
    _INPBImageValue *_image;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSString *_nickName;
    NSString *_phonemeData;
    NSString *_phoneticFirstName;
    NSString *_phoneticLastName;
    NSString *_phoneticMiddleName;
    NSString *_phoneticNamePrefix;
    NSString *_phoneticNameSuffix;
    NSString *_relationship;
    _INPBValueMetadata *_valueMetadata;
}

@property (copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property (readonly, nonatomic) unsigned long long aliasesCount;
@property (strong, nonatomic) _INPBContactHandle *contactHandle; // @synthesize contactHandle=_contactHandle;
@property (copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) BOOL hasContactHandle;
@property (readonly, nonatomic) BOOL hasCustomIdentifier;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasHandle;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasIsMe;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (readonly, nonatomic) BOOL hasNickName;
@property (readonly, nonatomic) BOOL hasPhonemeData;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property (readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (nonatomic) BOOL hasSuggestionType;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBImageValue *image; // @synthesize image=_image;
@property (nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property (copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property (copy, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
@property (copy, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property (copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property (copy, nonatomic) NSString *phonemeData; // @synthesize phonemeData=_phonemeData;
@property (copy, nonatomic) NSString *phoneticFirstName; // @synthesize phoneticFirstName=_phoneticFirstName;
@property (copy, nonatomic) NSString *phoneticLastName; // @synthesize phoneticLastName=_phoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName; // @synthesize phoneticMiddleName=_phoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticNamePrefix; // @synthesize phoneticNamePrefix=_phoneticNamePrefix;
@property (copy, nonatomic) NSString *phoneticNameSuffix; // @synthesize phoneticNameSuffix=_phoneticNameSuffix;
@property (copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property (nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

+ (Class)aliasesType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addAliases:(id)arg1;
- (id)aliasesAtIndex:(unsigned long long)arg1;
- (void)clearAliases;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

