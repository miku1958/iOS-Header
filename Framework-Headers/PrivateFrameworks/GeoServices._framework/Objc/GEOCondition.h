//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerCondition-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSDate, NSMutableArray, NSString, PBUnknownFields;

@interface GEOCondition : PBCodable <GEOServerCondition, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conditions;
    unsigned int _expirationTime;
    int _type;
    struct {
        unsigned int has_expirationTime:1;
        unsigned int has_type:1;
    } _flags;
}

@property (readonly, nonatomic) long long conditionType;
@property (strong, nonatomic) NSMutableArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned int expirationTime;
@property (nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *subconditions;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)conditionType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)clearConditions;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)conditionAtIndex:(unsigned long long)arg1;
- (unsigned long long)conditionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
