//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MediaControlsExpandableButton.h>

@class MediaControlsHapticPlayer, NSSet, NSString, UIColor;

@interface MediaControlsBluetoothListeningModeButton : MediaControlsExpandableButton
{
    NSSet *_availableListeningModes;
    MediaControlsHapticPlayer *_hapticPlayer;
    UIColor *_offColor;
}

@property (strong, nonatomic) NSSet *availableListeningModes; // @synthesize availableListeningModes=_availableListeningModes;
@property (strong, nonatomic) MediaControlsHapticPlayer *hapticPlayer; // @synthesize hapticPlayer=_hapticPlayer;
@property (strong, nonatomic) UIColor *offColor; // @synthesize offColor=_offColor;
@property (strong, nonatomic) NSString *selectedListeningMode;

- (void).cxx_destruct;
- (void)_springAnimate:(CDUnknownBlockType)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initForControlCenter;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)playFailedValueChangedEventHaptic;
- (void)playFailedValueChangedEventHapticWithMessage:(id)arg1;
- (void)playRequiresBothBudsInEarErrorHaptic;
- (void)playValueChangedEventHaptic;
- (void)setSelectedListeningMode:(id)arg1 animated:(BOOL)arg2;

@end

