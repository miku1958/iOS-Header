//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad
{
    CLKDevice *_clkDevice;
    NTKCharacterRenderer *_renderer;
}

@property (strong, nonatomic) NTKCharacterRenderer *renderer; // @synthesize renderer=_renderer;

- (void).cxx_destruct;
- (id)clkDevice;
- (void)dealloc;
- (id)initWithCLKDevice:(id)arg1;
- (BOOL)prepareForTime:(double)arg1;
- (void)purge;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (void)setupForQuadView:(id)arg1;

@end

