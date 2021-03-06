//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface __NSTextAppearanceEffectContext : NSObject
{
    NSString *_effectName;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_effectConfiguration;
    UIFont *_font;
    UIColor *_color;
}

- (void)dealloc;
- (void)drawGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 context:(struct CGContext *)arg4;
- (id)initWithTextEffectName:(id)arg1 catalog:(id)arg2 styleEffectConfiguration:(id)arg3 font:(id)arg4 color:(id)arg5 applicationFrameworkContext:(long long)arg6 useSimplifiedEffect:(BOOL)arg7;

@end

