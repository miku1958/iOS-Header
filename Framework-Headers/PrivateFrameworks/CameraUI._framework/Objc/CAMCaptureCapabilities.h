//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMCaptureCapabilities : NSObject
{
    BOOL _backCameraSupported;
    BOOL _frontCameraSupported;
    BOOL _backFlashSupported;
    BOOL _frontFlashSupported;
    BOOL _backTorchSupported;
    BOOL _frontTorchSupported;
    BOOL _backHDRSupported;
    BOOL _backAutomaticHDRSupported;
    BOOL _backHDROnSupported;
    BOOL _frontHDRSupported;
    BOOL _frontAutomaticHDRSupported;
    BOOL _frontHDROnSupported;
    BOOL _previewSupportedDuringHDR;
    BOOL _backIrisSupported;
    BOOL _frontIrisSupported;
    BOOL _liveFilteringSupported;
    BOOL _backBurstSupported;
    BOOL _frontBurstSupported;
    BOOL _squareModeSupported;
    BOOL _videoSupported;
    BOOL _stillDuringVideoSupported;
    BOOL _back60FPSVideoSupported;
    BOOL _front60FPSVideoSupported;
    BOOL _back4kVideoSupported;
    BOOL _front4kVideoSupported;
    BOOL _backSlomoSupported;
    BOOL _frontSlomoSupported;
    BOOL _back720p240Supported;
    BOOL _front720p240Supported;
    BOOL _back1080p120Supported;
    BOOL _front1080p120Supported;
    BOOL _backPanoramaSupported;
    BOOL _frontPanoramaSupported;
    BOOL _backTimelapseSupported;
    BOOL _frontTimelapseSupported;
    BOOL _backTorchPatternSupported;
    BOOL _frontTorchPatternSupported;
    BOOL _hasSystemTelephonyOfAnyKind;
    BOOL _internalInstall;
    BOOL _lockButtonAppropriateForShutter;
    BOOL _shutterSoundRequired;
    BOOL _lowEndHardware;
    BOOL __front720p30Supported;
    long long _maximumRecordedFileSize;
    long long _back720pMaxFPS;
    double __backVideoModeMaximumVideoZoomFactor;
    double __frontVideoModeMaximumVideoZoomFactor;
    double __backCaptureInterval;
    double __frontCaptureInterval;
}

@property (readonly, nonatomic) double _backCaptureInterval; // @synthesize _backCaptureInterval=__backCaptureInterval;
@property (readonly, nonatomic) double _backVideoModeMaximumVideoZoomFactor; // @synthesize _backVideoModeMaximumVideoZoomFactor=__backVideoModeMaximumVideoZoomFactor;
@property (readonly, nonatomic, getter=_isFront720p30Supported) BOOL _front720p30Supported; // @synthesize _front720p30Supported=__front720p30Supported;
@property (readonly, nonatomic) double _frontCaptureInterval; // @synthesize _frontCaptureInterval=__frontCaptureInterval;
@property (readonly, nonatomic) double _frontVideoModeMaximumVideoZoomFactor; // @synthesize _frontVideoModeMaximumVideoZoomFactor=__frontVideoModeMaximumVideoZoomFactor;
@property (readonly, nonatomic, getter=isBack1080p120Supported) BOOL back1080p120Supported; // @synthesize back1080p120Supported=_back1080p120Supported;
@property (readonly, nonatomic, getter=isBack4kVideoSupported) BOOL back4kVideoSupported; // @synthesize back4kVideoSupported=_back4kVideoSupported;
@property (readonly, nonatomic, getter=isBack60FPSVideoSupported) BOOL back60FPSVideoSupported; // @synthesize back60FPSVideoSupported=_back60FPSVideoSupported;
@property (readonly, nonatomic, getter=isBack720p240Supported) BOOL back720p240Supported; // @synthesize back720p240Supported=_back720p240Supported;
@property (readonly, nonatomic) long long back720pMaxFPS; // @synthesize back720pMaxFPS=_back720pMaxFPS;
@property (readonly, nonatomic, getter=isBackAutomaticHDRSupported) BOOL backAutomaticHDRSupported; // @synthesize backAutomaticHDRSupported=_backAutomaticHDRSupported;
@property (readonly, nonatomic, getter=isBackBurstSupported) BOOL backBurstSupported; // @synthesize backBurstSupported=_backBurstSupported;
@property (readonly, nonatomic, getter=isBackCameraSupported) BOOL backCameraSupported; // @synthesize backCameraSupported=_backCameraSupported;
@property (readonly, nonatomic, getter=isBackFlashSupported) BOOL backFlashSupported; // @synthesize backFlashSupported=_backFlashSupported;
@property (readonly, nonatomic, getter=isBackHDROnSupported) BOOL backHDROnSupported; // @synthesize backHDROnSupported=_backHDROnSupported;
@property (readonly, nonatomic, getter=isBackHDRSupported) BOOL backHDRSupported; // @synthesize backHDRSupported=_backHDRSupported;
@property (readonly, nonatomic, getter=isBackIrisSupported) BOOL backIrisSupported; // @synthesize backIrisSupported=_backIrisSupported;
@property (readonly, nonatomic, getter=isBackPanoramaSupported) BOOL backPanoramaSupported; // @synthesize backPanoramaSupported=_backPanoramaSupported;
@property (readonly, nonatomic, getter=isBackSlomoSupported) BOOL backSlomoSupported; // @synthesize backSlomoSupported=_backSlomoSupported;
@property (readonly, nonatomic, getter=isBackTimelapseSupported) BOOL backTimelapseSupported; // @synthesize backTimelapseSupported=_backTimelapseSupported;
@property (readonly, nonatomic, getter=isBackTorchPatternSupported) BOOL backTorchPatternSupported; // @synthesize backTorchPatternSupported=_backTorchPatternSupported;
@property (readonly, nonatomic, getter=isBackTorchSupported) BOOL backTorchSupported; // @synthesize backTorchSupported=_backTorchSupported;
@property (readonly, nonatomic, getter=isFront1080p120Supported) BOOL front1080p120Supported; // @synthesize front1080p120Supported=_front1080p120Supported;
@property (readonly, nonatomic, getter=isFront4kVideoSupported) BOOL front4kVideoSupported; // @synthesize front4kVideoSupported=_front4kVideoSupported;
@property (readonly, nonatomic, getter=isFront60FPSVideoSupported) BOOL front60FPSVideoSupported; // @synthesize front60FPSVideoSupported=_front60FPSVideoSupported;
@property (readonly, nonatomic, getter=isFront720p240Supported) BOOL front720p240Supported; // @synthesize front720p240Supported=_front720p240Supported;
@property (readonly, nonatomic, getter=isFrontAutomaticHDRSupported) BOOL frontAutomaticHDRSupported; // @synthesize frontAutomaticHDRSupported=_frontAutomaticHDRSupported;
@property (readonly, nonatomic, getter=isFrontBurstSupported) BOOL frontBurstSupported; // @synthesize frontBurstSupported=_frontBurstSupported;
@property (readonly, nonatomic, getter=isFrontCameraSupported) BOOL frontCameraSupported; // @synthesize frontCameraSupported=_frontCameraSupported;
@property (readonly, nonatomic, getter=isFrontFlashSupported) BOOL frontFlashSupported; // @synthesize frontFlashSupported=_frontFlashSupported;
@property (readonly, nonatomic, getter=isFrontHDROnSupported) BOOL frontHDROnSupported; // @synthesize frontHDROnSupported=_frontHDROnSupported;
@property (readonly, nonatomic, getter=isFrontHDRSupported) BOOL frontHDRSupported; // @synthesize frontHDRSupported=_frontHDRSupported;
@property (readonly, nonatomic, getter=isFrontIrisSupported) BOOL frontIrisSupported; // @synthesize frontIrisSupported=_frontIrisSupported;
@property (readonly, nonatomic, getter=isFrontPanoramaSupported) BOOL frontPanoramaSupported; // @synthesize frontPanoramaSupported=_frontPanoramaSupported;
@property (readonly, nonatomic, getter=isFrontSlomoSupported) BOOL frontSlomoSupported; // @synthesize frontSlomoSupported=_frontSlomoSupported;
@property (readonly, nonatomic, getter=isFrontTimelapseSupported) BOOL frontTimelapseSupported; // @synthesize frontTimelapseSupported=_frontTimelapseSupported;
@property (readonly, nonatomic, getter=isFrontTorchPatternSupported) BOOL frontTorchPatternSupported; // @synthesize frontTorchPatternSupported=_frontTorchPatternSupported;
@property (readonly, nonatomic, getter=isFrontTorchSupported) BOOL frontTorchSupported; // @synthesize frontTorchSupported=_frontTorchSupported;
@property (readonly, nonatomic) BOOL hasSystemTelephonyOfAnyKind; // @synthesize hasSystemTelephonyOfAnyKind=_hasSystemTelephonyOfAnyKind;
@property (readonly, nonatomic, getter=isInternalInstall) BOOL internalInstall; // @synthesize internalInstall=_internalInstall;
@property (readonly, nonatomic, getter=isLiveFilteringSupported) BOOL liveFilteringSupported; // @synthesize liveFilteringSupported=_liveFilteringSupported;
@property (readonly, nonatomic, getter=isLockButtonAppropriateForShutter) BOOL lockButtonAppropriateForShutter; // @synthesize lockButtonAppropriateForShutter=_lockButtonAppropriateForShutter;
@property (readonly, nonatomic, getter=isLowEndHardware) BOOL lowEndHardware; // @synthesize lowEndHardware=_lowEndHardware;
@property (readonly, nonatomic) long long maximumRecordedFileSize; // @synthesize maximumRecordedFileSize=_maximumRecordedFileSize;
@property (readonly, nonatomic, getter=isPreviewDuringHDRSupported) BOOL previewSupportedDuringHDR; // @synthesize previewSupportedDuringHDR=_previewSupportedDuringHDR;
@property (readonly, nonatomic, getter=isShutterSoundRequired) BOOL shutterSoundRequired; // @synthesize shutterSoundRequired=_shutterSoundRequired;
@property (readonly, nonatomic, getter=isSquareModeSupported) BOOL squareModeSupported; // @synthesize squareModeSupported=_squareModeSupported;
@property (readonly, nonatomic, getter=isStillDuringVideoSupported) BOOL stillDuringVideoSupported; // @synthesize stillDuringVideoSupported=_stillDuringVideoSupported;
@property (readonly, nonatomic, getter=isVideoSupported) BOOL videoSupported; // @synthesize videoSupported=_videoSupported;

+ (id)capabilities;
- (double)captureIntervalForDevice:(long long)arg1;
- (id)init;
- (BOOL)is1080p120SupportedForDevice:(long long)arg1;
- (BOOL)is4kVideoSupportedForDevice:(long long)arg1;
- (BOOL)is60FPSVideoSupportedForDevice:(long long)arg1;
- (BOOL)is720p240SupportedForDevice:(long long)arg1;
- (BOOL)isAutomaticHDRSupportedForDevice:(long long)arg1;
- (BOOL)isBurstSupportedForDevice:(long long)arg1;
- (BOOL)isCameraSupportedForDevice:(long long)arg1;
- (BOOL)isFlashSupportedForDevice:(long long)arg1;
- (BOOL)isHDROnSupportedForDevice:(long long)arg1;
- (BOOL)isHDRSupportedForDevice:(long long)arg1;
- (BOOL)isIrisSupportedForDevice:(long long)arg1;
- (BOOL)isPanoramaSupportedForDevice:(long long)arg1;
- (BOOL)isSlomoSupportedForDevice:(long long)arg1;
- (BOOL)isSupportedSlomoModeConfiguration:(long long)arg1 forDevice:(long long)arg2;
- (BOOL)isSupportedVideoModeConfiguration:(long long)arg1 forDevice:(long long)arg2;
- (BOOL)isTimelapseSupportedForDevice:(long long)arg1;
- (BOOL)isTorchPatternSupportedForDevice:(long long)arg1;
- (BOOL)isTorchSupportedForDevice:(long long)arg1;
- (double)maximumVideoZoomFactorForMode:(long long)arg1 device:(long long)arg2;

@end
