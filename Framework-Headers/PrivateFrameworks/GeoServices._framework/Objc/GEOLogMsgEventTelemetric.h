//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying>
{
    NSMutableArray *_telemetricEntitys;
}

@property (strong, nonatomic) NSMutableArray *telemetricEntitys;

+ (BOOL)isValid:(id)arg1;
+ (Class)telemetricEntityType;
- (void).cxx_destruct;
- (void)addTelemetricEntity:(id)arg1;
- (void)clearTelemetricEntitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)telemetricEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)telemetricEntitysCount;
- (void)writeTo:(id)arg1;

@end
