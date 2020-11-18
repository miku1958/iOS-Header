//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MediaSocial/SKUIArtworkRequestDelegate-Protocol.h>

@class NSString, SKUIArtworkRequest, UIImage, UIImageView, UILabel;

@interface MSCLLockupView : UIView <SKUIArtworkRequestDelegate>
{
    SKUIArtworkRequest *_artworkRequest;
    UIImageView *_imageView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)adoptArtworkRequest:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

