//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationLineView.h>

@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView
{
    NSArray *_meterLayers;
}

@property (strong, nonatomic) NSArray *meterLayers; // @synthesize meterLayers=_meterLayers;

- (void).cxx_destruct;
- (struct CGPoint)_pointAtProgress:(float)arg1;
- (void)_setupShapeLayer:(id)arg1;
- (id)_shapeStrokeColor;
- (void)_updateGradient;
- (void)colorMetersWithProgress:(double)arg1;
- (void)setProgress:(double)arg1;

@end

