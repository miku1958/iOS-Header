//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, NSArray, NSMutableArray, UIScreen;

__attribute__((visibility("hidden")))
@interface _UIDragManager : NSObject
{
    CAContext *_dragImageContext;
    long long _pendingSessionRequests;
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;
    NSArray *_dragSessionSources;
    NSArray *_dragSessionDestinations;
    UIScreen *_screen;
}

@property (readonly, nonatomic) CAContext *dragImageContext;
@property (copy, nonatomic) NSArray *dragSessionDestinations; // @synthesize dragSessionDestinations=_dragSessionDestinations;
@property (copy, nonatomic) NSArray *dragSessionSources; // @synthesize dragSessionSources=_dragSessionSources;
@property (readonly, weak, nonatomic) UIScreen *screen; // @synthesize screen=_screen;

+ (void)initializeDraggingSystem;
- (void).cxx_destruct;
- (void)_willAddDeactivationReason:(id)arg1;
- (id)beginDragWithSessionConfiguration:(id)arg1;
- (void)deleteSlots:(id)arg1;
- (id)dragDestinationWithEvent:(id)arg1;
- (BOOL)hasPendingSessionRequests;
- (id)initWithScreen:(id)arg1;
- (void)performAfterCompletingPendingSessionRequests:(CDUnknownBlockType)arg1;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (void)sessionDestinationDidEnd:(id)arg1;
- (void)sessionSourceDidEnd:(id)arg1;
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;
- (unsigned int)uploadImage:(struct CGImage *)arg1;

@end
