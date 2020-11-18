//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKResizingLayer.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface _MKCalloutLayer : _MKResizingLayer
{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    long long _arrowPosition;
    double _arrowOffset;
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

@property (nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property (nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property (strong, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property (strong, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;

- (void).cxx_destruct;
- (struct CGSize)_contentSize;
- (struct CGImage *)_newContentImage;
- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;

@end

