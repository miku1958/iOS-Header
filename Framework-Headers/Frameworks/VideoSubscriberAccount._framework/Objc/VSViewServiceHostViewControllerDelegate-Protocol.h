//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, VSViewServiceHostViewController, VSViewServiceRequest, VSViewServiceResponse;

@protocol VSViewServiceHostViewControllerDelegate <NSObject>
- (void)dismissViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
- (void)presentViewServiceHostViewController:(VSViewServiceHostViewController *)arg1;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didCancelRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 didChooseAdditionalProvidersForRequest:(VSViewServiceRequest *)arg2;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFailWithError:(NSError *)arg3;
- (void)viewServiceHostViewController:(VSViewServiceHostViewController *)arg1 request:(VSViewServiceRequest *)arg2 didFinishWithResponse:(VSViewServiceResponse *)arg3;
@end
