//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/AVConferencePreviewClientDelegate-Protocol.h>
#import <TelephonyUtilities/TUVideoDeviceControllerProvider-Protocol.h>

@class AVConferencePreview, NSArray, NSString, VideoAttributes;
@protocol TUVideoDeviceControllerProviderDelegate;

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider>
{
    id<TUVideoDeviceControllerProviderDelegate> _delegate;
    AVConferencePreview *_preview;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUVideoDeviceControllerProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *inputDevices;
@property (readonly, copy, nonatomic) NSString *localCameraUID;
@property (copy, nonatomic) VideoAttributes *localVideoAttributes;
@property (readonly, nonatomic) AVConferencePreview *preview; // @synthesize preview=_preview;
@property (readonly, nonatomic, getter=isPreviewRunning) BOOL previewRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)captureDevicesChanged:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (id)init;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoLayer:(BOOL)arg1;
- (void)pausePreview;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2;
- (void)startPreview;
- (void)stopPreview;

@end

