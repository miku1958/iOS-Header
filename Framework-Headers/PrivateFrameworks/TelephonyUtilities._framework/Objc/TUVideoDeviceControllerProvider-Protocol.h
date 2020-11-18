//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class CALayer, NSArray, NSString, VideoAttributes;
@protocol TUVideoDeviceControllerProviderDelegate;

@protocol TUVideoDeviceControllerProvider <NSObject>

@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;

- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (VideoAttributes *)localScreenAttributesForVideoAttributes:(VideoAttributes *)arg1;
- (CALayer *)localVideoLayer:(BOOL)arg1;
- (void)pausePreview;
- (void)setLocalCameraWithUID:(NSString *)arg1;
- (void)setLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)setLocalVideoLayer:(CALayer *)arg1 front:(BOOL)arg2;
- (void)startPreview;
- (void)stopPreview;
@end

