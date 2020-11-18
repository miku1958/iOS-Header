//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class MPAVItem, NSError;

@interface MPUPlaybackAlertController : UIAlertController
{
    long long _playbackAlertType;
    MPAVItem *_item;
    NSError *_error;
}

@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) long long playbackAlertType; // @synthesize playbackAlertType=_playbackAlertType;

+ (id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
+ (id)playbackAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
+ (long long)playbackAlertTypeForError:(id)arg1;
+ (id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;

@end
