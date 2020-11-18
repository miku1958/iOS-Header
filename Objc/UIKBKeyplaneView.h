//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBSplitImageView.h>

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSMutableDictionary, NSString, NSTimer, UIKBCacheToken, UIKBKeyView, UIKBKeyViewAnimator, UIKBRenderConfig, UIKBRenderFactory, UIKBRenderingContext, UIKBTree, UIKeyboardEmojiKeyDisplayController, UIView;

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView>
{
    UIKBTree *_keyplane;
    UIKBTree *_defaultKeyplane;
    UIKBCacheToken *_cacheToken;
    UIKBCacheToken *_defaultKeyplaneCacheToken;
    UIKBKeyViewAnimator *_keyViewAnimator;
    UIKeyboardEmojiKeyDisplayController *_emojiKeyManager;
    UIKBKeyView *_candidateGapView;
    NSMutableDictionary *_subviewIndex;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_delayedDeactivationKeys;
    NSTimer *_activatedTimer;
    BOOL _performingDeactivation;
    BOOL _shouldDrawRect;
    UIKBRenderConfig *_renderConfig;
    UIKBRenderingContext *_renderingContext;
    UIKBRenderFactory *_factory;
    UIKBSplitImageView *_keyBorders;
    UIKBSplitImageView *_keyBackgrounds;
    UIKBSplitImageView *_keyCaps;
    UIView *_keyplaneMaskView;
}

@property (readonly, nonatomic) long long cacheDeferPriority;
@property (readonly, nonatomic) BOOL cacheDeferable;
@property (readonly, nonatomic) NSString *cacheKey;
@property (strong, nonatomic) UIKBCacheToken *cacheToken; // @synthesize cacheToken=_cacheToken;
@property (readonly, nonatomic) double cachedWidth;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) UIKBTree *defaultKeyplane; // @synthesize defaultKeyplane=_defaultKeyplane;
@property (strong, nonatomic) UIKBCacheToken *defaultKeyplaneCacheToken; // @synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIKeyboardEmojiKeyDisplayController *emojiKeyManager; // @synthesize emojiKeyManager=_emojiKeyManager;
@property (strong, nonatomic) UIKBRenderFactory *factory; // @synthesize factory=_factory;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL keepNonPersistent;
@property (strong, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property (strong, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=_keyplane;
@property (readonly, nonatomic) UIView *keyplaneMaskView; // @synthesize keyplaneMaskView=_keyplaneMaskView;
@property (strong, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (strong, nonatomic) UIKBRenderingContext *renderingContext; // @synthesize renderingContext=_renderingContext;
@property (readonly) Class superclass;

- (BOOL)_canDrawContent;
- (void)_generateFactoryIfNeeded;
- (void)_generateRenderingContextIfNeeded;
- (BOOL)_shouldAllowKey:(id)arg1;
- (BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)_updateKeyplaneMaskView;
- (void)activateKeys;
- (id)activeKeyViews;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (void)cancelDelayedDeactivation;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(BOOL *)arg3;
- (unsigned long long)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2;
- (void)deactivateAdaptiveKey:(id)arg1;
- (void)deactivateKey:(id)arg1 previousState:(int)arg2;
- (void)deactivateKeys;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
- (void)hideKeyCaps:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2;
- (BOOL)isPasscodeStyle;
- (void)layoutSubviews;
- (void)performDelayedDeactivation:(id)arg1;
- (void)prepareForDisplay;
- (void)purgeActiveKeyViews;
- (void)purgeFactory;
- (void)purgeKeyViews;
- (void)purgeLayerContents;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)setContentScaleFactor:(double)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (BOOL)shouldAnimateInKeyView:(id)arg1;
- (BOOL)shouldAnimateOutKeyView:(id)arg1;
- (int)stateForKey:(id)arg1;
- (void)updateFrameForKey:(id)arg1;
- (BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (void)willMoveToWindow:(id)arg1;

@end

