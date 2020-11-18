//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/VSViewServiceRemoteViewControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, VSOptional, VSViewControllerFactory, VSViewServiceRemoteViewController;
@protocol VSViewServiceHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate>
{
    BOOL _hasRetriedOnce;
    BOOL _hasRequestedPresentation;
    id<VSViewServiceHostViewControllerDelegate> _delegate;
    NSMutableDictionary *_requestsByID;
    VSOptional *_currentRequest;
    VSViewServiceRemoteViewController *_remoteViewController;
    VSViewControllerFactory *_viewControllerFactory;
}

@property (strong, nonatomic) VSOptional *currentRequest; // @synthesize currentRequest=_currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSViewServiceHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRequestedPresentation; // @synthesize hasRequestedPresentation=_hasRequestedPresentation;
@property (nonatomic) BOOL hasRetriedOnce; // @synthesize hasRetriedOnce=_hasRetriedOnce;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSViewServiceRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (strong, nonatomic) NSMutableDictionary *requestsByID; // @synthesize requestsByID=_requestsByID;
@property (readonly) Class superclass;
@property (strong, nonatomic) VSViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerAsChildViewController;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_connectToViewServiceForRequest:(id)arg1;
- (void)_didCancelRequest:(id)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didCompleteRequest:(id)arg1;
- (void)_dismissViewServiceHostViewController;
- (void)_presentViewServiceHostViewController;
- (void)_removeRemoteViewControllerAsChildViewController;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (id)_requestForID:(id)arg1;
- (BOOL)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)dismissViewServiceRemoteViewController:(id)arg1;
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)presentViewServiceRemoteViewController:(id)arg1;
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(CDUnknownBlockType)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;

@end

