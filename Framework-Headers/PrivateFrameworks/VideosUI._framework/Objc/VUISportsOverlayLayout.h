//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIScoreboardLayout, VUITextBadgeLayout;

__attribute__((visibility("hidden")))
@interface VUISportsOverlayLayout : TVViewLayout
{
    VUIScoreboardLayout *_scoreboardLayout;
    VUITextBadgeLayout *_textBadgeLayout;
    TVImageLayout *_appImageLayout;
    TVImageLayout *_logoImageLayout;
}

@property (strong, nonatomic) TVImageLayout *appImageLayout; // @synthesize appImageLayout=_appImageLayout;
@property (strong, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property (strong, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
@property (strong, nonatomic) VUITextBadgeLayout *textBadgeLayout; // @synthesize textBadgeLayout=_textBadgeLayout;

+ (long long)_scoreboardTypeForElement:(id)arg1;
+ (id)_sportsOverlayALayoutWithElement:(id)arg1;
+ (id)_sportsOverlayBLayoutWithElement:(id)arg1;
+ (id)_sportsOverlayCLayoutWithElement:(id)arg1;
+ (id)overlayLayoutForElement:(id)arg1 cardLayoutType:(long long)arg2;
- (void).cxx_destruct;

@end

