//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/NSMutableCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>
{
    double mOpacity;
    double mFadeAcceleration;
}

@property (readonly, nonatomic) double fadeAcceleration; // @synthesize fadeAcceleration=mFadeAcceleration;
@property (readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;

+ (BOOL)canMixWithNilObjects;
+ (id)reflection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOpacity:(double)arg1;
- (id)initWithOpacity:(double)arg1 fadeAcceleration:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

