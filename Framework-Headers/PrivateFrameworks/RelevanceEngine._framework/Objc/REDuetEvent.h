//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval, REFeatureValue;

@interface REDuetEvent : NSObject
{
    NSDateInterval *_interval;
    REFeatureValue *_value;
    double _confidence;
}

@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property (readonly, nonatomic) REFeatureValue *value; // @synthesize value=_value;

+ (id)eventWithInterval:(id)arg1 value:(id)arg2 confidence:(double)arg3;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
