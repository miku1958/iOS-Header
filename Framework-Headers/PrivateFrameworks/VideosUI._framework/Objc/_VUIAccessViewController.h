//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSMutableArray, OBPrivacyLinkController, VUIAccessView_iOS, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface _VUIAccessViewController : UIViewController
{
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    OBPrivacyLinkController *_privacyController;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    BOOL _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    BOOL _hasOptedIn;
    BOOL _shouldDenyOnCancel;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;

+ (BOOL)_isHostedInRemoteViewService;
- (void).cxx_destruct;
- (void)_allow:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_fetchRemoteAppInfo;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleNackButton:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (id)_imageForBundleID:(id)arg1;
- (void)_init;
- (void)_presentGenericErrorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupAccessViews;
- (void)_toggleLoadingScreen;
- (id)_watchListAppIcon;
- (id)cappedTraitCollection;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 channels:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)preferredFocusEnvironments;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

