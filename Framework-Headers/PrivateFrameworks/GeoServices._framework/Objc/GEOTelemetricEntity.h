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
    unsigned long long _eventValue;
    NSString *_eventDetail;
    int _eventKey;
    struct {
        unsigned int eventValue:1;
        unsigned int eventKey:1;
    } _has;
}

@property (strong, nonatomic) NSString *eventDetail; // @synthesize eventDetail=_eventDetail;
@property (nonatomic) int eventKey; // @synthesize eventKey=_eventKey;
@property (nonatomic) unsigned long long eventValue; // @synthesize eventValue=_eventValue;
@property (readonly, nonatomic) BOOL hasEventDetail;
@property (nonatomic) BOOL hasEventKey;
@property (nonatomic) BOOL hasEventValue;

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
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
