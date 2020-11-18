//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView, CAMViewfinderView;

@interface CAMViewfinderFlipTransition : NSObject
{
    CAMViewfinderView *__viewfinderView;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
}

@property (strong, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // @synthesize _backSnapshotView=__backSnapshotView;
@property (strong, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // @synthesize _frontSnapshotView=__frontSnapshotView;
@property (strong, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // @synthesize _targetSnapshotView=__targetSnapshotView;
@property (readonly, weak, nonatomic) CAMViewfinderView *_viewfinderView; // @synthesize _viewfinderView=__viewfinderView;

- (void).cxx_destruct;
- (void)_cleanupFromFlipTransition;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithViewfinderView:(id)arg1;
- (void)performFlipTransitionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

