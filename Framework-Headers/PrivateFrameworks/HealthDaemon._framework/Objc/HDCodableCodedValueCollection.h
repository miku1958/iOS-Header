//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HDCodableCodedValueCollection : PBCodable <NSCopying>
{
    NSMutableArray *_codedValues;
}

@property (strong, nonatomic) NSMutableArray *codedValues; // @synthesize codedValues=_codedValues;

+ (Class)codedValuesType;
- (void).cxx_destruct;
- (void)addCodedValues:(id)arg1;
- (void)clearCodedValues;
- (id)codedValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)codedValuesCount;
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

