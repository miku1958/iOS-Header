//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKStatistics;

@interface _HKBloodPressureWrapper : NSObject
{
    HKStatistics *_systolic;
    HKStatistics *_diastolic;
}

@property (strong, nonatomic) HKStatistics *diastolic; // @synthesize diastolic=_diastolic;
@property (strong, nonatomic) HKStatistics *systolic; // @synthesize systolic=_systolic;

- (void).cxx_destruct;

@end

