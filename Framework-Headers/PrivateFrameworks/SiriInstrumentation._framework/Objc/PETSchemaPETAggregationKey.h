//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PETSchemaPETRawMessage;

@interface PETSchemaPETAggregationKey : PBCodable
{
    int _type;
    unsigned int _datestamp;
    double _bucket;
    PETSchemaPETRawMessage *_raw_message;
    struct {
        unsigned int type:1;
        unsigned int datestamp:1;
        unsigned int bucket:1;
    } _has;
    BOOL _hasRaw_message;
}

@property (nonatomic) double bucket; // @synthesize bucket=_bucket;
@property (nonatomic) unsigned int datestamp; // @synthesize datestamp=_datestamp;
@property (nonatomic) BOOL hasBucket;
@property (nonatomic) BOOL hasDatestamp;
@property (nonatomic) BOOL hasRaw_message; // @synthesize hasRaw_message=_hasRaw_message;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) PETSchemaPETRawMessage *raw_message; // @synthesize raw_message=_raw_message;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
