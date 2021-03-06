//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface HKElectrocardiogramWaveformView : UIView
{
    double _lineWidth;
    UIColor *_lineColor;
    NSArray *_shapeLayers;
    struct CGRect _pathBounds;
    struct CGRect _lastPathBounds;
}

@property (nonatomic) struct CGRect lastPathBounds; // @synthesize lastPathBounds=_lastPathBounds;
@property (strong, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property (nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property (nonatomic) struct CGRect pathBounds; // @synthesize pathBounds=_pathBounds;
@property (strong, nonatomic) NSArray *shapeLayers; // @synthesize shapeLayers=_shapeLayers;

- (void).cxx_destruct;
- (id)createShapeLayerWithPath:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setPaths:(id)arg1;
- (void)tintColorDidChange;

@end

