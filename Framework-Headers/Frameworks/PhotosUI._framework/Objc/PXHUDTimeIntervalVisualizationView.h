//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXHUDAbstractVisualizationView.h>

@class NSTimer, PXHUDTimeIntervalVisualization, UILabel;

@interface PXHUDTimeIntervalVisualizationView : PXHUDAbstractVisualizationView
{
    UILabel *_titleAndTimeLabel;
    NSTimer *_timer;
}

@property (strong, nonatomic) PXHUDTimeIntervalVisualization *visualization; // @dynamic visualization;

- (void).cxx_destruct;
- (void)_cleanupTimer;
- (void)_setupTimer;
- (void)_timerTick;
- (void)_updateTimer;
- (void)_updateTitleAndTimeLabel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)visualizationDidUpdate;

@end
