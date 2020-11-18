//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicContextualAlertAction.h>

@class MPAVController, MPPlaybackContext;

@interface MusicContextualUpNextAlertAction : MusicContextualAlertAction
{
    long long _insertionType;
    MPPlaybackContext *_playbackContext;
    MPAVController *_player;
}

+ (id)contextualUpNextActionWithEntityValueContext:(id)arg1 insertionType:(long long)arg2 didDismissHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_handleUpNextAction;

@end
