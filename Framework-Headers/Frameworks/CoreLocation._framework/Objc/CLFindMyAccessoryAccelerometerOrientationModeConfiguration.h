//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSSecureCoding-Protocol.h>

@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject <NSSecureCoding>
{
    unsigned short _sleepDuration_ms;
    unsigned int _threshold;
}

@property (nonatomic) unsigned short sleepDuration_ms; // @synthesize sleepDuration_ms=_sleepDuration_ms;
@property (nonatomic) unsigned int threshold; // @synthesize threshold=_threshold;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreshold:(unsigned int)arg1 sleepDuration:(unsigned short)arg2;

@end

