//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKInteractiveChartInsulinData : NSObject <HKGraphSeriesChartData>
{
    double _basalValue;
    double _totalValue;
}

@property (nonatomic) double basalValue; // @synthesize basalValue=_basalValue;
@property (readonly, nonatomic) double bolusValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double totalValue; // @synthesize totalValue=_totalValue;


@end
