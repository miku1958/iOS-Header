//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIReflectingView.h>

@class UIImage, UIImageView;

@interface MPReflectionImageView : _UIReflectingView
{
    UIImageView *_imageView;
    BOOL _squareImage;
}

@property (strong, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL squareImage; // @synthesize squareImage=_squareImage;

+ (double)defaultReflectionHeight;
- (void).cxx_destruct;
- (id)albumArtImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1 withReflectionHeight:(double)arg2;
- (void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2;

@end

