//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@interface FCColor : NSObject <NSCopying>
{
    double _red;
    double _green;
    double _blue;
    double _alpha;
}

@property (readonly, nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (readonly, nonatomic) double blue; // @synthesize blue=_blue;
@property (readonly, nonatomic) double green; // @synthesize green=_green;
@property (readonly, nonatomic) double red; // @synthesize red=_red;

+ (id)blackColor;
+ (id)clearColor;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithPBColor:(id)arg1;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)nullableColorWithHexString:(id)arg1;
+ (id)whiteColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSimilarToColor:(id)arg1 withinPercentage:(double)arg2;
- (id)legibleColor;
- (id)pbColor;
- (void)readDeconstructedRepresentationWithAcccessor:(CDUnknownBlockType)arg1;

@end
