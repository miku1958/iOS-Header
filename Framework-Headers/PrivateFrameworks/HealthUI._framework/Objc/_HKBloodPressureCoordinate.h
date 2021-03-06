//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class HKMinMaxCoordinate, NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface _HKBloodPressureCoordinate : NSObject <HKGraphSeriesBlockCoordinate>
{
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKMinMaxCoordinate *_systolicCoordinate;
    HKMinMaxCoordinate *_diastolicCoordinate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HKMinMaxCoordinate *diastolicCoordinate; // @synthesize diastolicCoordinate=_diastolicCoordinate;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HKMinMaxCoordinate *systolicCoordinate; // @synthesize systolicCoordinate=_systolicCoordinate;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithSystolicCoordinate:(id)arg1 diastolicCoordinate:(id)arg2 userInfo:(id)arg3;

@end

