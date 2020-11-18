//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FrontBoard/FBSceneHostSnapshotView-Protocol.h>

@class FBSceneSnapshot, NSString;

@interface FBSceneHostSnapshotView : UIView <FBSceneHostSnapshotView>
{
    FBSceneSnapshot *_snapshot;
}

@property (readonly, strong, nonatomic) id IOSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) FBSceneSnapshot *sceneSnapshot; // @synthesize sceneSnapshot=_snapshot;
@property (readonly) Class superclass;

- (id)_initWithSnapshot:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

