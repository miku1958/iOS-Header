//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSCopying-Protocol.h>
#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@class WFColor;

@interface WFGradient : NSObject <NSCopying, NSSecureCoding>
{
    struct CGGradient *_CGGradient;
    WFColor *_baseColor;
    WFColor *_darkBaseColor;
    WFColor *_accessibilityBaseColor;
    WFColor *_darkAccessibilityBaseColor;
    WFColor *_startColor;
    WFColor *_endColor;
    long long _blendMode;
}

@property (readonly, nonatomic) struct CGGradient *CGGradient; // @synthesize CGGradient=_CGGradient;
@property (readonly, nonatomic) WFColor *accessibilityBaseColor; // @synthesize accessibilityBaseColor=_accessibilityBaseColor;
@property (readonly, nonatomic) WFColor *baseColor; // @synthesize baseColor=_baseColor;
@property (readonly, nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
@property (readonly, nonatomic) WFColor *darkAccessibilityBaseColor; // @synthesize darkAccessibilityBaseColor=_darkAccessibilityBaseColor;
@property (readonly, nonatomic) WFColor *darkBaseColor; // @synthesize darkBaseColor=_darkBaseColor;
@property (readonly, nonatomic) WFColor *endColor; // @synthesize endColor=_endColor;
@property (readonly, nonatomic) WFColor *startColor; // @synthesize startColor=_startColor;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)baseColorForDarkMode:(BOOL)arg1 highContrast:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7;
- (id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

