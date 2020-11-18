//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableQuantity : PBCodable <NSCopying>
{
    double _value;
    NSString *_unitString;
    CDStruct_01ef6375 _has;
}

@property (readonly, nonatomic) BOOL hasUnitString;
@property (nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property (nonatomic) double value; // @synthesize value=_value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

