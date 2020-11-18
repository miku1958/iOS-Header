//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAdaptivePresentedControllerProtocol-Protocol.h>
#import <ChatKit/UITableViewDataSource-Protocol.h>
#import <ChatKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView, UIVisualEffectView;
@protocol CKStickerDetailViewControllerDelegate;

@interface CKStickerDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CKAdaptivePresentedControllerProtocol>
{
    BOOL _wantsWindowedPresentation;
    BOOL _preserveModalPresentationStyle;
    id<CKStickerDetailViewControllerDelegate> _delegate;
    NSArray *_chatItems;
    UITableView *_tableView;
    UIVisualEffectView *_visualEffectView;
}

@property (strong, nonatomic) NSArray *chatItems; // @synthesize chatItems=_chatItems;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKStickerDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL preserveModalPresentationStyle; // @synthesize preserveModalPresentationStyle=_preserveModalPresentationStyle;
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property (strong, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property (nonatomic) BOOL wantsWindowedPresentation; // @synthesize wantsWindowedPresentation=_wantsWindowedPresentation;

- (void).cxx_destruct;
- (id)_deleteSwipeActionForIndexPath:(id)arg1;
- (void)_viewButtonTapped:(id)arg1;
- (BOOL)constrainToPresentingVCBounds;
- (void)deleteStickerAtIndexPath:(id)arg1;
- (id)initWithStickerChatItems:(id)arg1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;

@end
