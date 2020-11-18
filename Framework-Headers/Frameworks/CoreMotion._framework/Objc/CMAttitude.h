//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;
}

@property (readonly, nonatomic) double pitch;
@property (readonly, nonatomic) CDStruct_bf7dff04 quaternion;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) CDStruct_afa449f9 rotationMatrix;
@property (readonly, nonatomic) double yaw;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuaternion:(CDStruct_bf7dff04)arg1;
- (void)multiplyByInverseOfAttitude:(id)arg1;
- (void)setQuaternion:(CDStruct_bf7dff04)arg1;

@end

