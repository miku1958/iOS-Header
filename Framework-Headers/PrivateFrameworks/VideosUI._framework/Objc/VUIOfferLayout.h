//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class NSShadow, TVImageLayout, UIColor, VUIButtonLayout, VUIMediaTagsViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIOfferLayout : TVViewLayout
{
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_logoLayout;
    VUITextLayout *_channelNameTextLayout;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_textLayout;
    VUITextLayout *_focusedTextLayout;
    TVImageLayout *_badgeLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIButtonLayout *_versionsButtonLayout;
    NSShadow *_shadow;
    double _borderWidth;
    UIColor *_borderColor;
    struct TVCornerRadii _borderRadii;
}

@property (strong, nonatomic) TVImageLayout *appIconLayout; // @synthesize appIconLayout=_appIconLayout;
@property (strong, nonatomic) TVImageLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property (strong, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property (nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property (strong, nonatomic) VUITextLayout *channelNameTextLayout; // @synthesize channelNameTextLayout=_channelNameTextLayout;
@property (strong, nonatomic) VUITextLayout *focusedTextLayout; // @synthesize focusedTextLayout=_focusedTextLayout;
@property (strong, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property (strong, nonatomic) TVImageLayout *logoLayout; // @synthesize logoLayout=_logoLayout;
@property (strong, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property (strong, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property (strong, nonatomic) VUIMediaTagsViewLayout *tagsLayout; // @synthesize tagsLayout=_tagsLayout;
@property (strong, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;
@property (strong, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;
@property (strong, nonatomic) VUIButtonLayout *versionsButtonLayout; // @synthesize versionsButtonLayout=_versionsButtonLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)subtitleTextLayout;
- (void).cxx_destruct;
- (id)init;

@end

