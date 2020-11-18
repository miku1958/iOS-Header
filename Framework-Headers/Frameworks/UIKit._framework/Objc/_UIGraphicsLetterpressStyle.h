//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying>
{
    int innerShadowBlendMode;
    int outerShadowBlendMode;
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    double embossSize;
    UIColor *innerShadowColor;
    double innerShadowBlur;
    UIColor *outerShadowColor;
    double outerShadowBlur;
    UIColor *topGradientColor;
    UIColor *bottomGradientColor;
    double innerOpacity;
    struct CGPoint innerShadowOffset;
    struct CGPoint outerShadowOffset;
}

@property (strong, nonatomic) UIColor *bottomGradientColor; // @synthesize bottomGradientColor;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property (strong, nonatomic) UIColor *embossHighlightColor; // @synthesize embossHighlightColor;
@property (strong, nonatomic) UIColor *embossShadowColor; // @synthesize embossShadowColor;
@property (nonatomic) double embossSize; // @synthesize embossSize;
@property (nonatomic) double innerOpacity; // @synthesize innerOpacity;
@property (nonatomic) int innerShadowBlendMode; // @synthesize innerShadowBlendMode;
@property (nonatomic) double innerShadowBlur; // @synthesize innerShadowBlur;
@property (strong, nonatomic) UIColor *innerShadowColor; // @synthesize innerShadowColor;
@property (nonatomic) struct CGPoint innerShadowOffset; // @synthesize innerShadowOffset;
@property (nonatomic) int outerShadowBlendMode; // @synthesize outerShadowBlendMode;
@property (nonatomic) double outerShadowBlur; // @synthesize outerShadowBlur;
@property (strong, nonatomic) UIColor *outerShadowColor; // @synthesize outerShadowColor;
@property (nonatomic) struct CGPoint outerShadowOffset; // @synthesize outerShadowOffset;
@property (strong, nonatomic) UIColor *topGradientColor; // @synthesize topGradientColor;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

