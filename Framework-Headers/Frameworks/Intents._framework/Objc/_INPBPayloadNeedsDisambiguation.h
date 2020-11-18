//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBPayloadNeedsDisambiguation : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_disambiguationItems;
}

@property (strong, nonatomic) NSMutableArray *disambiguationItems; // @synthesize disambiguationItems=_disambiguationItems;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)disambiguationItemsType;
+ (id)options;
- (void).cxx_destruct;
- (void)addDisambiguationItems:(id)arg1;
- (void)clearDisambiguationItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationItemsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

