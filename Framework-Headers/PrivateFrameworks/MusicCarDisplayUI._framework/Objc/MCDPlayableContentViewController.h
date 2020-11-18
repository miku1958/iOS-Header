//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <MusicCarDisplayUI/UINavigationControllerDelegate-Protocol.h>

@class MCDPCContainer, MCDPCModel, NSArray, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate>
{
    MCDPCModel *_model;
    MCDPCContainer *_rootContainer;
    NSArray *_stackToRebuild;
    BOOL _hasBrowsableContent;
    BOOL _hasLoaded;
    NSString *_bundleID;
}

@property (readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_browsableContentEndpointChangedNotification:(id)arg1;
- (void)_checkAndSetupView;
- (id)_createRootViewController;
- (void)_modelDidInvalidate:(id)arg1;
- (void)_modelWillInvalidate:(id)arg1;
- (void)_populateStack;
- (void)_setupView;
- (void)_updateStackForPlaying:(BOOL)arg1;
- (id)currentStack;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 stack:(id)arg2;
- (void)refreshNavigationStackForLaunch;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

