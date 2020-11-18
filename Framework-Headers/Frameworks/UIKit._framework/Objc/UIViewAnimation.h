//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject
{
    UIView *_view;
    NSIndexPath *_indexPath;
    struct CGRect _endRect;
    double _endAlpha;
    double _startFraction;
    double _endFraction;
    int _curve;
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
    BOOL _shouldAnimateShadow;
    BOOL _shouldResetGroupOpacityAfterAnimation;
    BOOL _shouldAllowGroupOpacityAfterAnimation;
    BOOL _shouldClipToBoundsAfterAnimation;
    int _viewType;
}

@property (readonly, nonatomic) BOOL animateFromCurrentPosition; // @synthesize animateFromCurrentPosition=_animateFromCurrentPosition;
@property (readonly, nonatomic) int curve; // @synthesize curve=_curve;
@property (readonly, nonatomic) BOOL editing; // @synthesize editing=_editing;
@property (readonly, nonatomic) double endAlpha; // @synthesize endAlpha=_endAlpha;
@property (readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property (readonly, nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property (readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation; // @synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation;
@property (nonatomic) BOOL shouldAnimateShadow; // @synthesize shouldAnimateShadow=_shouldAnimateShadow;
@property (nonatomic) BOOL shouldClipToBoundsAfterAnimation; // @synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation;
@property (readonly, nonatomic) BOOL shouldDeleteAfterAnimation; // @synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation;
@property (nonatomic) BOOL shouldResetGroupOpacityAfterAnimation; // @synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation;
@property (readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property (readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property (readonly, nonatomic) int viewType; // @synthesize viewType=_viewType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 viewType:(int)arg3 endRect:(struct CGRect)arg4 endAlpha:(double)arg5 startFraction:(double)arg6 endFraction:(double)arg7 curve:(int)arg8 animateFromCurrentPosition:(BOOL)arg9 shouldDeleteAfterAnimation:(BOOL)arg10 editing:(BOOL)arg11;

@end

