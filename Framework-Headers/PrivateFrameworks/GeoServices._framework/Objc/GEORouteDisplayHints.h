//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORequestOptions, NSArray, PBDataReader, PBUnknownFields;
@protocol GEOSurchargeOption;

@interface GEORouteDisplayHints : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _availablePaymentTypes;
    CDStruct_95bda58d _availablePrioritizations;
    GEORequestOptions *_transitSurchargeOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _showTransitSchedules;
    struct {
        unsigned int has_showTransitSchedules:1;
        unsigned int read_unknownFields:1;
        unsigned int read_availablePaymentTypes:1;
        unsigned int read_availablePrioritizations:1;
        unsigned int read_transitSurchargeOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) int *availablePaymentTypes;
@property (readonly, nonatomic) unsigned long long availablePaymentTypesCount;
@property (readonly, nonatomic) int *availablePrioritizations;
@property (readonly, nonatomic) unsigned long long availablePrioritizationsCount;
@property (nonatomic) BOOL hasShowTransitSchedules;
@property (readonly, nonatomic) BOOL hasTransitSurchargeOptions;
@property (readonly, nonatomic) NSArray *prioritizationOptions;
@property (nonatomic) BOOL showTransitSchedules;
@property (readonly, nonatomic) id<GEOSurchargeOption> surchargeOptions;
@property (strong, nonatomic) GEORequestOptions *transitSurchargeOptions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsAvailablePaymentTypes:(id)arg1;
- (int)StringAsAvailablePrioritizations:(id)arg1;
- (void)addAvailablePaymentType:(int)arg1;
- (void)addAvailablePrioritization:(int)arg1;
- (int)availablePaymentTypeAtIndex:(unsigned long long)arg1;
- (id)availablePaymentTypesAsString:(int)arg1;
- (int)availablePrioritizationAtIndex:(unsigned long long)arg1;
- (id)availablePrioritizationsAsString:(int)arg1;
- (void)clearAvailablePaymentTypes;
- (void)clearAvailablePrioritizations;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAvailablePaymentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setAvailablePrioritizations:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

