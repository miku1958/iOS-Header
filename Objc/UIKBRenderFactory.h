//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIKBRenderConfig, UIKBRenderingContext;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderingContext *_renderingContext;
    NSMutableArray *_segmentTraits;
    BOOL _suppressSegmentTraits;
    double _rivenSizeFactor;
    BOOL _lightweightFactory;
    double _scale;
    BOOL _boldTextEnabled;
    BOOL _allowsPaddles;
    BOOL _preferStringKeycapOverImage;
}

@property (nonatomic) BOOL allowsPaddles; // @synthesize allowsPaddles=_allowsPaddles;
@property (readonly, nonatomic) BOOL boldTextEnabled; // @synthesize boldTextEnabled=_boldTextEnabled;
@property (nonatomic) BOOL lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property (nonatomic) BOOL preferStringKeycapOverImage; // @synthesize preferStringKeycapOverImage=_preferStringKeycapOverImage;
@property (readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
@property (strong, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property (nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;

+ (id)_characterSetForGlyphSelectors;
+ (BOOL)_enabled;
+ (long long)_graphicsQuality;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;
+ (BOOL)couldUseGlyphSelectorForDisplayString:(id)arg1;
+ (Class)factoryClassForVisualStyle:(CDStruct_961fb75c)arg1;
+ (id)factoryForVisualStyle:(CDStruct_961fb75c)arg1 renderingContext:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_961fb75c)arg1 renderingContext:(id)arg2 skipLayoutSegments:(BOOL)arg3;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_961fb75c)arg1 renderingContext:(id)arg2;
+ (id)segmentedControlColor:(BOOL)arg1;
- (double)RivenFactor:(double)arg1;
- (id)_controlKeyBackgroundColorName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)addLayoutSegment:(id)arg1;
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)biuKeyImageName;
- (id)boldKeyImageName;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyShadowColorName;
- (id)copyKeyImageName;
- (id)cutKeyImageName;
- (void)dealloc;
- (id)defaultKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)dictationKeyImageName;
- (id)dismissKeyImageName;
- (id)displayContentsForKey:(id)arg1;
- (double)emojiPopupDividerKeyOffset;
- (long long)enabledBlendForm;
- (id)extraPasscodePaddleTraits;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (long long)glyphSelectorForDisplayString:(id)arg1;
- (id)handwritingMoreKeyImageName;
- (id)hashStringElement;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(BOOL)arg2;
- (double)keyCornerRadius;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (BOOL)keyIsRightToLeftSensitive:(id)arg1;
- (id)leftArrowKeyImageName;
- (long long)lightHighQualityEnabledBlendForm;
- (id)lightKeycapsFontName;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (id)lowQualityLayeredBackgroundColorName;
- (void)lowQualityTraits:(id)arg1;
- (id)messagesWriteboardKeyImageName;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (id)passcodeControlKeyTraits;
- (double)passcodeEdgeWeight;
- (id)passcodeKeyEdgeColorName;
- (id)passcodeShiftedControlKeyTraits;
- (id)pasteKeyImageName;
- (id)rightArrowKeyImageName;
- (void)scaleTraits:(id)arg1;
- (void)setupLayoutSegments;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)skinnyKeyThreshold;
- (BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (void)suppressLayoutSegments;
- (id)thinKeycapsFontName;
- (id)thinTextFontName;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(BOOL)arg4;
- (double)translucentGapWidth;
- (id)undoKeyImageName;
- (BOOL)useBlueThemingForKey:(id)arg1;

@end

