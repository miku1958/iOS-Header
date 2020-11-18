//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, PKPaymentRequest;

@interface PKPaymentAuthorizationRequest : NSObject
{
    NSData *_credential;
    NSData *_nonceData;
    PKPaymentRequest *_paymentRequest;
}

@property (strong, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property (strong, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;

- (void).cxx_destruct;
- (id)initWithPaymentRequest:(id)arg1;

@end

