//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBCondition;

@interface _INPBTemperatureList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBCondition *_condition;
    NSMutableArray *_temperatures;
}

@property (strong, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
@property (readonly, nonatomic) BOOL hasCondition;
@property (strong, nonatomic) NSMutableArray *temperatures; // @synthesize temperatures=_temperatures;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)temperatureType;
- (void).cxx_destruct;
- (void)addTemperature:(id)arg1;
- (void)clearTemperatures;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)temperatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)temperaturesCount;
- (void)writeTo:(id)arg1;

@end
