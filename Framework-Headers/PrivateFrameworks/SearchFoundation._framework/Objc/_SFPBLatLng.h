//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBLatLng-Protocol.h>

@class NSData, NSString;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding>
{
    CDStruct_b993dc87 _has;
    double _lat;
    double _lng;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasLat;
@property (readonly, nonatomic) BOOL hasLng;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) double lat; // @synthesize lat=_lat;
@property (nonatomic) double lng; // @synthesize lng=_lng;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

