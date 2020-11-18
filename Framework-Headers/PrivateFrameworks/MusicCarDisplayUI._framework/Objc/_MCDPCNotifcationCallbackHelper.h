//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDPCModel, NSIndexPath;

@interface _MCDPCNotifcationCallbackHelper : NSObject
{
    BOOL _playback;
    CDUnknownBlockType _loadCompletion;
    CDUnknownBlockType _playCompletion;
    NSIndexPath *_indexPath;
    MCDPCModel *_model;
    id _selfRef;
}

- (void).cxx_destruct;
- (void)_beginPlayback;
- (id)_errorForNotification:(id)arg1;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_finishPlaybackNotification:(id)arg1;
- (void)_load;
- (BOOL)_noteHasCorrectIndexPath:(id)arg1;
- (void)begin;
- (void)dealloc;
- (id)initForLoadingIndexPath:(id)arg1 withModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initForPlaybackAtIndexPath:(id)arg1 withModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)invalidate;

@end

