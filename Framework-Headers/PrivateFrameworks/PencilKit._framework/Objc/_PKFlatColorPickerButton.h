//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/_PKInkColorButton.h>

@class CAShapeLayer, _PKHueSpectrumView;

@interface _PKFlatColorPickerButton : _PKInkColorButton
{
    _PKHueSpectrumView *_hueSpectrumView;
    CAShapeLayer *_selectedColorLayer;
    CAShapeLayer *_strokeShapeLayer;
    struct CGRect _lastRenderedBounds;
}

@property (strong, nonatomic) _PKHueSpectrumView *hueSpectrumView; // @synthesize hueSpectrumView=_hueSpectrumView;
@property (nonatomic) struct CGRect lastRenderedBounds; // @synthesize lastRenderedBounds=_lastRenderedBounds;
@property (strong, nonatomic) CAShapeLayer *selectedColorLayer; // @synthesize selectedColorLayer=_selectedColorLayer;
@property (strong, nonatomic) CAShapeLayer *strokeShapeLayer; // @synthesize strokeShapeLayer=_strokeShapeLayer;

- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 isCompact:(BOOL)arg2;
- (void)layoutSubviews;

@end

