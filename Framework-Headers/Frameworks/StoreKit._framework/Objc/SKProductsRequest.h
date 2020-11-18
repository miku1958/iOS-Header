//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@protocol SKProductsRequestDelegate;

@interface SKProductsRequest : SKRequest
{
    id _productsRequestInternal;
}

@property (weak, nonatomic) id<SKProductsRequestDelegate> delegate; // @dynamic delegate;

- (void).cxx_destruct;
- (id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2;
- (void)_start;
- (id)init;
- (id)initWithProductIdentifiers:(id)arg1;

@end
