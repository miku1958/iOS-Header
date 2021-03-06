//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormatStyle-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOFormatStyle : PBCodable <GEOServerFormatStyle, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_token;
    int _type;
    CDStruct_3af5a977 _flags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasToken;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long styleType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *token;
@property (strong, nonatomic) NSString *token;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
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

