//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSMutableArray, UILabel;

@interface AVTHUDView : UIView
{
    UILabel *_totalLatencyLabel;
    UILabel *_arKitLatencyLabel;
    UILabel *_updateSyncLatencyLabel;
    UILabel *_metalLatencyLabel;
    UILabel *_fpsLabel;
    UILabel *_audioTimeLabel;
    UILabel *_timeBetweenARFrameLabel;
    UILabel *_droppedFrameLabel;
    UILabel *_shaderCompilationLabel;
    CDStruct_53ba08a1 _lastFrameData;
    CALayer *_arKitLatencyBar;
    CALayer *_updateLatencyBar;
    CALayer *_metalLatencyBar;
    NSMutableArray *_totalLatencyGraphLayers;
    int _selectedGraphIndex;
}

- (void).cxx_destruct;
- (id)_label;
- (void)_loadSubviews;
- (void)_tapAction:(id)arg1;
- (void)_updateLatencyBar:(CDStruct_53ba08a1 *)arg1;
- (void)_updateLatencyGraph:(CDStruct_53ba08a1 *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithData:(CDStruct_53ba08a1)arg1;

@end

