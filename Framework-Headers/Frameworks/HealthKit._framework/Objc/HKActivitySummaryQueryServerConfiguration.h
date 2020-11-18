//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

__attribute__((visibility("hidden")))
@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    BOOL _shouldIncludeActivitySummaryPrivateProperties;
    BOOL _shouldIncludeActivitySummaryStatistics;
    BOOL _orderByDateAscending;
    unsigned long long _limit;
}

@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (nonatomic) BOOL orderByDateAscending; // @synthesize orderByDateAscending=_orderByDateAscending;
@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties; // @synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics; // @synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
