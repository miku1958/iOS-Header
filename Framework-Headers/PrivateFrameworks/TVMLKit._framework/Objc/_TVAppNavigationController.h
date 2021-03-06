//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/IKAppNavigationController-Protocol.h>
#import <TVMLKit/TVAppRootViewController-Protocol.h>
#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVMLKit/UINavigationControllerDelegate-Protocol.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider-Protocol.h>

@class IKAppTabBar, NSString, TVApplicationController, UITapGestureRecognizer, UIViewController;
@protocol IKAppNavigationController, NSObject, _TVAppNavigationControllerDelegate;

@interface _TVAppNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVApplicationInspectorDocumentProvider, UINavigationControllerDelegate, TVAppRootViewController, IKAppNavigationController>
{
    struct {
        unsigned int shouldOverrideModalBehaviorForPlaybackDocument:1;
        unsigned int shouldIgnoreDismissal:1;
        unsigned int shouldDismissShroud:1;
        unsigned int willLoadAppDocumentWithController:1;
        unsigned int willDisappear:1;
    } _ancDelegateFlags;
    TVApplicationController *_appController;
    id<_TVAppNavigationControllerDelegate> _appNavigationControllerDelegate;
    unsigned long long _maxNavControllerStackDepth;
    UITapGestureRecognizer *_menuRecognizer;
    UIViewController *_presentedModalViewController;
    id<NSObject> _modalPresenterObserverToken;
}

@property (readonly, weak, nonatomic) TVApplicationController *appController; // @synthesize appController=_appController;
@property (readonly, nonatomic) id<IKAppNavigationController> appNavigationController;
@property (weak, nonatomic) id<_TVAppNavigationControllerDelegate> appNavigationControllerDelegate; // @synthesize appNavigationControllerDelegate=_appNavigationControllerDelegate;
@property (readonly, nonatomic) IKAppTabBar *appTabBar;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maxNavControllerStackDepth; // @synthesize maxNavControllerStackDepth=_maxNavControllerStackDepth;
@property (strong, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property (strong, nonatomic) id<NSObject> modalPresenterObserverToken; // @synthesize modalPresenterObserverToken=_modalPresenterObserverToken;
@property (strong, nonatomic) UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doWillLoadAppDocumentWithController:(id)arg1;
- (void)_handleMenuAction:(id)arg1;
- (void)_presentModalDocumentController:(id)arg1 options:(id)arg2;
- (BOOL)_shouldIgnoreModalDismissal:(id)arg1;
- (BOOL)_shouldOverrideModalBehaviorForPlaybackDocument:(id)arg1 andExistingPlaybackDocument:(id)arg2;
- (id)activeDocument;
- (void)clear;
- (void)dealloc;
- (void)dismissAllModals:(CDUnknownBlockType)arg1;
- (void)dismissModal;
- (void)dismissModal:(BOOL)arg1;
- (void)dismissed;
- (id)documents;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithApplicationController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (void)loadView;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (id)popToRootDocument:(BOOL)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (void)presentModal:(id)arg1 options:(id)arg2;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setAppNavigationControllersDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocuments:(id)arg1 options:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

