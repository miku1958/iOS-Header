//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, _CDSizeMetricFamily;

@interface _CDSizeMetric : NSObject
{
    struct os_unfair_lock_s _lock;
    unsigned long long _scale;
    unsigned long long _count;
    unsigned long long _firstSize;
    unsigned long long _lastSize;
    unsigned long long _minimumSize;
    unsigned long long _maximumSize;
    unsigned long long _totalSizes;
    NSDate *_firstUpdate;
    NSDate *_lastUpdate;
    NSString *_name;
    NSString *_string;
    _CDSizeMetricFamily *_family;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 string:(id)arg2 scale:(unsigned long long)arg3 family:(id)arg4;

@end
