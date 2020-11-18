//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, UINavigationBar, UIView, _UIBarBackground, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarItemStack, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContext : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UIBarBackground *_backgroundView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarContentViewLayout *_fromContentLayout;
    _UINavigationBarContentViewLayout *_toContentLayout;
    _UINavigationBarLargeTitleViewLayout *_fromLargeTitleLayout;
    _UINavigationBarLargeTitleViewLayout *_toLargeTitleLayout;
    int _largeTitleTransitionType;
    BOOL _isRTL;
    BOOL _allowLargeTitles;
    BOOL _twoPart;
    BOOL _beginWithLargeTitle;
    BOOL _endWithLargeTitle;
    NSMutableSet *_clippingViews;
}

@property (nonatomic) BOOL allowLargeTitles; // @synthesize allowLargeTitles=_allowLargeTitles;
@property (strong, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) BOOL beginWithLargeTitle; // @synthesize beginWithLargeTitle=_beginWithLargeTitle;
@property (strong, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) double contentViewFittingHeight;
@property (readonly, nonatomic) double contentViewMaxY;
@property (nonatomic) BOOL endWithLargeTitle; // @synthesize endWithLargeTitle=_endWithLargeTitle;
@property (strong, nonatomic) _UINavigationBarContentViewLayout *fromContentLayout; // @synthesize fromContentLayout=_fromContentLayout;
@property (strong, nonatomic) _UINavigationBarLargeTitleViewLayout *fromLargeTitleLayout; // @synthesize fromLargeTitleLayout=_fromLargeTitleLayout;
@property (nonatomic) BOOL isRTL; // @synthesize isRTL=_isRTL;
@property (strong, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property (nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (strong, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property (strong, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property (strong, nonatomic) _UINavigationBarContentViewLayout *toContentLayout; // @synthesize toContentLayout=_toContentLayout;
@property (strong, nonatomic) _UINavigationBarLargeTitleViewLayout *toLargeTitleLayout; // @synthesize toLargeTitleLayout=_toLargeTitleLayout;
@property (readonly, nonatomic) int transition; // @dynamic transition;
@property (nonatomic) BOOL twoPart; // @synthesize twoPart=_twoPart;
@property (readonly, nonatomic) UIView *viewFadingInFromCustomAlpha;
@property (readonly, nonatomic) UIView *viewUsingEaseInCurve;
@property (readonly, nonatomic) UIView *viewUsingEaseOutCurve;

+ (id)contextForTransition:(int)arg1;
- (void).cxx_destruct;
- (void)_addClippingView:(id)arg1;
- (void)_removeAllClippingViews;
- (void)animate;
- (void)cancel;
- (void)complete;
- (void)prepare;
- (void)recordUpdates:(CDUnknownBlockType)arg1;
- (void)setAllLargeTitleLayoutsVisible;

@end

