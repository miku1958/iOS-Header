//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKGraphSeries, HKValueRange, NSArray, NSDateComponents;

@interface HKGraphViewPointSelectionContext : NSObject
{
    HKGraphSeries *_selectedSeries;
    HKValueRange *_selectedRangeXValues;
    HKValueRange *_selectedPathIndexRange;
    HKValueRange *_selectedPointValueRange;
    NSDateComponents *_pointIntervalComponents;
    NSArray *_userInfo;
}

@property (strong, nonatomic) NSDateComponents *pointIntervalComponents; // @synthesize pointIntervalComponents=_pointIntervalComponents;
@property (strong, nonatomic) HKValueRange *selectedPathIndexRange; // @synthesize selectedPathIndexRange=_selectedPathIndexRange;
@property (strong, nonatomic) HKValueRange *selectedPointValueRange; // @synthesize selectedPointValueRange=_selectedPointValueRange;
@property (strong, nonatomic) HKValueRange *selectedRangeXValues; // @synthesize selectedRangeXValues=_selectedRangeXValues;
@property (strong, nonatomic) HKGraphSeries *selectedSeries; // @synthesize selectedSeries=_selectedSeries;
@property (strong, nonatomic) NSArray *userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)debugDescription;

@end

