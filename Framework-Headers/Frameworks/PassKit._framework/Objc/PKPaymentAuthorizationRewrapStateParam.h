//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKWrappedPayment;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam
{
    PKWrappedPayment *_wrappedPayment;
    NSData *_nonceData;
    NSData *_credential;
    long long _cryptogramType;
}

@property (strong, nonatomic) NSData *credential; // @synthesize credential=_credential;
@property (nonatomic) long long cryptogramType; // @synthesize cryptogramType=_cryptogramType;
@property (strong, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property (strong, nonatomic) PKWrappedPayment *wrappedPayment; // @synthesize wrappedPayment=_wrappedPayment;

+ (id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2 credential:(id)arg3 cryptogramType:(long long)arg4;
- (void).cxx_destruct;
- (id)description;

@end
