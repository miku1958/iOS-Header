//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CAShapeLayer, SKUIImagePlaceholder, UIImage, UITapGestureRecognizer;

@interface SKUIImageView : UIImageView
{
    UITapGestureRecognizer *_tapRecognizer;
    struct CGSize _lastLayoutSize;
    SKUIImagePlaceholder *_placeholder;
    CDUnknownBlockType _cornerPathBlock;
    struct CGSize _imageSize;
}

@property (copy, nonatomic) CDUnknownBlockType cornerPathBlock; // @synthesize cornerPathBlock=_cornerPathBlock;
@property (strong, nonatomic) UIImage *image; // @dynamic image;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (readonly, nonatomic) CAShapeLayer *layer; // @dynamic layer;
@property (strong, nonatomic) SKUIImagePlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setContents:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

