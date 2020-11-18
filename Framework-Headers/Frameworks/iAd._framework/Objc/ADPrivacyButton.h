//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImage, UIImageView;

@interface ADPrivacyButton : UIControl
{
    UIImage *_iconImage;
    UIImage *_highlightedIconImage;
    UIImageView *_iconImageView;
}

@property (strong, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property (strong, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;

+ (id)highlightedIconImage;
+ (id)highlightedIconImageForVideo;
+ (id)iconImage;
+ (id)iconImageForVideo;
- (void)dealloc;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)resetIconImagesForVideo;
- (void)setHighlighted:(BOOL)arg1;
- (void)setIconImageSize:(struct CGSize)arg1;

@end

