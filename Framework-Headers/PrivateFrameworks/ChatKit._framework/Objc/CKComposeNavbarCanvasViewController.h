//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKNavigationBarCanvasViewDelegate-Protocol.h>

@class CKNavigationBarCanvasView, NSString, UIButton, UILabel;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate>
{
    id<CKNavbarCanvasViewControllerDelegate> _delegate;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    CKNavigationBarCanvasView *_canvasView;
}

@property (strong, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (strong, nonatomic) CKNavigationBarCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKNavbarCanvasViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_initializeForTraitCollection:(id)arg1;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (void)_setupDefaultCanvasView;
- (BOOL)_shouldUseRTL;
- (id)_windowTraitCollection;
- (void)loadView;
- (BOOL)shouldShowAvatarView;
- (struct NSDirectionalEdgeInsets)systemMinimumLayoutMarginsForView:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;

@end

