//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOTelemetricEntity : PBCodable <NSCopying>
{
    NSString *_eventDetail;
    unsigned long long _eventValue;
    int _eventKey;
    struct {
        unsigned int has_eventValue:1;
        unsigned int has_eventKey:1;
    } _flags;
}

@property (strong, nonatomic) NSString *eventDetail;
@property (nonatomic) int eventKey;
@property (nonatomic) unsigned long long eventValue;
@property (readonly, nonatomic) BOOL hasEventDetail;
@property (nonatomic) BOOL hasEventKey;
@property (nonatomic) BOOL hasEventValue;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsEventKey:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventKeyAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
