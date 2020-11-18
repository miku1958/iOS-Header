//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OnBoardingKit/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSArray, NSString, OBPrivacyCombinedController, OBPrivacySplashController, UIViewController;

@interface OBPrivacyPresenter : NSObject <UIAdaptivePresentationControllerDelegate>
{
    BOOL _darkMode;
    BOOL _usesFullScreenPresentation;
    BOOL _animatePresentAndDismiss;
    CDUnknownBlockType _dismissHandler;
    OBPrivacySplashController *_splashController;
    OBPrivacyCombinedController *_combinedController;
    NSString *_displayLanguage;
    UIViewController *_presentingViewController;
    long long _modalPresentationStyle;
    unsigned long long _supportedInterfaceOrientations;
    UIViewController *_presentedController;
    NSArray *_presentedIdentifiers;
    CDUnknownBlockType _presentationCompletionHandler;
}

@property (nonatomic) BOOL animatePresentAndDismiss; // @synthesize animatePresentAndDismiss=_animatePresentAndDismiss;
@property (strong) OBPrivacyCombinedController *combinedController; // @synthesize combinedController=_combinedController;
@property (nonatomic) BOOL darkMode; // @synthesize darkMode=_darkMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property (strong, nonatomic) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property (copy) CDUnknownBlockType presentationCompletionHandler; // @synthesize presentationCompletionHandler=_presentationCompletionHandler;
@property (strong) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property (strong) NSArray *presentedIdentifiers; // @synthesize presentedIdentifiers=_presentedIdentifiers;
@property (weak) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property (nonatomic) BOOL usesFullScreenPresentation; // @synthesize usesFullScreenPresentation=_usesFullScreenPresentation;

+ (id)presenterForPrivacySplashWithBundle:(id)arg1;
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;
- (void).cxx_destruct;
- (void)_presenterDidDismiss;
- (void)dismiss;
- (void)present;
- (void)presentInNavigationStack:(id)arg1;
- (void)presentInNavigationStack:(id)arg1 animated:(BOOL)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;

@end
