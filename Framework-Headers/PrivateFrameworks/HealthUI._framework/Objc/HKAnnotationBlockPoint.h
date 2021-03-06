//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesBlockCoordinate-Protocol.h>

@class NSString;
@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKAnnotationBlockPoint : NSObject <HKGraphSeriesBlockCoordinate>
{
    long long _pointType;
    id<HKGraphSeriesBlockCoordinateInfo> _userInfo;
    struct CGPoint _point;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double endXValue;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
@property (readonly, nonatomic) long long pointType; // @synthesize pointType=_pointType;
@property (readonly, nonatomic) double startXValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<HKGraphSeriesBlockCoordinateInfo> userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithChartPoint:(id)arg1 xAxisTransform:(id)arg2 yAxisTransform:(id)arg3;
- (id)initWithTransform:(struct CGAffineTransform)arg1 blockPoint:(id)arg2;

@end

