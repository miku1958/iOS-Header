//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCProductLookup-Protocol.h>
#import <NewsCore/SKProductsRequestDelegate-Protocol.h>

@class NSString, SKProduct;
@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate, FCProductLookup>
{
    NSObject<OS_dispatch_group> *_productRequestGroup;
    SKProduct *_product;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKProduct *product; // @synthesize product=_product;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *productRequestGroup; // @synthesize productRequestGroup=_productRequestGroup;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)productLookupWithOfferName:(id)arg1 appAdamID:(id)arg2 storeExternalVersionID:(id)arg3;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
