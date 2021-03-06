//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class TAInterVisitMetricPerDevice;

@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding>
{
    TAInterVisitMetricPerDevice *_interVisitMetrics;
    unsigned long long _loiType;
}

@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics; // @synthesize interVisitMetrics=_interVisitMetrics;
@property (readonly, nonatomic) unsigned long long loiType; // @synthesize loiType=_loiType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterVisitMetrics:(id)arg1 loiType:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

