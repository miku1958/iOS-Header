//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, PKCameraCaptureInstructionView, PKPaymentCardManualEntryViewController, PKPaymentSetupBrowseProductsViewController, UIColor, UIView;
@protocol PKPaymentCameraCaptureViewControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPaymentCameraCaptureViewController : UIViewController
{
    NSArray *_outputObjects;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    PKPaymentCardManualEntryViewController *_manualEntryController;
    PKPaymentSetupBrowseProductsViewController *_browseCardsController;
    id<PKPaymentCameraCaptureViewControllerDelegate> _cameraCaptureDelegate;
    long long _context;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    UIView *_cameraView;
    BOOL _hideSetupLaterButton;
    UIColor *_maskColor;
    UIColor *_maskOutlineColor;
    UIColor *_placementTextColor;
    UIColor *_capturedTextColor;
}

@property (copy, nonatomic) UIColor *capturedTextColor; // @synthesize capturedTextColor=_capturedTextColor;
@property (nonatomic) BOOL hideSetupLaterButton; // @synthesize hideSetupLaterButton=_hideSetupLaterButton;
@property (copy, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property (copy, nonatomic) UIColor *maskOutlineColor; // @synthesize maskOutlineColor=_maskOutlineColor;
@property (copy, nonatomic) UIColor *placementTextColor; // @synthesize placementTextColor=_placementTextColor;

- (void).cxx_destruct;
- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_pushManualEntryViewController;
- (void)_setupLater:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCameraCaptureDelegate:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3;
- (void)loadView;
- (void)pk_applyAppearance:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
