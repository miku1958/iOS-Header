//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemOutputPullDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC *m_callback;
    NSObject<OS_dispatch_semaphore> *m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;
- (void)outputMediaDataWillChange:(struct AVPlayerItemVideoOutput *)arg1;
- (void)outputSequenceWasFlushed:(struct AVPlayerItemVideoOutput *)arg1;
- (void)setCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;

@end
