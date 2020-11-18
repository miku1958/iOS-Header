//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, OBPrivacyCombinedController, OBPrivacySplashController, UIViewController;

@interface OBPrivacyPresenter : NSObject
{
    BOOL _darkMode;
    BOOL _usesFullScreenPresentation;
    BOOL _animatePresentAndDismiss;
    CDUnknownBlockType _dismissHandler;
    OBPrivacySplashController *_splashController;
    OBPrivacyCombinedController *_combinedController;
    UIViewController *_presentingViewController;
    long long _modalPresentationStyle;
    unsigned long long _supportedInterfaceOrientations;
    struct UIViewController *_presentedController;
    NSArray *_presentedIdentifiers;
    CDUnknownBlockType _presentationCompletionHandler;
}

@property (nonatomic) BOOL animatePresentAndDismiss; // @synthesize animatePresentAndDismiss=_animatePresentAndDismiss;
@property (strong) OBPrivacyCombinedController *combinedController; // @synthesize combinedController=_combinedController;
@property (nonatomic) BOOL darkMode; // @synthesize darkMode=_darkMode;
@property (copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property (nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property (copy) CDUnknownBlockType presentationCompletionHandler; // @synthesize presentationCompletionHandler=_presentationCompletionHandler;
@property (strong) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property (strong) NSArray *presentedIdentifiers; // @synthesize presentedIdentifiers=_presentedIdentifiers;
@property (weak) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (strong) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
@property (nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property (nonatomic) BOOL usesFullScreenPresentation; // @synthesize usesFullScreenPresentation=_usesFullScreenPresentation;

+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;
+ (id)presenterForPrivacyUnifiedAbout;
+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;
- (void).cxx_destruct;
- (void)_presenterDidDismiss;
- (void)dismiss;
- (void)present;
- (void)presentInNavigationStack:(id)arg1;

@end

