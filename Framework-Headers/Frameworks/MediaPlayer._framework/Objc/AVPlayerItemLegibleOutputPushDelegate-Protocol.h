//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/AVPlayerItemOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, NSArray;

@protocol AVPlayerItemLegibleOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@optional
- (void)legibleOutput:(AVPlayerItemLegibleOutput *)arg1 didOutputAttributedStrings:(NSArray *)arg2 nativeSampleBuffers:(NSArray *)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
@end

