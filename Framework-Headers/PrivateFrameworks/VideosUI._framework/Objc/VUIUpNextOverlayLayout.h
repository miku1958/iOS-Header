//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIProgressBarLayout, VUITextBadgeLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIUpNextOverlayLayout : TVViewLayout
{
    TVImageLayout *_appImageLayout;
    TVImageLayout *_logoImageLayout;
    VUIProgressBarLayout *_progressBarLayout;
    TVImageLayout *_badgeLayout;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    VUITextBadgeLayout *_textBadgeLayout;
}

@property (strong, nonatomic) TVImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property (strong, nonatomic) TVImageLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property (strong, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property (strong, nonatomic) VUIProgressBarLayout *progressBarLayout; // @synthesize progressBarLayout=_progressBarLayout;
@property (strong, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property (strong, nonatomic) VUITextBadgeLayout *textBadgeLayout; // @synthesize textBadgeLayout=_textBadgeLayout;
@property (strong, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;

+ (void)_setAppImageDefaultSize:(id)arg1;
+ (void)_setLogoImageDefaultSize:(id)arg1;
+ (id)appImageLayout;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
+ (id)logoImageLayout;
- (void).cxx_destruct;
- (id)init;

@end

