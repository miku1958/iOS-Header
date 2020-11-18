//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQueryAnchor;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration
{
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_anchor;
    unsigned long long _limit;
    double _collectionInterval;
}

@property (strong, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property (nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property (nonatomic) BOOL includeDeletedObjects; // @synthesize includeDeletedObjects=_includeDeletedObjects;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
