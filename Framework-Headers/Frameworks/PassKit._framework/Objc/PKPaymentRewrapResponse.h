//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentRewrapResponse : PKPaymentWebServiceResponse
{
    NSData *_rewrappedPaymentData;
}

@property (strong, nonatomic) NSData *rewrappedPaymentData; // @synthesize rewrappedPaymentData=_rewrappedPaymentData;

- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
