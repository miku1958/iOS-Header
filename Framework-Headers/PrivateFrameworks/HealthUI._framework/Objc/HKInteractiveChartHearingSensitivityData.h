//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData>
{
    BOOL _isLeftEar;
    double _sensitivityDbHL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isLeftEar; // @synthesize isLeftEar=_isLeftEar;
@property (nonatomic) double sensitivityDbHL; // @synthesize sensitivityDbHL=_sensitivityDbHL;
@property (readonly) Class superclass;


@end

