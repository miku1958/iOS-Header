//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData;

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam
{
    NSData *_credential;
}

@property (strong, nonatomic) NSData *credential; // @synthesize credential=_credential;

+ (id)paramWithCredential:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end

