//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransfer, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep
{
    unsigned int _expectedTime;
    BOOL _isArrivalUncertain;
    GEOTransitTransfer *_transitTransfer;
    GEOTransitEnterExitInfo *_enterExitInfo;
    GEOPBTransitAccessPoint *_accessPoint;
}

@property (readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
@property (readonly, nonatomic) BOOL displayStop;
@property (readonly, nonatomic) NSString *exitSign;
@property (readonly, nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property (readonly, nonatomic) BOOL hasDisplayStop;
@property (readonly, nonatomic) BOOL isArrivalUncertain; // @synthesize isArrivalUncertain=_isArrivalUncertain;
@property (readonly, nonatomic) GEOTransitTransfer *transitTransfer; // @synthesize transitTransfer=_transitTransfer;

- (void)dealloc;
- (CDStruct_c3b9c2ee)endGeoCoordinate;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;
- (CDStruct_c3b9c2ee)startGeoCoordinate;

@end

