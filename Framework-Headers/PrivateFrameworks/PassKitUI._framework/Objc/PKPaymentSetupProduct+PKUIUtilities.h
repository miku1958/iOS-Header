//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupProduct.h>

@interface PKPaymentSetupProduct (PKUIUtilities)
- (void)_commonCachedImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(CDUnknownBlockType)arg1;
- (id)logoCachedImage:(CDUnknownBlockType)arg1;
- (id)plasticCardCachedImage:(CDUnknownBlockType)arg1;
- (void)resetCache;
- (id)thumbnailCachedImageForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
@end

