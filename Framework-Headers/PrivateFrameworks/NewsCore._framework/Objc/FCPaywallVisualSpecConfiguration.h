//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCColor, FCMultiResolutionImage, FCMultiSizeVideo, NSURL;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying>
{
    FCMultiResolutionImage *_multiResolutionImage;
    FCMultiResolutionImage *_darkStyleMultiResolutionImage;
    FCMultiResolutionImage *_multiResolutionBadgeImage;
    FCMultiResolutionImage *_darkStyleMultiResolutionBadgeImage;
    FCMultiSizeVideo *_multiSizeVideo;
    NSURL *_videoURL;
    long long _videoWidth;
    long long _videoHeight;
    double _gradientPercentHeight;
    long long _textTopPadding;
    long long _badgeVerticalOffset;
    FCColor *_backgroundColor;
    FCColor *_darkStyleBackgroundColor;
    FCColor *_mastheadTextColor;
    FCColor *_largeTextColor;
    FCColor *_smallTextColor;
    FCColor *_offersTextColor;
}

@property (strong, nonatomic) FCColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (nonatomic) long long badgeVerticalOffset; // @synthesize badgeVerticalOffset=_badgeVerticalOffset;
@property (strong, nonatomic) FCColor *darkStyleBackgroundColor; // @synthesize darkStyleBackgroundColor=_darkStyleBackgroundColor;
@property (strong, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionBadgeImage; // @synthesize darkStyleMultiResolutionBadgeImage=_darkStyleMultiResolutionBadgeImage;
@property (strong, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionImage; // @synthesize darkStyleMultiResolutionImage=_darkStyleMultiResolutionImage;
@property (nonatomic) double gradientPercentHeight; // @synthesize gradientPercentHeight=_gradientPercentHeight;
@property (strong, nonatomic) FCColor *largeTextColor; // @synthesize largeTextColor=_largeTextColor;
@property (strong, nonatomic) FCColor *mastheadTextColor; // @synthesize mastheadTextColor=_mastheadTextColor;
@property (strong, nonatomic) FCMultiResolutionImage *multiResolutionBadgeImage; // @synthesize multiResolutionBadgeImage=_multiResolutionBadgeImage;
@property (strong, nonatomic) FCMultiResolutionImage *multiResolutionImage; // @synthesize multiResolutionImage=_multiResolutionImage;
@property (strong, nonatomic) FCMultiSizeVideo *multiSizeVideo; // @synthesize multiSizeVideo=_multiSizeVideo;
@property (strong, nonatomic) FCColor *offersTextColor; // @synthesize offersTextColor=_offersTextColor;
@property (strong, nonatomic) FCColor *smallTextColor; // @synthesize smallTextColor=_smallTextColor;
@property (nonatomic) long long textTopPadding; // @synthesize textTopPadding=_textTopPadding;
@property (nonatomic) long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property (strong, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property (nonatomic) long long videoWidth; // @synthesize videoWidth=_videoWidth;

+ (id)defaultAudioFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultAudioFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultPaywallVisualSpecConfiguration;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithMultiResolutionImage:(id)arg1 darkStyleMultiResolutionImage:(id)arg2 multiResolutionBadgeImage:(id)arg3 darkStyleMultiResolutionBadgeImage:(id)arg4 multiSizeVideo:(id)arg5 videoURL:(id)arg6 videoWidth:(long long)arg7 videoHeight:(long long)arg8 gradientPercentHeight:(double)arg9 textTopPadding:(long long)arg10 badgeVerticalOffset:(long long)arg11 backgroundColor:(id)arg12 darkStyleBackgroundColor:(id)arg13 mastheadTextColor:(id)arg14 largeTextColor:(id)arg15 smallTextColor:(id)arg16 offersTextColor:(id)arg17;
- (BOOL)isEqual:(id)arg1;

@end

