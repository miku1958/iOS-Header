//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICardViewLayout : NSObject
{
    BOOL _hideFloatingBackground;
    NSShadow *_shadow;
    UIColor *_backgroundColor;
    UIColor *_darkBackgroundColor;
    UIColor *_highlightColor;
    UIColor *_darkHighlightColor;
    long long _imagePosition;
    TVImageLayout *_imageLayout;
    VUITextLayout *_secondaryTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    TVImageLayout *_appImageLayout;
    VUIButtonLayout *_buttonLayout;
    struct TVCornerRadii _borderRadii;
}

@property (strong, nonatomic) TVImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property (strong, nonatomic) VUIButtonLayout *buttonLayout; // @synthesize buttonLayout=_buttonLayout;
@property (strong, nonatomic) UIColor *darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property (strong, nonatomic) UIColor *darkHighlightColor; // @synthesize darkHighlightColor=_darkHighlightColor;
@property (nonatomic) BOOL hideFloatingBackground; // @synthesize hideFloatingBackground=_hideFloatingBackground;
@property (strong, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property (strong, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property (nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property (strong, nonatomic) VUITextLayout *secondaryTextLayout; // @synthesize secondaryTextLayout=_secondaryTextLayout;
@property (strong, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property (strong, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property (strong, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;

+ (double)cardHeightForElementType:(unsigned long long)arg1;
+ (double)cardHeightForElementType:(unsigned long long)arg1 width:(double)arg2;
- (void).cxx_destruct;
- (id)init;

@end

