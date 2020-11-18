//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

@interface AWDHomeKitValue : PBCodable <NSCopying>
{
    double _doubleVal;
    long long _intVal;
    NSData *_dataVal;
    float _floatVal;
    NSString *_stringVal;
    BOOL _boolVal;
    struct {
        unsigned int doubleVal:1;
        unsigned int intVal:1;
        unsigned int floatVal:1;
        unsigned int boolVal:1;
    } _has;
}

@property (nonatomic) BOOL boolVal; // @synthesize boolVal=_boolVal;
@property (strong, nonatomic) NSData *dataVal; // @synthesize dataVal=_dataVal;
@property (nonatomic) double doubleVal; // @synthesize doubleVal=_doubleVal;
@property (nonatomic) float floatVal; // @synthesize floatVal=_floatVal;
@property (nonatomic) BOOL hasBoolVal;
@property (readonly, nonatomic) BOOL hasDataVal;
@property (nonatomic) BOOL hasDoubleVal;
@property (nonatomic) BOOL hasFloatVal;
@property (nonatomic) BOOL hasIntVal;
@property (readonly, nonatomic) BOOL hasStringVal;
@property (nonatomic) long long intVal; // @synthesize intVal=_intVal;
@property (strong, nonatomic) NSString *stringVal; // @synthesize stringVal=_stringVal;

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
