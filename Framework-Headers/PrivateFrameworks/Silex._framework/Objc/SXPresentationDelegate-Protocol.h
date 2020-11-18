//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXComponentAnimationController, SXComponentBehaviorController, SXComponentController, SXComponentView, SXFullscreenCanvasController, SXFullscreenCanvasViewController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXTangierController, SXViewport, UIView, UIViewController;
@protocol SXAdDocumentStateManager, SXTextSelectionManager, SXVideoPlayerViewControllerProvider;

@protocol SXPresentationDelegate <NSObject>

@property (readonly, nonatomic) id<SXAdDocumentStateManager> adDocumentStateManager;
@property (readonly, nonatomic) SXComponentAnimationController *animationController;
@property (readonly, nonatomic) SXComponentBehaviorController *behaviorController;
@property (readonly, nonatomic) SXComponentController *componentController;
@property (readonly, nonatomic) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager;
@property (readonly, nonatomic) SXMediaPlaybackController *mediaPlaybackController;
@property (readonly, nonatomic) SXPresentationAttributes *presentationAttributes;
@property (readonly, nonatomic) SXTangierController *tangierController;
@property (readonly, nonatomic) id<SXTextSelectionManager> textSelectionManager;
@property (readonly, nonatomic) id<SXVideoPlayerViewControllerProvider> videoPlayerViewControllerProvider;
@property (readonly, nonatomic) SXViewport *viewport;

- (BOOL)addInteractivityFocusForComponent:(SXComponentView *)arg1;
- (BOOL)allowInteractivityFocusForComponent:(SXComponentView *)arg1;
- (void)dismissFullscreenCanvasForComponent:(SXComponentView *)arg1;
- (BOOL)isScrolling;
- (void)maintainPositionOfViewWhileScrolling:(UIView *)arg1;
- (UIViewController *)presentingContentViewController;
- (void)releasePositionOfView:(UIView *)arg1;
- (void)removeInteractivityFocusForComponent:(SXComponentView *)arg1;
- (UIView *)requestFullScreenCanvasForComponent:(SXComponentView *)arg1 canvasController:(SXFullscreenCanvasController *)arg2;
- (SXFullscreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1;
- (SXFullscreenCanvasViewController *)requestFullScreenCanvasViewControllerForComponent:(SXComponentView *)arg1 withCompletionBlock:(void (^)(void))arg2;
- (void)scrollToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)updateBehaviorForComponentView:(SXComponentView *)arg1;
@end

