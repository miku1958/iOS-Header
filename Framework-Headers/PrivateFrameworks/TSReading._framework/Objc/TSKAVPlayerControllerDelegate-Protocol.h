//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSError, TSKAVPlayerController;

@protocol TSKAVPlayerControllerDelegate <NSObject>
- (void)playbackDidStopForPlayerController:(TSKAVPlayerController *)arg1;
- (void)playerController:(TSKAVPlayerController *)arg1 playbackDidFailWithError:(NSError *)arg2;
@end

