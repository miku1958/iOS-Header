//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface SBBiometricMonitorView : UIView
{
    UIView *_stateView;
    UIView *_presenceView;
    UIView *_poseView;
    long long _matchState;
    long long _presenceDetectState;
    long long _poseState;
}

@property (nonatomic) long long matchState; // @synthesize matchState=_matchState;
@property (nonatomic) long long poseState; // @synthesize poseState=_poseState;
@property (nonatomic) long long presenceDetectState; // @synthesize presenceDetectState=_presenceDetectState;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

