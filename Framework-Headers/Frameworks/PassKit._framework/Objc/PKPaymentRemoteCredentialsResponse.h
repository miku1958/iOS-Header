//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse
{
    NSArray *_credentials;
}

@property (readonly, nonatomic) NSArray *credentials; // @synthesize credentials=_credentials;

- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
