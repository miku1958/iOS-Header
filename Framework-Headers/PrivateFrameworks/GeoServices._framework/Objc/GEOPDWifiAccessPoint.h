//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPDWifiAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    NSString *_macId;
    int _rssi;
    CDStruct_823dd0e8 _has;
}

@property (nonatomic) unsigned int age; // @synthesize age=_age;
@property (nonatomic) int channel; // @synthesize channel=_channel;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasChannel;
@property (readonly, nonatomic) BOOL hasMacId;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) BOOL hasScanTimestamp;
@property (strong, nonatomic) NSString *macId; // @synthesize macId=_macId;
@property (nonatomic) int rssi; // @synthesize rssi=_rssi;
@property (nonatomic) unsigned long long scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithGEOWifiAccessPoint:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
