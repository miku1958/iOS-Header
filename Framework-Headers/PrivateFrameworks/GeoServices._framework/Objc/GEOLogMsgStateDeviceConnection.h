//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceConnection : PBCodable <NSCopying>
{
    int _cellularDataState;
    NSString *_deviceCarrierName;
    NSString *_deviceCountryCode;
    int _deviceNetworkConnectivity;
    struct {
        unsigned int cellularDataState:1;
        unsigned int deviceNetworkConnectivity:1;
    } _has;
}

@property (nonatomic) int cellularDataState; // @synthesize cellularDataState=_cellularDataState;
@property (strong, nonatomic) NSString *deviceCarrierName; // @synthesize deviceCarrierName=_deviceCarrierName;
@property (strong, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property (nonatomic) int deviceNetworkConnectivity; // @synthesize deviceNetworkConnectivity=_deviceNetworkConnectivity;
@property (nonatomic) BOOL hasCellularDataState;
@property (readonly, nonatomic) BOOL hasDeviceCarrierName;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (nonatomic) BOOL hasDeviceNetworkConnectivity;

- (void).cxx_destruct;
- (int)StringAsCellularDataState:(id)arg1;
- (int)StringAsDeviceNetworkConnectivity:(id)arg1;
- (id)cellularDataStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)deviceNetworkConnectivityAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

