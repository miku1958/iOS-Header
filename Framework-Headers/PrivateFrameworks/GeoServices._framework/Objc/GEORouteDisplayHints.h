//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORequestOptions, NSArray, NSMutableArray;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    CDStruct_95bda58d _availablePaymentTypes;
    CDStruct_95bda58d _availablePrioritizations;
    NSMutableArray *_availableTransitSurcharges;
    GEORequestOptions *_transitSurchargeOptions;
    BOOL _showTransitSchedules;
    struct {
        unsigned int showTransitSchedules:1;
    } _has;
}

@property (readonly, nonatomic) int *availablePaymentTypes;
@property (readonly, nonatomic) unsigned long long availablePaymentTypesCount;
@property (readonly, nonatomic) int *availablePrioritizations;
@property (readonly, nonatomic) unsigned long long availablePrioritizationsCount;
@property (strong, nonatomic) NSMutableArray *availableTransitSurcharges; // @synthesize availableTransitSurcharges=_availableTransitSurcharges;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (readonly, nonatomic) BOOL hasTransitSurchargeOptions;
@property (readonly, nonatomic) NSArray *prioritizationOptions;
@property (nonatomic) BOOL showTransitSchedules; // @synthesize showTransitSchedules=_showTransitSchedules;
@property (readonly, nonatomic) id<GEOSurchargeOption> surchargeOptions;
@property (strong, nonatomic) GEORequestOptions *transitSurchargeOptions; // @synthesize transitSurchargeOptions=_transitSurchargeOptions;

+ (Class)availableTransitSurchargeType;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (void)addAvailableTransitSurcharge:(id)arg1;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (id)availablePaymentTypesAsString:(int)arg1;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (id)availableTransitSurchargeAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableTransitSurchargesCount;
- (void)clearAvailablePaymentTypes;
- (void)clearAvailablePrioritizations;
- (void)clearAvailableTransitSurcharges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailablePaymentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
