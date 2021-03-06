//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSError, NSString, NSUUID, VSViewServiceResponse;

@protocol VSViewServiceHostProtocol <NSObject>
- (void)_didCancelRequest:(NSUUID *)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(NSUUID *)arg1;
- (void)_didChooseProviderWithIdentifier:(NSString *)arg1 vetoHandler:(void (^)(BOOL))arg2;
- (void)_dismissViewController;
- (void)_presentViewController;
- (void)_request:(NSUUID *)arg1 didFailWithError:(NSError *)arg2;
- (void)_request:(NSUUID *)arg1 didFinishWithResponse:(VSViewServiceResponse *)arg2;
@end

