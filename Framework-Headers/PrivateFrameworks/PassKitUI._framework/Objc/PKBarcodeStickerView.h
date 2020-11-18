//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableArray, PKBarcode, UIImage, UIImageView, UILabel;

@interface PKBarcodeStickerView : UIButton
{
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    BOOL _barcodeViewInvalidated;
    BOOL _drawBarcode;
    BOOL _shouldMatteCode;
    long long _validity;
    struct CGSize _desiredBarcodeSize;
}

@property (nonatomic) struct CGSize desiredBarcodeSize; // @synthesize desiredBarcodeSize=_desiredBarcodeSize;
@property (nonatomic) BOOL shouldMatteCode; // @synthesize shouldMatteCode=_shouldMatteCode;
@property (nonatomic) long long validity; // @synthesize validity=_validity;

+ (struct PKBarcodeQuietZone)_quietZoneForBarcode:(id)arg1;
+ (struct CGSize)_sizeForBarcode:(id)arg1;
+ (long long)validityStateForPass:(id)arg1;
- (void).cxx_destruct;
- (void)_generateMatteRect:(struct CGRect *)arg1 barcodeRect:(struct CGRect *)arg2 altTextRect:(struct CGRect *)arg3 boundingSize:(struct CGSize)arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize)arg2;
- (void)_updateDrawBarcode;
- (void)_updateMatteViewHiding;
- (void)_updateValidity;
- (struct CGSize)_varianceForBarcode:(id)arg1;
- (id)barcodeImage;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
