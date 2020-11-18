//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLCropOverlay;

@protocol PLCropOverlayDelegate <NSObject>

@optional
- (void)cropOverlayPause:(PLCropOverlay *)arg1;
- (void)cropOverlayPlay:(PLCropOverlay *)arg1;
- (void)cropOverlayWasCancelled:(PLCropOverlay *)arg1;
- (void)cropOverlayWasOKed:(PLCropOverlay *)arg1;
- (void)cropOverlayWasToggled:(PLCropOverlay *)arg1;
- (void)motionToggledManually:(BOOL)arg1;
- (void)setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)setImageAsHomeScreenClicked:(id)arg1;
- (void)setImageAsLockScreenClicked:(id)arg1;
@end

