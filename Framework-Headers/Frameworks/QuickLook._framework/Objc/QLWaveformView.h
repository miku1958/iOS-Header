//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QuickLook/PHVideoScrubberFilmstripView-Protocol.h>

@class AVAsset, NSString, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface QLWaveformView : UIView <PHVideoScrubberFilmstripView>
{
    struct CGSize _waveSize;
    UIView *_lineView;
    UIImage *_waveImage;
    UIImageView *_waveView;
    AVAsset *_asset;
    UIImage *placeholderImage;
    struct CGRect visibleRect;
}

@property (copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect visibleRect; // @synthesize visibleRect;

- (void).cxx_destruct;
- (void)_expandWaveform;
- (void)_updateWithWaveformImage:(id)arg1;
- (void)layoutSubviews;
- (void)updateImage;

@end

