//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSURLSessionDataTask, UIActivityIndicatorView, UIImageView, WFGiphyObject;

__attribute__((visibility("hidden")))
@interface WFGiphyCell : UICollectionViewCell
{
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_imageView;
    UIImageView *_selectedImageView;
    NSURLSessionDataTask *_dataTask;
    WFGiphyObject *_object;
}

@property (weak, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property (weak, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (weak, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property (weak, nonatomic) WFGiphyObject *object; // @synthesize object=_object;
@property (weak, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;

@end
