//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class UIView;

@interface SBCoverSheetPositionView : SBFTouchPassThroughView
{
    UIView *_contentView;
    double _progress;
}

@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) double progress; // @synthesize progress=_progress;

- (void).cxx_destruct;
- (void)_createContentView;
- (double)_progressForTouchLocation:(struct CGPoint)arg1;
- (double)_progressFromContenViewFrame:(struct CGRect)arg1;
- (struct CGPoint)_simulatedTouchLocationForProgress;
- (struct CGAffineTransform)_transformForLocation:(struct CGPoint)arg1 transformMode:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1;
- (struct CGRect)positionContentForTouchAtLocation:(struct CGPoint)arg1 withTransformMode:(long long)arg2 forPresentationValue:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1;

@end
