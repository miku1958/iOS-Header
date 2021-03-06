//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class NSString, OBPrivacyLinkController, PKExplanationView, UIActivityIndicatorView, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate>
{
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
    BOOL _showCancelButton;
    BOOL _showDoneButton;
    id<PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
    long long _context;
    PKExplanationView *_explanationView;
    OBPrivacyLinkController *_privacyLinkController;
}

@property (readonly, nonatomic) long long context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKExplanationView *explanationView; // @synthesize explanationView=_explanationView;
@property (weak, nonatomic) id<PKExplanationViewControllerDelegate> explanationViewControllerDelegate; // @synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property (nonatomic) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property (nonatomic) BOOL showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_dismissViewController;
- (void)_donePressed;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (id)contentScrollView;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (void)showNavigationBarSpinner:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

