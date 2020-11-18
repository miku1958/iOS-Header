//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKUpNextBaseCellContentsLayerProvider-Protocol.h>

@class CALayer, CLKImageProvider, NSString, NTKUpNextBaseCell, UIColor, UIImage, UIImageView;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider>
{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    NTKUpNextBaseCell *_parentCell;
    UIColor *_fallbackTintColor;
    CLKImageProvider *_imageProvider;
    UIImage *_overrideImage;
    NSString *_compositingFilter;
}

@property (strong, nonatomic) NSString *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIColor *fallbackTintColor; // @synthesize fallbackTintColor=_fallbackTintColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property (strong, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasMultipartImages;
- (void)_updateColors;
- (id)contentsLayer;
- (struct CGRect)contentsLayerBoundsForLayout:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 parentCell:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setContentMode:(long long)arg1;

@end

