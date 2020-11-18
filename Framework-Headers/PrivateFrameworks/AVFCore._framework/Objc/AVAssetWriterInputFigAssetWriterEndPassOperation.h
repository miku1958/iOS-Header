//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFCore/AVOperation.h>

@class AVAssetWriterInputPassDescription;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    int _trackID;
    AVAssetWriterInputPassDescription *_nextPassDescription;
}

@property (readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass; // @synthesize descriptionForNextPass=_nextPassDescription;

- (void)_notifyWhetherMorePassesAreNeeded:(BOOL)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 trackID:(int)arg2;
- (BOOL)isAsynchronous;
- (void)start;

@end
