//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOIndexQueryNode : PBCodable <NSCopying>
{
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

@property (strong, nonatomic) NSString *field; // @synthesize field=_field;
@property (readonly, nonatomic) BOOL hasField;
@property (readonly, nonatomic) BOOL hasValue;
@property (strong, nonatomic) NSMutableArray *operands; // @synthesize operands=_operands;
@property (nonatomic) int type; // @synthesize type=_type;
@property (strong, nonatomic) NSString *value; // @synthesize value=_value;

- (void)addOperands:(id)arg1;
- (void)clearOperands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operandsAtIndex:(unsigned long long)arg1;
- (unsigned long long)operandsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

