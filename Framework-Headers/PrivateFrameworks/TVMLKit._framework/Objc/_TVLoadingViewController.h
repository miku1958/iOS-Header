//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKImageElement, IKViewElement;

__attribute__((visibility("hidden")))
@interface _TVLoadingViewController : _TVBgImageLoadingViewController
{
    IKImageElement *_bgImageElement;
    IKImageElement *_heroImgElement;
    IKViewElement *_loadingTemplateElement;
    double _spinnerDelay;
}

- (void).cxx_destruct;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (BOOL)_backgroundImageRequiresBlur;
- (long long)_blurEffectStyle;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (id)init;
- (void)loadView;
- (void)setSpinnerDelay:(double)arg1;
- (void)updateWithLoadingTemplate:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

