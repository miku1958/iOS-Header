//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SUReflectionView, UIImageView;

@interface SUReflectionImageView : UIView
{
    double _reflectionHeight;
    double _spacing;
    double _reflectionAlpha;
    BOOL _useImageSize;
    unsigned int _nonSquareImage:1;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}

@property (nonatomic) BOOL nonSquareImage;
@property (nonatomic) double reflectionSpacing; // @synthesize reflectionSpacing=_spacing;

- (void)dealloc;
- (id)init;
- (id)initWithReflectionHeight:(double)arg1 spacing:(double)arg2;
- (void)setImage:(id)arg1;
- (void)setReflectionAlphaWhenVisible:(double)arg1;
- (void)setReflectionVisible:(BOOL)arg1;
- (void)setUseImageSize:(BOOL)arg1;

@end

