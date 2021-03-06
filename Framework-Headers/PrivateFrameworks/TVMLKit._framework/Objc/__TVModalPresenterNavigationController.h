//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVMLKit/_TVApplicationInspectorDocumentProvider-Protocol.h>
#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>

@class NSArray, NSMapTable, NSString, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVApplicationInspectorDocumentProvider>
{
    UIViewController *_rootViewController;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    BOOL _isModalNavVisisble;
    NSArray *_previousViewControllers;
    CDUnknownBlockType _dismissalBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (strong, nonatomic) NSArray *previousViewControllers; // @synthesize previousViewControllers=_previousViewControllers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissForLastViewController;
- (void)_dismissForLastViewController:(BOOL)arg1;
- (void)_ensureNavigationBarHiddenSafelyForViewSize:(struct CGSize)arg1;
- (id)activeDocument;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)popViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reset;
- (BOOL)shouldAutorotate;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

