//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>
#import <WebCore/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVMediaCaptureSourceObserver : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct AVMediaCaptureSource *m_callback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addNotificationObservers;
- (void)beginSessionInterrupted:(id)arg1;
- (void)captureOutput:(struct AVCaptureOutput *)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(struct AVCaptureConnection *)arg3;
- (void)disconnect;
- (void)endSessionInterrupted:(id)arg1;
- (id)initWithCallback:(struct AVMediaCaptureSource *)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeNotificationObservers;
- (void)sessionRuntimeError:(id)arg1;

@end
