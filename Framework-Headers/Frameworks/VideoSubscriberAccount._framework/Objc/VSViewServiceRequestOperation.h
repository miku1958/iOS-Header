//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

#import <VideoSubscriberAccount/VSViewServiceHostViewControllerDelegate-Protocol.h>

@class NSString, NSUUID, VSFailable, VSViewServiceHostViewController, VSViewServiceRequest;
@protocol VSViewServiceRequestOperationDelegate;

@interface VSViewServiceRequestOperation : VSAsyncOperation <VSViewServiceHostViewControllerDelegate>
{
    BOOL _isPresentingViewController;
    VSViewServiceRequest *_viewServiceRequest;
    id<VSViewServiceRequestOperationDelegate> _delegate;
    VSFailable *_result;
    VSViewServiceHostViewController *_viewServiceHostViewController;
    NSUUID *_requestID;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSViewServiceRequestOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property (strong, nonatomic) VSFailable *result; // @synthesize result=_result;
@property (readonly) Class superclass;
@property (strong, nonatomic) VSViewServiceHostViewController *viewServiceHostViewController; // @synthesize viewServiceHostViewController=_viewServiceHostViewController;
@property (readonly, copy, nonatomic) VSViewServiceRequest *viewServiceRequest; // @synthesize viewServiceRequest=_viewServiceRequest;

- (void).cxx_destruct;
- (void)_dismissViewController;
- (void)_dismissViewControllerIfRequired;
- (void)_presentViewController;
- (void)cancel;
- (void)dismissViewServiceHostViewController:(id)arg1;
- (void)executionDidBegin;
- (id)init;
- (id)initWithViewServiceRequest:(id)arg1;
- (void)presentViewServiceHostViewController:(id)arg1;
- (void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;

@end

