//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
{
}

- (id)createKeyWithRequest:(id)arg1 error:(id *)arg2;
- (BOOL)deleteKeyWithIdentifier:(id)arg1;
- (id)keyWithIdentifier:(id)arg1;
- (id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2;

@end

