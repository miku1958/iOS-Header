//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>

@interface TSDStrokePattern : NSObject <NSCopying, TSDMixing>
{
    double mPattern[6];
    unsigned long long mCount;
    double mPhase;
    int mType;
}

@property (readonly, nonatomic) unsigned long long count; // @synthesize count=mCount;
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isRoundDash;
@property (readonly, nonatomic) double *pattern;
@property (readonly, nonatomic) int patternType; // @synthesize patternType=mType;
@property (readonly, nonatomic) double phase; // @synthesize phase=mPhase;

+ (id)dashPatternWithSpacing:(double)arg1;
+ (id)emptyPattern;
+ (id)longDashPattern;
+ (id)mediumDashPattern;
+ (id)roundDashPattern;
+ (id)roundDashPatternWithSpacing:(double)arg1;
+ (id)shortDashPattern;
+ (id)solidPattern;
+ (id)strokePatternWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (void)applyToCAShapeLayer:(id)arg1;
- (void)applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (void)i_applyToContext:(struct CGContext *)arg1 lineWidth:(double)arg2 capStyle:(unsigned long long *)arg3;
- (id)initWithPattern:(const double *)arg1 count:(unsigned long long)arg2 phase:(double)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)p_applyToCAShapeLayer:(id)arg1 lineWidth:(double)arg2;
- (id)p_initWithType:(int)arg1 pattern:(const double *)arg2 count:(unsigned long long)arg3 phase:(double)arg4;

@end
