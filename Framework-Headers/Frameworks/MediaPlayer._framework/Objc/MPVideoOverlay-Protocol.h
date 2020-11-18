//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MPAVController, MPAVItem, UINavigationBar;
@protocol MPVideoControllerProtocol, MPVideoOverlayDelegate;

@protocol MPVideoOverlay

@property (nonatomic) BOOL allowsWirelessPlayback;
@property (weak, nonatomic) id<MPVideoOverlayDelegate> delegate;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) unsigned long long disabledParts;
@property (strong, nonatomic) MPAVItem *item;
@property (readonly, strong, nonatomic) UINavigationBar *navigationBar;
@property (nonatomic) BOOL navigationBarHidden;
@property (strong, nonatomic) MPAVController *player;
@property (weak, nonatomic) id<MPVideoControllerProtocol> videoViewController;
@property (nonatomic) unsigned long long visibleParts;

- (void)hideAlternateTracks;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (BOOL)updateTimeBasedValues;
@end

