//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class NSString, UIDictationView, UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>
{
    UIKBRenderConfig *_renderConfig;
    UIDictationView *_dictationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (readonly) Class superclass;

- (struct CGRect)_backgroundFillFrame;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)backgroundColorForCurrentRenderConfig;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)startColorTransitionIn;
- (void)startColorTransitionOut;

@end
