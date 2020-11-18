//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIVisualEffectView;
@protocol SUCodeRedeemerControllerDelegate;

@interface SUCodeRedeemerController : UIViewController
{
    BOOL _cameraflipDirection;
    id<SUCodeRedeemerControllerDelegate> _delegate;
    UIVisualEffectView *_visualEffectView;
}

@property (nonatomic) BOOL cameraflipDirection; // @synthesize cameraflipDirection=_cameraflipDirection;
@property (weak, nonatomic) id<SUCodeRedeemerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;

+ (BOOL)cameraSupported;
- (void).cxx_destruct;
- (void)_disableBlur;
- (void)_enableBlur;
- (void)_setChildViewController:(id)arg1;
- (void)_setup;
- (void)_setupCodeRedeemerController;
- (void)_setupFlipVisualEffectView;
- (void)cancel;
- (id)init;
- (void)recognitionError;
- (void)recognitionSuccess;
- (void)startSession;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

