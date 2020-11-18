//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKColorPalette, NSString, UIColor;

@interface GKTextStyle : NSObject
{
    double _UIKitFontLeading;
    BOOL _needsParagraphStyle;
    BOOL _overrideUIKitFontSize;
    GKColorPalette *_palette;
    NSString *_fontName;
    NSString *_UIKitFontTextStyleName;
    double _fontSize;
    UIColor *_color;
    long long _textAlignment;
    long long _lineBreakMode;
    double _minimumLineHeight;
    double _m34;
    double _zPosition;
    SEL _fontSizeRebaseSelector;
    SEL _fontNameRebaseSelector;
}

@property (strong, nonatomic) NSString *UIKitFontTextStyleName; // @synthesize UIKitFontTextStyleName=_UIKitFontTextStyleName;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (strong, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
@property (nonatomic) SEL fontNameRebaseSelector; // @synthesize fontNameRebaseSelector=_fontNameRebaseSelector;
@property (readonly, nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property (nonatomic) SEL fontSizeRebaseSelector; // @synthesize fontSizeRebaseSelector=_fontSizeRebaseSelector;
@property (nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property (nonatomic) double m34; // @synthesize m34=_m34;
@property (nonatomic) double minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property (nonatomic) BOOL needsParagraphStyle; // @synthesize needsParagraphStyle=_needsParagraphStyle;
@property (nonatomic) BOOL overrideUIKitFontSize; // @synthesize overrideUIKitFontSize=_overrideUIKitFontSize;
@property (strong, nonatomic) GKColorPalette *palette; // @synthesize palette=_palette;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (nonatomic) double zPosition; // @synthesize zPosition=_zPosition;

+ (id)attributedString:(id)arg1 byReplayingFromBaseStyle:(id)arg2 systemContentSizeDidChange:(BOOL)arg3;
+ (double)bubbleTextScale;
+ (double)scaledValueFromHISpecLeading:(double)arg1 forFontTextStyle:(id)arg2;
+ (double)standardFontSize;
+ (double)standardLeadingForFontTextStyle:(id)arg1;
+ (id)textStyle;
- (id)achievementLeaderboardPointsText;
- (id)achievementLeaderboardRank;
- (id)achievementValueText;
- (id)alignment:(long long)arg1 lineBreakMode:(long long)arg2;
- (void)applyScaleForMesh;
- (void)applyToEditField:(id)arg1;
- (void)applyToLabel:(id)arg1;
- (id)attributes;
- (id)bannerMessage;
- (id)bannerTitle;
- (id)baseFontRebaseSelector;
- (id)body;
- (id)bold;
- (id)bubbleCaption;
- (id)bubbleCaptionSmall;
- (id)bubbleHeadline;
- (id)bubbleText;
- (id)bubbleTextSmall;
- (id)bubbleValue;
- (id)bubbleValueSmall;
- (id)buttonTitle;
- (id)buyButtonTitle;
- (id)caption;
- (id)caption1;
- (id)caption2;
- (id)cellActionItem;
- (id)centered;
- (id)challengeBubbleValue;
- (id)challengeText;
- (id)challengeTitleText;
- (id)composeFields;
- (id)composeMessage;
- (id)copy;
- (id)copyWithBaseClass:(Class)arg1;
- (void)dealloc;
- (id)description;
- (id)detailSecondaryHeaderText;
- (id)emphasized;
- (id)emphasizedOnDarkBackground;
- (id)footnote;
- (id)friendCaptionColor;
- (id)friendColor;
- (id)gameDetailNameText;
- (unsigned long long)hash;
- (id)header0;
- (id)header1;
- (id)header2;
- (id)header3;
- (id)header4;
- (id)headerViewSubText1;
- (id)headline;
- (id)info;
- (id)init;
- (id)initEmpty;
- (BOOL)isEqual:(id)arg1;
- (id)leaderboardRankLarge;
- (id)leaderboardRankMedium;
- (id)leaderboardRankSmall;
- (id)light;
- (id)lineBreakMode:(long long)arg1;
- (id)lineHeight:(double)arg1;
- (id)localPlayerColor;
- (id)meBubbleCaption;
- (id)meBubbleValue;
- (id)medium;
- (id)multiplayerAddText;
- (id)multiplayerFooterText;
- (id)multiplayerHeaderText;
- (id)multiplayerNameText;
- (id)multiplayerStatusText;
- (id)regular;
- (id)remoteUIDetailLabel:(int)arg1;
- (id)remoteUIEditField:(int)arg1;
- (id)remoteUIEditLabel:(int)arg1;
- (id)remoteUILabel:(int)arg1;
- (id)remoteUINickNameField:(int)arg1;
- (id)remoteUINickNameLabel:(int)arg1;
- (id)remoteUISectionFooter:(int)arg1;
- (id)remoteUISectionHeader:(int)arg1;
- (id)remoteUISelectField:(int)arg1;
- (id)remoteUISelectLabel:(int)arg1;
- (id)remoteUITableFooterButton:(int)arg1;
- (id)remoteUITableHeaderButton:(int)arg1;
- (id)remoteUITableHeaderLabel:(int)arg1;
- (id)remoteUITableHeaderSubLabel:(int)arg1;
- (id)removeButtonTitle;
- (id)replayOnBaseStyle:(id)arg1 systemContentSizeDidChange:(BOOL)arg2;
- (id)resolveFontAndLineSpacing:(double *)arg1;
- (id)roundButtonTitle;
- (id)scaled:(double)arg1;
- (id)scaledForM34:(double)arg1 zPosition:(double)arg2;
- (id)sectionCaption;
- (id)sectionCaptionSmall;
- (id)sectionHeader;
- (id)segmentBubbleCaption;
- (id)segmentBubbleValue;
- (id)selectedBuyButtonTitle;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 leadingOverrideFromHISpec:(double)arg3 shouldOverrideSize:(BOOL)arg4 rebaseSelector:(SEL)arg5;
- (void)setFontName:(id)arg1 kitTextStyleName:(id)arg2 shouldOverrideSize:(BOOL)arg3 rebaseSelector:(SEL)arg4;
- (void)setFontName:(id)arg1 rebaseSelector:(SEL)arg2;
- (void)setFontSize:(double)arg1 rebaseSelector:(SEL)arg2;
- (id)settingsBoldButton;
- (id)settingsButton;
- (id)settingsFooter;
- (id)settingsHeader;
- (id)settingsLabel;
- (id)settingsLinkText;
- (id)signInField;
- (id)signInFieldLabel;
- (id)signInLink;
- (id)signInSubtitle;
- (id)signInTitle;
- (id)small;
- (id)smallInfo;
- (id)strong;
- (id)styleWithName:(id)arg1 fallback:(id)arg2 layoutMode:(int)arg3;
- (id)tabIconCaption;
- (id)tableCellSubtitle;
- (id)tableCellTitle;
- (id)tableFooterStyle;
- (id)thin;
- (id)thinNumberText;
- (id)viewBackground;

@end

