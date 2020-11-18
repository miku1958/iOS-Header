//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupProduct.h>

@class UIImage;

@interface PKPaymentSetupProduct (PKUIUtilities)

@property (copy, nonatomic) UIImage *thumbnailMask;

- (void)_commonCachedImageFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_generateThumbnailMask;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)_processDigitalCardImage:(id)arg1;
- (id)_processThumbnailImage:(id)arg1 forSize:(struct CGSize)arg2;
- (id)digitalCardCachedImage:(CDUnknownBlockType)arg1;
- (id)logoCachedImage:(CDUnknownBlockType)arg1;
- (id)plasticCardCachedImage:(CDUnknownBlockType)arg1;
- (void)resetCache;
- (id)thumbnailCachedImageForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
@end

