//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKView.h>

@class NSArray, TLKContentsContainerView, TLKImage, TLKImageView;

@interface TLKMediaInfoView : TLKView
{
    TLKImage *_image;
    NSArray *_contents;
    TLKImageView *_imageView;
    TLKContentsContainerView *_contentsContainer;
}

@property (strong, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property (strong, nonatomic) TLKContentsContainerView *contentsContainer; // @synthesize contentsContainer=_contentsContainer;
@property (strong, nonatomic) TLKImage *image; // @synthesize image=_image;
@property (strong, nonatomic) TLKImageView *imageView; // @synthesize imageView=_imageView;

- (void).cxx_destruct;
- (id)detailLabelStrings;
- (BOOL)imageViewIsHidden;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)titleLabelStrings;

@end
