//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, _AVSimplePlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlayerLayerView : UIView
{
    _AVSimplePlayerLayerView *_simplePlayerLayerView;
}

@property (readonly, nonatomic) AVPlayerLayer *playerLayer;

- (void).cxx_destruct;
- (void)attachPlayerLayer;
- (void)detachPlayerLayer;

@end

