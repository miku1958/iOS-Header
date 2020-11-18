//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface _MRLanguageOptionProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_characteristics;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_languageTag;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *characteristics; // @synthesize characteristics=_characteristics;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasLanguageTag;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSString *languageTag; // @synthesize languageTag=_languageTag;
@property (nonatomic) int type; // @synthesize type=_type;

+ (Class)characteristicsType;
- (void)addCharacteristics:(id)arg1;
- (id)characteristicsAtIndex:(unsigned long long)arg1;
- (unsigned long long)characteristicsCount;
- (void)clearCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

