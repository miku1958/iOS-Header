//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@class NTKRichComplicationRingView;

@interface NTKRichComplicationRingProgressView : NTKRichComplicationProgressView
{
    double _curveWidth;
    NTKRichComplicationRingView *_backgroundView;
    NTKRichComplicationRingView *_foregroundView;
    BOOL _clockwise;
}

@property (nonatomic) BOOL clockwise; // @synthesize clockwise=_clockwise;

- (void).cxx_destruct;
- (id)initWithFamily:(long long)arg1 curveWidth:(double)arg2 padding:(double)arg3 forDevice:(id)arg4;

@end

