//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentAvailableProductsResponse : PKPaymentWebServiceResponse
{
    NSArray *_availableProducts;
}

@property (readonly, copy, nonatomic) NSArray *availableProducts;

- (void).cxx_destruct;
- (id)_generateProducts;
- (id)initWithData:(id)arg1;
- (BOOL)supportsSecureCoding;

@end

