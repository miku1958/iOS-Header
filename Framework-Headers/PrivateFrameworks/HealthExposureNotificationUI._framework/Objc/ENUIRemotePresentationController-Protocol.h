//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthExposureNotificationUI/NSObject-Protocol.h>

@class ENRemotePresentationRequest;

@protocol ENUIRemotePresentationController <NSObject>
- (void)cancelPresentation;
- (void)presentWithPresentationRequest:(ENRemotePresentationRequest *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

