//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraControl.h>

#import <HomeKit/_HMCameraStreamControlDelegate-Protocol.h>

@class HMCameraStream, NSObject, NSString, _HMCameraStreamControl;
@protocol HMCameraStreamControlDelegate, OS_dispatch_queue;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate>
{
    id<HMCameraStreamControlDelegate> _delegate;
    _HMCameraStreamControl *_streamControl;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMCameraStreamControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) _HMCameraStreamControl *streamControl; // @synthesize streamControl=_streamControl;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cameraStreamControl:(id)arg1 didStopStream:(id)arg2;
- (void)cameraStreamControlDidStartStream:(id)arg1;
- (id)initWithStreamControl:(id)arg1;
- (void)startStream;
- (void)startStreamWithPreferences:(id)arg1;
- (void)stopStream;

@end

