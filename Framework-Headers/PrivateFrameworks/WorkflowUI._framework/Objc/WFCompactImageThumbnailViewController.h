//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class UIImageView;

@interface WFCompactImageThumbnailViewController : WFCompactThumbnailViewController
{
    double _aspectRatio;
    CDUnknownBlockType _imageGenerator;
    UIImageView *_imageView;
    double _lastViewWidth;
}

@property (readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property (readonly, nonatomic) CDUnknownBlockType imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property (weak, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) double lastViewWidth; // @synthesize lastViewWidth=_lastViewWidth;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (id)initWithAspectRatio:(double)arg1 imageGenerator:(CDUnknownBlockType)arg2;
- (void)loadView;
- (void)redrawImage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

