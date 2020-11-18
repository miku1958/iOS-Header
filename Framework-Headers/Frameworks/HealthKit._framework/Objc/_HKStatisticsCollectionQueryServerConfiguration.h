//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    unsigned long long _mergeStrategy;
}

@property (copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
@property (copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

