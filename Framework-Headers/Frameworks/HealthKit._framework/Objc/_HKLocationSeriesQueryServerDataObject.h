//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKQueryServerDataObject.h>

@class HKLocationSeriesSample;

__attribute__((visibility("hidden")))
@interface _HKLocationSeriesQueryServerDataObject : _HKQueryServerDataObject
{
    HKLocationSeriesSample *_locationSeries;
    unsigned long long _batchCount;
}

@property (nonatomic) unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property (strong, nonatomic) HKLocationSeriesSample *locationSeries; // @synthesize locationSeries=_locationSeries;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

