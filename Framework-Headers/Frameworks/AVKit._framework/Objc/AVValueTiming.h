//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCoding-Protocol.h>
#import <AVKit/NSCopying-Protocol.h>
#import <AVKit/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface AVValueTiming : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
}

@property (readonly, nonatomic) double anchorTimeStamp;
@property (readonly, nonatomic) double anchorValue;
@property (readonly, nonatomic) double currentValue;
@property (readonly, nonatomic) double rate;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (double)currentTimeStamp;
+ (id)valueTimingWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (CDStruct_c3b9c2ee)_timing;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithValueTiming:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToValueTiming:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (double)timeStampForValue:(double)arg1;
- (double)valueForTimeStamp:(double)arg1;

@end

