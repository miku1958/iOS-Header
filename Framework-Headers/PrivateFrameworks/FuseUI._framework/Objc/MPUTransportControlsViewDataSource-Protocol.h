//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPUTransportControlsView, UIControl;
@protocol MPUTransportButton;

@protocol MPUTransportControlsViewDataSource <NSObject>
- (UIControl<MPUTransportButton> *)transportControlsView:(MPUTransportControlsView *)arg1 buttonForControlType:(long long)arg2;
@end
