//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNTimestamped : NSObject
{
    id _value;
    double _timestamp;
}

@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (id)timestampedWithValue:(id)arg1 timestamp:(double)arg2;
+ (CDUnknownBlockType)wrapTransformWithScheduler:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 timestamp:(double)arg2;
- (BOOL)isEqual:(id)arg1;

@end

