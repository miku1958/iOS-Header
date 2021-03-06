//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVQueueCoordinating-Protocol.h>

@class MPAVItem, NSArray, NSString;
@protocol MFPlaybackStackController><MFQueueManagement;

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating>
{
    id<MFPlaybackStackController><MFQueueManagement> _playbackStackController;
}

@property (readonly, nonatomic) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly, weak, nonatomic) id<MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
@property (nonatomic) BOOL shouldDeferItemLoading;
@property (nonatomic) BOOL shouldExpectEmptyQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStackController:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
- (void)reset;

@end

