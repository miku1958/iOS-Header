//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying>
{
    double _timestamp;
    float _magneticAccuracy;
    int _magneticCalibration;
    CLPQuaternion *_quaternion;
    struct {
        unsigned int timestamp:1;
        unsigned int magneticAccuracy:1;
        unsigned int magneticCalibration:1;
    } _has;
}

@property (nonatomic) BOOL hasMagneticAccuracy;
@property (nonatomic) BOOL hasMagneticCalibration;
@property (readonly, nonatomic) BOOL hasQuaternion;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) float magneticAccuracy; // @synthesize magneticAccuracy=_magneticAccuracy;
@property (nonatomic) int magneticCalibration; // @synthesize magneticCalibration=_magneticCalibration;
@property (strong, nonatomic) CLPQuaternion *quaternion; // @synthesize quaternion=_quaternion;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (int)StringAsMagneticCalibration:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)magneticCalibrationAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
