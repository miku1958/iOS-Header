//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UIBarBackground *_backgroundView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarLayout *_fromLayout;
    _UINavigationBarLayout *_toLayout;
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    double _backgroundAlpha;
    int _largeTitleTransitionType;
    long long _apiVersion;
    struct {
        unsigned int isRTL:1;
        unsigned int compact:1;
        unsigned int allowLargeTitles:1;
        unsigned int twoPart:1;
        unsigned int beginWithLargeTitle:1;
        unsigned int endWithLargeTitle:1;
        unsigned int observedScrollViewOffsetIsApplicable:1;
        unsigned int sharesContentViewLayouts:1;
    } _navigationBarTransitionContextFlags;
    NSMutableSet *_clippingViews;
    struct CGPoint _startingContentOffsetForObservedScrollView;
}

@property (nonatomic) BOOL allowLargeTitles;
@property (nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property (nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property (strong, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) BOOL beginWithLargeTitle;
@property (nonatomic) BOOL compact;
@property (strong, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) double contentViewFittingHeight;
@property (readonly, nonatomic) double contentViewMaxY;
@property (nonatomic) BOOL endWithLargeTitle;
@property (strong, nonatomic) _UINavigationBarLayout *fromLayout; // @synthesize fromLayout=_fromLayout;
@property (nonatomic, setter=setRTL:) BOOL isRTL;
@property (strong, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property (nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (nonatomic) BOOL observedScrollViewOffsetIsApplicable;
@property (strong, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property (nonatomic) BOOL sharesContentViewLayouts;
@property (strong, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property (nonatomic) struct CGPoint startingContentOffsetForObservedScrollView; // @synthesize startingContentOffsetForObservedScrollView=_startingContentOffsetForObservedScrollView;
@property (strong, nonatomic) _UINavigationBarLayout *toLayout; // @synthesize toLayout=_toLayout;
@property (readonly, nonatomic) int transition; // @dynamic transition;
@property (nonatomic) BOOL twoPart;
@property (readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
@property (readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property (readonly, nonatomic) UIView *viewUsingEaseOutCurve;

+ (id)contextForTransition:(int)arg1;
- (void).cxx_destruct;
- (void)_addClippingView:(id)arg1;
- (void)_animateAsTwoPartsWithOverlap:(double)arg1 partOne:(CDUnknownBlockType)arg2 partTwo:(CDUnknownBlockType)arg3;
- (void)_animateAsTwoPartsWithOverlapIfNecessaryPartOne:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_animateAsTwoPartsWithoutOverlap:(CDUnknownBlockType)arg1 partTwo:(CDUnknownBlockType)arg2;
- (void)_animateBackgroundView;
- (void)_animateFromBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_prepareToBottomPaletteAtEdge:(unsigned long long)arg1;
- (void)_removeAllClippingViews;
- (void)_resetContentAndLargeTitleViewCompleted:(BOOL)arg1;
- (void)_updateIncomingLayoutWidthToMatchOutgoingLayout;
- (void)animate;
- (void)cancel;
- (void)complete;
- (id)description;
- (void)prepare;
- (void)recordUpdates:(CDUnknownBlockType)arg1;
- (void)setAllLargeTitleLayoutsVisible;

@end

