//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>

@interface RTMotionActivityHistogramBin : NSObject <NSCopying>
{
    unsigned long long _type;
    unsigned long long _confidence;
    double _interval;
}

@property (nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property (nonatomic) double interval; // @synthesize interval=_interval;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)addInterval:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithType:(unsigned long long)arg1 confidence:(unsigned long long)arg2 interval:(double)arg3;
- (void)updateConfidence:(unsigned long long)arg1;

@end

