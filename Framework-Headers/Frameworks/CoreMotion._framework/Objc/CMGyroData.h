//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CMLogItem.h>

@interface CMGyroData : CMLogItem
{
    id _internal;
}

@property (readonly, nonatomic) CDStruct_31142d93 rotationRate;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRotationRate:(CDStruct_03942939)arg1 andTimestamp:(double)arg2;

@end
