//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface HUWaveformSlice : NSObject
{
    BOOL _hidden;
    double _opacity;
    CALayer *_waveformlayer;
    struct CGRect _layerFrame;
}

@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (nonatomic) struct CGRect layerFrame; // @synthesize layerFrame=_layerFrame;
@property (nonatomic) double opacity; // @synthesize opacity=_opacity;
@property (strong, nonatomic) CALayer *waveformlayer; // @synthesize waveformlayer=_waveformlayer;

- (void).cxx_destruct;
- (void)dealloc;

@end
