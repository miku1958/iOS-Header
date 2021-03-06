//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPBaroCalibrationIndication, CLPMotionActivity;

@interface CLPCalibratedPressureCollectionRequest : PBRequest <NSCopying>
{
    double _latitudeDeg;
    double _longitudeDeg;
    double _timeSinceLastSignificantLocationVisitExitS;
    double _timestampOfCalibrationS;
    CLPMotionActivity *_activity;
    float _altitudeHAEM;
    float _altitudeHAEUncM;
    float _calibratedPressurePa;
    float _calibratedPressureUncPa;
    CLPBaroCalibrationIndication *_calibration;
    float _devicePressurePa;
    float _devicePressureUncPa;
    float _horizontalUncM;
    float _referenceAltM;
    float _referenceAltUncM;
    int _reliability;
    float _speedMps;
    float _speedUncMps;
    struct {
        unsigned int latitudeDeg:1;
        unsigned int longitudeDeg:1;
        unsigned int timeSinceLastSignificantLocationVisitExitS:1;
        unsigned int timestampOfCalibrationS:1;
        unsigned int altitudeHAEM:1;
        unsigned int altitudeHAEUncM:1;
        unsigned int calibratedPressurePa:1;
        unsigned int calibratedPressureUncPa:1;
        unsigned int devicePressurePa:1;
        unsigned int devicePressureUncPa:1;
        unsigned int horizontalUncM:1;
        unsigned int referenceAltM:1;
        unsigned int referenceAltUncM:1;
        unsigned int reliability:1;
        unsigned int speedMps:1;
        unsigned int speedUncMps:1;
    } _has;
}

@property (strong, nonatomic) CLPMotionActivity *activity; // @synthesize activity=_activity;
@property (nonatomic) float altitudeHAEM; // @synthesize altitudeHAEM=_altitudeHAEM;
@property (nonatomic) float altitudeHAEUncM; // @synthesize altitudeHAEUncM=_altitudeHAEUncM;
@property (nonatomic) float calibratedPressurePa; // @synthesize calibratedPressurePa=_calibratedPressurePa;
@property (nonatomic) float calibratedPressureUncPa; // @synthesize calibratedPressureUncPa=_calibratedPressureUncPa;
@property (strong, nonatomic) CLPBaroCalibrationIndication *calibration; // @synthesize calibration=_calibration;
@property (nonatomic) float devicePressurePa; // @synthesize devicePressurePa=_devicePressurePa;
@property (nonatomic) float devicePressureUncPa; // @synthesize devicePressureUncPa=_devicePressureUncPa;
@property (readonly, nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasAltitudeHAEM;
@property (nonatomic) BOOL hasAltitudeHAEUncM;
@property (nonatomic) BOOL hasCalibratedPressurePa;
@property (nonatomic) BOOL hasCalibratedPressureUncPa;
@property (readonly, nonatomic) BOOL hasCalibration;
@property (nonatomic) BOOL hasDevicePressurePa;
@property (nonatomic) BOOL hasDevicePressureUncPa;
@property (nonatomic) BOOL hasHorizontalUncM;
@property (nonatomic) BOOL hasLatitudeDeg;
@property (nonatomic) BOOL hasLongitudeDeg;
@property (nonatomic) BOOL hasReferenceAltM;
@property (nonatomic) BOOL hasReferenceAltUncM;
@property (nonatomic) BOOL hasReliability;
@property (nonatomic) BOOL hasSpeedMps;
@property (nonatomic) BOOL hasSpeedUncMps;
@property (nonatomic) BOOL hasTimeSinceLastSignificantLocationVisitExitS;
@property (nonatomic) BOOL hasTimestampOfCalibrationS;
@property (nonatomic) float horizontalUncM; // @synthesize horizontalUncM=_horizontalUncM;
@property (nonatomic) double latitudeDeg; // @synthesize latitudeDeg=_latitudeDeg;
@property (nonatomic) double longitudeDeg; // @synthesize longitudeDeg=_longitudeDeg;
@property (nonatomic) float referenceAltM; // @synthesize referenceAltM=_referenceAltM;
@property (nonatomic) float referenceAltUncM; // @synthesize referenceAltUncM=_referenceAltUncM;
@property (nonatomic) int reliability; // @synthesize reliability=_reliability;
@property (nonatomic) float speedMps; // @synthesize speedMps=_speedMps;
@property (nonatomic) float speedUncMps; // @synthesize speedUncMps=_speedUncMps;
@property (nonatomic) double timeSinceLastSignificantLocationVisitExitS; // @synthesize timeSinceLastSignificantLocationVisitExitS=_timeSinceLastSignificantLocationVisitExitS;
@property (nonatomic) double timestampOfCalibrationS; // @synthesize timestampOfCalibrationS=_timestampOfCalibrationS;

- (void).cxx_destruct;
- (int)StringAsReliability:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reliabilityAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

