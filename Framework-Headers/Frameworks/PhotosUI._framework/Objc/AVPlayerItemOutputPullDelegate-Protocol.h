//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class AVPlayerItemOutput;

@protocol AVPlayerItemOutputPullDelegate <NSObject>

@optional
- (void)outputMediaDataWillChange:(AVPlayerItemOutput *)arg1;
- (void)outputSequenceWasFlushed:(AVPlayerItemOutput *)arg1;
@end

