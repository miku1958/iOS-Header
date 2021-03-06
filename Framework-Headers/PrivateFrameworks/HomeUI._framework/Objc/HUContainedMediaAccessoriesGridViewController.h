//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridViewController.h>

#import <HomeUI/HUDetailsPresentationDelegateHost-Protocol.h>
#import <HomeUI/HUPresentationDelegate-Protocol.h>
#import <HomeUI/HUServiceGridItemManagerDelegate-Protocol.h>

@class HFMediaAccessoryItem, NSString;
@protocol HUContainedMediaAccessoriesGridViewControllerDelegate, HUPresentationDelegate;

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>
{
    BOOL _requiresPresentingViewControllerDismissal;
    BOOL _presentedModally;
    id<HUPresentationDelegate> _presentationDelegate;
    HFMediaAccessoryItem *_mediaAccessoryItem;
    id<HUContainedMediaAccessoriesGridViewControllerDelegate> _mediaAccessoryGridDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUContainedMediaAccessoriesGridViewControllerDelegate> mediaAccessoryGridDelegate; // @synthesize mediaAccessoryGridDelegate=_mediaAccessoryGridDelegate;
@property (readonly, copy, nonatomic) HFMediaAccessoryItem *mediaAccessoryItem; // @synthesize mediaAccessoryItem=_mediaAccessoryItem;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (nonatomic, getter=isPresentedModally) BOOL presentedModally; // @synthesize presentedModally=_presentedModally;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // @synthesize requiresPresentingViewControllerDismissal=_requiresPresentingViewControllerDismissal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_edit:(id)arg1;
- (void)_updateRightBarButtons;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithAccessoryContainerItem:(id)arg1;
- (id)initWithMediaAccessoryContainerItem:(id)arg1 isPresentedModally:(BOOL)arg2 valueSource:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)viewDidLoad;

@end

