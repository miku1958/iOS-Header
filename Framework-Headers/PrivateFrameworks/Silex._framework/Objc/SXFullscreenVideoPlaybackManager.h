//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface SXFullscreenVideoPlaybackManager : NSObject
{
    BOOL _transitionInProgress;
    BOOL _layoutInProgress;
    NSHashTable *_candidates;
}

@property (readonly, nonatomic) NSHashTable *candidates; // @synthesize candidates=_candidates;
@property (nonatomic) BOOL layoutInProgress; // @synthesize layoutInProgress=_layoutInProgress;
@property (nonatomic) BOOL transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (void)didLayoutForSize:(struct CGSize)arg1;
- (void)didTransitionToSize:(struct CGSize)arg1;
- (void)enterFullscreenIfNeeded;
- (id)init;
- (void)removeCandidate:(id)arg1;
- (void)willLayoutAndTransitionToSize:(struct CGSize)arg1;

@end
