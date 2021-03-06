//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable <NSCopying>
{
    long long _integer;
    NSData *_bytes;
    NSString *_string;
    int _type;
    struct {
        unsigned int integer:1;
        unsigned int type:1;
    } _has;
}

@property (strong, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
@property (readonly, nonatomic) BOOL hasBytes;
@property (nonatomic) BOOL hasInteger;
@property (readonly, nonatomic) BOOL hasString;
@property (nonatomic) BOOL hasType;
@property (nonatomic) long long integer; // @synthesize integer=_integer;
@property (strong, nonatomic) NSString *string; // @synthesize string=_string;
@property (nonatomic) int type; // @synthesize type=_type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

