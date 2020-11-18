//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVWeakReference, NSDictionary, NSString;

@interface AVPlayerItemTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    BOOL figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    BOOL enabled;
    BOOL enabledWasSet;
}

@end
