//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <PDFKit/PDFKitPlatformThumbnailItem-Protocol.h>

@class UIImageView, UILabel;

@interface PDFThumbnailItem_ios : UICollectionReusableView <PDFKitPlatformThumbnailItem>
{
    UIImageView *_imageView;
    UILabel *_textField;
    BOOL _horizontalModeStyle;
}

@property (nonatomic) BOOL horizontalModeStyle;
@property (strong) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (strong) UILabel *textField; // @synthesize textField=_textField;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
