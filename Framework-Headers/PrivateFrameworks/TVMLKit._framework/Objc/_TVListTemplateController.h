//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/TVAppTemplateController-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/_TVListViewControllerDelegate-Protocol.h>

@class IKAudioElement, IKCollectionElement, IKImageElement, IKViewElement, NSString, UIView, UIViewController, _TVFocusCaptureView, _TVListViewController;

__attribute__((visibility("hidden")))
@interface _TVListTemplateController : _TVBgImageLoadingViewController <_TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable>
{
    IKViewElement *_templateElement;
    IKCollectionElement *_listElement;
    IKViewElement *_bannerElement;
    IKImageElement *_bgImageElement;
    IKAudioElement *_bgAudioElement;
    IKImageElement *_heroImageElement;
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
    UIViewController *_focusedController;
    _TVListViewController *_listViewController;
    UIViewController *_previewViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIViewController *focusedController; // @synthesize focusedController=_focusedController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _TVListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property (strong, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgElement:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (void)_configureWithListElement:(id)arg1;
- (id)_listTemplateView;
- (void)_updateView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2;
- (void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (BOOL)setNeedsFocusUpdateToList;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
