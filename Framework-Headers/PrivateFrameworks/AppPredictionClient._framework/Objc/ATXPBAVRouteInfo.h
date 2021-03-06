//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@class NSString;

@interface ATXPBAVRouteInfo : PBCodable <NSCopying>
{
    NSString *_deviceID;
    NSString *_deviceName;
    BOOL _isExternalRoute;
    struct {
        unsigned int isExternalRoute:1;
    } _has;
}

@property (strong, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (strong, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (readonly, nonatomic) BOOL hasDeviceName;
@property (nonatomic) BOOL hasIsExternalRoute;
@property (nonatomic) BOOL isExternalRoute; // @synthesize isExternalRoute=_isExternalRoute;

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

