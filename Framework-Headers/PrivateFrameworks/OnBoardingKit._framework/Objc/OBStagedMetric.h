//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBCodable;

__attribute__((visibility("hidden")))
@interface OBStagedMetric : NSObject
{
    unsigned int _metricId;
    PBCodable *_metric;
}

@property (strong) PBCodable *metric; // @synthesize metric=_metric;
@property unsigned int metricId; // @synthesize metricId=_metricId;

- (void).cxx_destruct;
- (void)commit;
- (id)initWithMetricID:(unsigned int)arg1 metric:(id)arg2;

@end

