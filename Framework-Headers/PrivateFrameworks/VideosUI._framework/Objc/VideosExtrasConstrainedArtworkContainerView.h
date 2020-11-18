//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUArtworkView, NSArray, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasConstrainedArtworkContainerView : UIView
{
    BOOL _shouldAutoresizeMaskLayerToFillBounds;
    BOOL _shouldBottomAlignArtwork;
    MPUArtworkView *_artworkView;
    UIImage *_overlayImage;
    double _overlayScale;
    UIImageView *_overlayView;
    NSArray *_overlaySizeConstraints;
}

@property (strong, nonatomic) MPUArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property (strong, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property (nonatomic) double overlayScale; // @synthesize overlayScale=_overlayScale;
@property (strong, nonatomic) NSArray *overlaySizeConstraints; // @synthesize overlaySizeConstraints=_overlaySizeConstraints;
@property (strong, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property (nonatomic) BOOL shouldAutoresizeMaskLayerToFillBounds; // @synthesize shouldAutoresizeMaskLayerToFillBounds=_shouldAutoresizeMaskLayerToFillBounds;
@property (nonatomic) BOOL shouldBottomAlignArtwork; // @synthesize shouldBottomAlignArtwork=_shouldBottomAlignArtwork;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
