//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView
{
    BOOL _usesSecondaryColor;
    NSString *_string;
    UIFont *_font;
}

@property (readonly, nonatomic) double baselineOffset;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (copy, nonatomic) NSString *string; // @synthesize string=_string;
@property (readonly, nonatomic) BOOL usesSecondaryColor; // @synthesize usesSecondaryColor=_usesSecondaryColor;

- (void)dealloc;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateImage;

@end

