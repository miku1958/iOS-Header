//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString, STUsageReport;

@interface STUsageDetailsViewModel : NSObject
{
    unsigned long long _selectedTimePeriod;
    NSString *_selectedItemDisplayName;
    NSDate *_lastUpdatedDate;
    STUsageReport *_todayUsageReport;
    STUsageReport *_weekUsageReport;
    NSArray *_rawUsageItems;
}

@property (readonly, nonatomic) BOOL hasUsageData;
@property (strong, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property (readonly, copy, nonatomic) NSArray *rawUsageItems; // @synthesize rawUsageItems=_rawUsageItems;
@property (copy, nonatomic) NSString *selectedItemDisplayName; // @synthesize selectedItemDisplayName=_selectedItemDisplayName;
@property unsigned long long selectedTimePeriod; // @synthesize selectedTimePeriod=_selectedTimePeriod;
@property (readonly, nonatomic) STUsageReport *selectedUsageReport;
@property (strong, nonatomic) STUsageReport *todayUsageReport; // @synthesize todayUsageReport=_todayUsageReport;
@property (strong, nonatomic) STUsageReport *weekUsageReport; // @synthesize weekUsageReport=_weekUsageReport;

+ (id)keyPathsForValuesAffectingHasUsageData;
+ (id)keyPathsForValuesAffectingSelectedUsageReport;
- (void).cxx_destruct;
- (id)init;
- (void)setRawUsageItems:(id)arg1 lastUpdatedDate:(id)arg2;

@end

