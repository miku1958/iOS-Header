//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayerLayer.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ISAVPlayerLayer : AVPlayerLayer
{
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setBounds:(struct CGRect)arg1;
- (void)setPlayer:(id)arg1;
- (void)setWrappedPlayer:(id)arg1;

@end

