//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, UINavigationController, UIView, UIViewController, _UINavigationControllerPalette;
@protocol SKUIStatusOverlayProvider;

@interface SKUINavigationControllerAssistant : NSObject
{
    BOOL _hidesShadow;
    UINavigationController *_navigationController;
    SKUIClientContext *_clientContext;
    id<SKUIStatusOverlayProvider> _statusOverlayProvider;
    UIView *_childPaletteView;
    _UINavigationControllerPalette *_paletteBackgroundView;
    UIViewController *_statusOverlayViewController;
}

@property (strong, nonatomic) UIView *childPaletteView; // @synthesize childPaletteView=_childPaletteView;
@property (readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (nonatomic) BOOL hidesShadow; // @synthesize hidesShadow=_hidesShadow;
@property (weak, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) _UINavigationControllerPalette *paletteBackgroundView; // @synthesize paletteBackgroundView=_paletteBackgroundView;
@property (strong, nonatomic) id<SKUIStatusOverlayProvider> statusOverlayProvider; // @synthesize statusOverlayProvider=_statusOverlayProvider;
@property (strong, nonatomic) UIViewController *statusOverlayViewController; // @synthesize statusOverlayViewController=_statusOverlayViewController;

+ (id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2;
+ (id)existingAssistantForNavigationController:(id)arg1;
- (void).cxx_destruct;
- (void)_hideChildPaletteView:(id)arg1 animated:(BOOL)arg2;
- (void)_hideOverlayView:(id)arg1 animated:(BOOL)arg2;
- (id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2;
- (void)_previewDocumentChangeNotification:(id)arg1;
- (void)_setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2;
- (void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(BOOL)arg3;
- (void)_transitionToPaletteView:(id)arg1 animated:(BOOL)arg2 operation:(long long)arg3;
- (void)dealloc;
- (void)setPalettePinningBarHidden:(BOOL)arg1;
- (void)setPaletteView:(id)arg1 animated:(BOOL)arg2;
- (void)setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

@end
