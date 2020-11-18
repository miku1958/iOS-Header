//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ControlCenterUI/CCUIContentModuleContainerViewControllerDelegate-Protocol.h>

@class CCSModulePresentationOptions, CCUIContentModuleContainerViewController, CCUIModuleInstance, MTMaterialView, NSString, UIView;
@protocol CCUIModuleAlertViewControllerDelegate;

@interface CCUIModuleAlertViewController : UIViewController <CCUIContentModuleContainerViewControllerDelegate>
{
    CCUIContentModuleContainerViewController *_moduleContainerViewController;
    CCUIModuleInstance *_moduleInstance;
    UIView *_contentView;
    MTMaterialView *_blurView;
    CCSModulePresentationOptions *_presentationOptions;
    NSString *_moduleIdentifier;
    id<CCUIModuleAlertViewControllerDelegate> _delegate;
}

@property (nonatomic) double backgroundViewWeighting; // @dynamic backgroundViewWeighting;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CCUIModuleAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *moduleAlertView; // @dynamic moduleAlertView;
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // @synthesize moduleIdentifier=_moduleIdentifier;
@property (readonly, copy, nonatomic) CCSModulePresentationOptions *presentationOptions; // @synthesize presentationOptions=_presentationOptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (BOOL)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
- (void)dismissModulePresentedContentAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
