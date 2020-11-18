//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface CMWorkout : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *fSessionId;
    long long fType;
}

@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) long long type;

+ (long long)natalieDataSessionFromWorkoutType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)workoutName:(long long)arg1;
+ (long long)workoutTypeFromNatalieDataSession:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2;

@end

