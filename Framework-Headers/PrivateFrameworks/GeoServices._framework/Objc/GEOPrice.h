//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormatTokenPriceValue-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying>
{
    float _amount;
    NSString *_currencyCode;
    struct {
        unsigned int amount:1;
    } _has;
}

@property (nonatomic) float amount; // @synthesize amount=_amount;
@property (readonly, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property (strong, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAmount;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
