//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKBadgeView.h>

@class UIImage;

@interface CMKFlashBadge : CMKBadgeView
{
    UIImage *__contentImage;
}

@property (strong, nonatomic) UIImage *_contentImage; // @synthesize _contentImage=__contentImage;

- (void).cxx_destruct;
- (void)_commonInit;
- (struct UIEdgeInsets)_imageInsets;
- (struct CGSize)_imageSize;
- (id)_maskImage;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
