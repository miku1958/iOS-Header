//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PhotosUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, PUAbstractNavigationBanner, UIViewController, _UINavigationControllerPalette;

@interface PUNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    BOOL _pu_preventsAutorotation;
    CDUnknownBlockType _ppt_onDidShowViewControllerBlock;
    PUAbstractNavigationBanner *__banner;
    _UINavigationControllerPalette *__palette;
    unsigned long long _pu_supportedInterfaceOrientations;
    long long __barStyle;
    UIViewController *__currentToolbarViewController;
}

@property (strong, nonatomic, setter=_setBanner:) PUAbstractNavigationBanner *_banner; // @synthesize _banner=__banner;
@property (nonatomic, setter=_setBarStyle:) long long _barStyle; // @synthesize _barStyle=__barStyle;
@property (weak, nonatomic, setter=_setCurrentToolbarViewController:) UIViewController *_currentToolbarViewController; // @synthesize _currentToolbarViewController=__currentToolbarViewController;
@property (strong, nonatomic, setter=_setPalette:) _UINavigationControllerPalette *_palette; // @synthesize _palette=__palette;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, setter=ppt_setOnDidShowViewControllerBlock:) CDUnknownBlockType ppt_onDidShowViewControllerBlock; // @synthesize ppt_onDidShowViewControllerBlock=_ppt_onDidShowViewControllerBlock;
@property (nonatomic) BOOL pu_preventsAutorotation; // @synthesize pu_preventsAutorotation=_pu_preventsAutorotation;
@property (nonatomic) unsigned long long pu_supportedInterfaceOrientations; // @synthesize pu_supportedInterfaceOrientations=_pu_supportedInterfaceOrientations;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (void)_commonPUNavigationControllerInitialization;
- (id)_extendedToolbar;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (void)_setCurrentToolbarViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateBarStyle;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)pu_navigationTransitionDidEnd:(id)arg1;
- (void)pu_setPreventsAutorotation:(BOOL)arg1;
- (void)pu_setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewController:(id)arg1 willSetupInitialBarsVisibilityOnViewWillAppearAnimated:(BOOL)arg2;

@end

