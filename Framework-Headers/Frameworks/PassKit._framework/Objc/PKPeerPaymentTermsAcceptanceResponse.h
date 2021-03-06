//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentTermsAcceptanceResponse : PKPeerPaymentWebServiceResponse
{
    NSString *_termsIdentifier;
    NSURL *_termsURL;
}

@property (readonly, copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property (readonly, copy, nonatomic) NSURL *termsURL; // @synthesize termsURL=_termsURL;

- (void).cxx_destruct;
- (BOOL)hasTermsData;
- (id)initWithData:(id)arg1;

@end

