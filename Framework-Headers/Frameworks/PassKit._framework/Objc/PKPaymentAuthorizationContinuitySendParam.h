//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class PKRemotePaymentRequest;

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam
{
    PKRemotePaymentRequest *_remotePaymentRequest;
}

@property (strong, nonatomic) PKRemotePaymentRequest *remotePaymentRequest; // @synthesize remotePaymentRequest=_remotePaymentRequest;

+ (id)paramWithRemotePaymentRequest:(id)arg1;
- (void).cxx_destruct;

@end
