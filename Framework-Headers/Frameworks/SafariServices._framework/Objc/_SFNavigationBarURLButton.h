//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIGestureRecognizer, UIImage, UIImageView;
@protocol _SFNavigationBarURLButtonDelegate;

__attribute__((visibility("hidden")))
@interface _SFNavigationBarURLButton : UIButton <UIGestureRecognizerDelegate>
{
    UIImageView *_overlayImageView;
    UIImageView *_tintImageView;
    UIImage *_darkBackgroundImage;
    UIImage *_lightBackgroundImage;
    UIGestureRecognizer *_longPressGestureRecognizer;
    BOOL _usesLightOverlayAndTintAlpha;
    double _backgroundAlphaFactor;
    long long _backgroundStyle;
    id<_SFNavigationBarURLButtonDelegate> _delegate;
}

@property (nonatomic) double backgroundAlphaFactor; // @synthesize backgroundAlphaFactor=_backgroundAlphaFactor;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_SFNavigationBarURLButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLightOverlayAndTintAlpha; // @synthesize usesLightOverlayAndTintAlpha=_usesLightOverlayAndTintAlpha;

- (void).cxx_destruct;
- (void)_dismissMenu:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_updateBackgroundImageAnimated:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pasteAndNavigate:(id)arg1;
- (id)pasteButtonTitle;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;

@end
