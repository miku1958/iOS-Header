//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsUpdateResponse : PKPaymentWebServiceResponse
{
    NSArray *_credentials;
}

@property (readonly, copy, nonatomic) NSArray *credentials; // @synthesize credentials=_credentials;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

