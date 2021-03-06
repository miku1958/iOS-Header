//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCMediaFoundationTranslator;
@protocol OS_dispatch_source;

@interface MPCItemBookmarker : NSObject
{
    MPCMediaFoundationTranslator *_translator;
    NSObject<OS_dispatch_source> *_bookmarkingTimer;
}

@property (strong, nonatomic) NSObject<OS_dispatch_source> *bookmarkingTimer; // @synthesize bookmarkingTimer=_bookmarkingTimer;
@property (strong, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;

- (void).cxx_destruct;
- (void)_setupBookmarkingTimerForItem:(id)arg1;
- (void)_teardownBookmarkingTimer;
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 time:(double)arg3;
- (id)initWithTranslator:(id)arg1;
- (void)itemDidBecomeCurrent:(id)arg1 time:(double)arg2;
- (void)itemDidPlayToEnd:(id)arg1 time:(double)arg2;
- (void)itemDidResignCurrent:(id)arg1 time:(double)arg2;
- (void)playbackDidStartForItem:(id)arg1 time:(double)arg2 rate:(float)arg3;
- (void)playbackDidStopForItem:(id)arg1 time:(double)arg2;
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 time:(double)arg3;
- (void)playbackStateDidChangeFromState:(long long)arg1 toState:(long long)arg2 forItem:(id)arg3 time:(double)arg4 rate:(float)arg5;
- (void)updateDurationSnapshotWithTime:(double)arg1 forItem:(id)arg2 rate:(float)arg3;
- (void)userDidSkipDuringPlaybackFromItem:(id)arg1 direction:(long long)arg2;

@end

