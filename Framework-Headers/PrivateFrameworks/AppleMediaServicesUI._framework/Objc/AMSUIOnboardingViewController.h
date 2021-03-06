//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/UIScrollViewDelegate-Protocol.h>

@class NSObject, NSString, OBPrivacyLinkController, OBWelcomeController, UIImage, UITraitCollection;
@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>
{
    BOOL _viewHasAppeared;
    UIImage *_rightImage;
    OBPrivacyLinkController *_privacyLinkController;
    CDUnknownBlockType _primaryButtonCallback;
    OBWelcomeController *_welcomeController;
    UIImage *_image;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_primaryButtonText;
    NSObject<OS_dispatch_queue> *_metricsQueue;
}

@property (readonly, nonatomic) UITraitCollection *cappedTraitCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *headerImage;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) BOOL isPresentedInFormSheet;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property (copy, nonatomic) CDUnknownBlockType primaryButtonCallback; // @synthesize primaryButtonCallback=_primaryButtonCallback;
@property (strong, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
@property (strong, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property (strong, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (nonatomic) BOOL viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property (strong, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;

+ (id)privacyLinkIdentifiersFromController:(id)arg1;
- (void).cxx_destruct;
- (id)childTraitCollectionForViewController:(id)arg1;
- (void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2;
- (void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2;
- (void)didTapPrimaryButton:(id)arg1;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4;
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;
- (struct CGSize)preferredContentSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateOverrideTraits;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

