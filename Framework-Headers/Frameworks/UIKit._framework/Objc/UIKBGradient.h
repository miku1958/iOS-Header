//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKBGradient : NSObject <NSCopying>
{
    NSString *_gradientName;
    NSString *_flatColorName;
    NSString *_startColorName;
    NSString *_endColorName;
    NSArray *_colors;
    double _middleLocation;
    double _opacity;
    BOOL _horizontal;
    BOOL _usesRGBColors;
    BOOL _didQueryRGBColors;
}

@property (readonly, nonatomic) NSString *flatColorName;
@property (nonatomic) BOOL horizontal; // @synthesize horizontal=_horizontal;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (readonly, nonatomic) BOOL usesRGBColors;

+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWithName:(id)arg1;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;
- (struct CGGradient *)CGGradient;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

