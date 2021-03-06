//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCapture/AVCaptureSession.h>

@interface AVCaptureMultiCamSession : AVCaptureSession
{
    float _hardwareCost;
    float _systemPressureCost;
}

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

+ (BOOL)isMultiCamSupported;
- (BOOL)_addConnection:(id)arg1 exceptionReason:(id *)arg2;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id *)arg2;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
- (float)_computeEncoderCostForOutputs;
- (unsigned int)_computeMemoryUsageForOutputs;
- (id)_constituentDeviceFormatFromVirtualDeviceFormat:(id)arg1 virtualDevice:(id)arg2 constituentDevice:(id)arg3;
- (id)_livePortSetsByDeviceInput;
- (id)_physicalDevicePowerInfoSet;
- (void)_removeConnection:(id)arg1;
- (void)_updateCosts;
- (void)_updateHardwareCost;
- (void)_updateSystemPressureCost;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)dealloc;
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;
- (id)init;
- (BOOL)isOverCost:(id *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startRunning;

@end

