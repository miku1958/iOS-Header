//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UIView;

@interface MPUControlCenterCrossFadeComponent : NSObject
{
    NSMutableArray *_siblingViews;
    BOOL _shouldMoveSnapshotView;
    UIView *_view;
    UIView *_snapshotView;
    double _fadeOutDuration;
    double _fadeOutDelay;
    double _fadeInDuration;
    double _fadeInDelay;
}

@property (nonatomic) double fadeInDelay; // @synthesize fadeInDelay=_fadeInDelay;
@property (nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property (nonatomic) double fadeOutDelay; // @synthesize fadeOutDelay=_fadeOutDelay;
@property (nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property (nonatomic) BOOL shouldMoveSnapshotView; // @synthesize shouldMoveSnapshotView=_shouldMoveSnapshotView;
@property (readonly, nonatomic) NSArray *siblingViews;
@property (readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)componentWithView:(id)arg1;
- (void).cxx_destruct;
- (void)addSiblingView:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)performAlphaAndFrameChanges;
- (void)performSiblingViewChanges;

@end

