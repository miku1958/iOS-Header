//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate-Protocol.h>

@class NSString, SKUINavigationDocumentController, SKUISplitViewTemplateElement, UISplitViewController, UIViewController;

@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController>
{
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController; // @synthesize leftNavigationDocumentController=_leftNavigationDocumentController;
@property (strong, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController; // @synthesize rightNavigationDocumentController=_rightNavigationDocumentController;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (id)_defaultBackgroundColor;
- (BOOL)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (void)_skui_endDelayingPresentation;
- (void)dealloc;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)loadView;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;

@end

