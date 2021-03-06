//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSArray, NSString, UIColor;

@interface IKColor : NSObject <NSCopying>
{
    UIColor *_color;
    NSArray *_gradientColors;
    long long _colorType;
    long long _gradientType;
    long long _gradientDirectionType;
    NSString *_colorMapKey;
    NSArray *_gradientPoints;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (copy, nonatomic) NSString *colorMapKey; // @synthesize colorMapKey=_colorMapKey;
@property (nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property (copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property (nonatomic) long long gradientDirectionType; // @synthesize gradientDirectionType=_gradientDirectionType;
@property (readonly, copy, nonatomic) NSArray *gradientPoints; // @synthesize gradientPoints=_gradientPoints;
@property (nonatomic) long long gradientType; // @synthesize gradientType=_gradientType;

+ (id)colorMap;
+ (void)registerColorNameMap:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithColor:(id)arg1;
- (id)initWithColorMapKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setGradientColors:(id)arg1 andPoints:(id)arg2;

@end

