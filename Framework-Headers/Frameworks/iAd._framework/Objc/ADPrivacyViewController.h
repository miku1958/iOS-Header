//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iAd/ADPrivacyRemoteViewControllerDelegate-Protocol.h>

@class ADPrivacyRemoteViewController, NSDictionary, NSString, _UIAsyncInvocation;
@protocol ADPrivacyViewControllerDelegate, ADPrivacyViewControllerInternalDelegate, ADSPrivacyViewController_RPC><NSObject;

@interface ADPrivacyViewController : UIViewController <ADPrivacyRemoteViewControllerDelegate>
{
    id<ADPrivacyViewControllerDelegate> _delegate;
    id<ADPrivacyViewControllerInternalDelegate> _internalDelegate;
    ADPrivacyRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_remoteRequest;
    NSString *_transparencyDetails;
    NSDictionary *_transparencyDetailsDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ADPrivacyViewControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIAsyncInvocation *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
@property (strong, nonatomic) ADPrivacyRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (readonly, nonatomic) id<ADSPrivacyViewController_RPC><NSObject> servicePrivacyViewController;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transparencyDetails; // @synthesize transparencyDetails=_transparencyDetails;
@property (strong, nonatomic) NSDictionary *transparencyDetailsDictionary; // @synthesize transparencyDetailsDictionary=_transparencyDetailsDictionary;

- (void)_addRemoteView;
- (void)_appDidChangeStatusBarFrameNotification;
- (void)_clientApplicationDidEnterBackground;
- (void)_commonInit;
- (void)_connectionWithAdSheetWasLost;
- (void)_considerRequestingRemotePrivacyViewController;
- (void)_dismissAndReset;
- (void)_dismissPrivacyViewController;
- (void)_forwardErrorToDelegate:(id)arg1;
- (void)_requestPrivacyRemoteViewController;
- (void)_resetRemoteViewController;
- (void)adPrivacyRemoteViewControllerClientRequestsDismisal;
- (void)adPrivacyRemoteViewControllerDidAppear;
- (void)adPrivacyRemoteViewControllerDidLinkOut;
- (void)adPrivacyRemoteViewControllerDidLoad;
- (void)adPrivacyRemoteViewControllerDidRenderTransparency;
- (void)adPrivacyRemoteViewControllerDidTerminateWithError:(id)arg1;
- (void)adjustRemoteViews;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)initWithTransparencyDetails:(id)arg1;
- (id)initWithTransparencyDetailsDictionary:(id)arg1;
- (id)internalDelegate;
- (void)loadView;
- (void)setInternalDelegate:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

