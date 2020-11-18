//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (NFLAdditions)

@property (readonly, nonatomic) double alpha;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double brightness;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double hue;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double saturation;

+ (id)nfl_accessoryColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (long long)nfl_binForColor:(id)arg1;
+ (id)nfl_blue;
+ (id)nfl_colorBetweenGradientColors:(id)arg1 andColor:(id)arg2 atPosition:(double)arg3;
+ (id)nfl_colorByInterpolatingFromColor:(id)arg1 toColor:(id)arg2 percent:(double)arg3;
+ (id)nfl_colorComponentsFromString:(id)arg1;
+ (id)nfl_colorWithHexString:(id)arg1;
+ (id)nfl_defaultSystemTintColor;
+ (id)nfl_editorialPicksHeadercolor;
+ (id)nfl_forYouStoriesHeadercolor;
+ (id)nfl_gray;
+ (id)nfl_green;
+ (id)nfl_likeDislikeGlyphCellColor;
+ (id)nfl_plusDEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_plusLEffectWithForegroundColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_red;
+ (id)nfl_saveGlyphCellColor;
+ (id)nfl_savedStoriesHeadercolor;
+ (id)nfl_sponsoredStoryTextcolor;
+ (id)nfl_subscriptionGlyphColorForTextColor:(id)arg1 backgroundColor:(id)arg2;
+ (id)nfl_subscriptionOnlyStickercolor;
+ (id)nfl_subscriptionOnlyTextcolor;
+ (id)nfl_topStoriesHeadercolor;
+ (id)nfl_topicColorsArray;
+ (id)nfl_trendingStoriesHeadercolor;
+ (id)nfl_yellow;
- (void)_getHSBA:(CDUnknownBlockType)arg1;
- (void)_getRGBA:(CDUnknownBlockType)arg1;
- (BOOL)isAboutEqualToColor:(id)arg1;
- (BOOL)isEqualToColor:(id)arg1;
- (id)nfl_colorOrBlackIfTooBright;
- (id)nfl_description;
- (void)print;
@end
