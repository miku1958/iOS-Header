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

@property (strong) NSArray *contents; // @synthesize contents=_contents;
@property (strong) TLKContentsContainerView *contentsContainer; // @synthesize contentsContainer=_contentsContainer;
@property (strong) TLKImage *image; // @synthesize image=_image;
@property (strong) TLKImageView *imageView; // @synthesize imageView=_imageView;

- (void).cxx_destruct;
- (id)detailLabelStrings;
- (BOOL)imageViewIsHidden;
- (id)init;
- (id)observableProperties;
- (void)observedPropertiesChanged;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)titleLabelStrings;

@end
