//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/NSObject-Protocol.h>

@protocol HKGraphSeriesBlockCoordinateInfo;

@protocol HKGraphSeriesBlockCoordinate <NSObject>

@property (nonatomic, readonly) double endXValue;
@property (nonatomic, readonly) double startXValue;
@property (nonatomic, readonly) id<HKGraphSeriesBlockCoordinateInfo> userInfo;

- (id)copyWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
@end
