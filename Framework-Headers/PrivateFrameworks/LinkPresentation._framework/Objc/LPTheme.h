//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LPCaptionBarStyle, LPImageViewStyle, LPPointUnit, LPTapToLoadViewStyle, LPTextViewStyle, LPVideoViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTheme : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_highlightColor;
    LPCaptionBarStyle *_captionBar;
    LPTextViewStyle *_quotedText;
    LPImageViewStyle *_mediaImage;
    LPVideoViewStyle *_mediaVideo;
    UIColor *_mediaBackgroundColor;
    LPCaptionBarStyle *_mediaTopCaptionBar;
    LPCaptionBarStyle *_mediaBottomCaptionBar;
    LPTapToLoadViewStyle *_tapToLoad;
    LPPointUnit *_maximumWidth;
    LPPointUnit *_maximumIntrinsicHeight;
    double _widthFractionForTallMedia;
}

@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar; // @synthesize captionBar=_captionBar;
@property (strong, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (strong, nonatomic) LPPointUnit *maximumIntrinsicHeight; // @synthesize maximumIntrinsicHeight=_maximumIntrinsicHeight;
@property (strong, nonatomic) LPPointUnit *maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property (strong, nonatomic) UIColor *mediaBackgroundColor; // @synthesize mediaBackgroundColor=_mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage; // @synthesize mediaImage=_mediaImage;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property (readonly, nonatomic) LPVideoViewStyle *mediaVideo; // @synthesize mediaVideo=_mediaVideo;
@property (readonly, nonatomic) LPTextViewStyle *quotedText; // @synthesize quotedText=_quotedText;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad; // @synthesize tapToLoad=_tapToLoad;
@property (nonatomic) double widthFractionForTallMedia; // @synthesize widthFractionForTallMedia=_widthFractionForTallMedia;

+ (void)addClient:(id)arg1;
+ (id)regularTheme;
+ (id)themeWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;
- (void).cxx_destruct;
- (id)CSSCustomPropertiesForThemePropertiesInSet:(id)arg1;
- (id)CSSTextForThemeProperty:(id)arg1;
- (id)initWithStyle:(long long)arg1 icon:(id)arg2 platform:(long long)arg3;
- (id)valueForUndefinedKey:(id)arg1;

@end

