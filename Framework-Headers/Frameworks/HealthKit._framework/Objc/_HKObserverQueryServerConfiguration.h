//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

__attribute__((visibility("hidden")))
@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration
{
    BOOL _observeUnfrozenSeries;
}

@property (nonatomic) BOOL observeUnfrozenSeries; // @synthesize observeUnfrozenSeries=_observeUnfrozenSeries;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
