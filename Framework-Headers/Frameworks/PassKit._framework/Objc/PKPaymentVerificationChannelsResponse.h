//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentVerificationChannelsResponse : PKPaymentWebServiceResponse
{
    NSArray *_verificationChannels;
}

@property (strong, nonatomic) NSArray *verificationChannels; // @synthesize verificationChannels=_verificationChannels;

+ (id)responseWithData:(id)arg1 forPass:(id)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 forPass:(id)arg2;

@end
