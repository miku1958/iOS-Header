//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKDrawingAdjustmentKnob;

@interface PKSpaceInsertionView : UIView
{
    struct CGPath *_lassoPath;
    struct CGPoint _handleLocation;
    double _scale;
    PKDrawingAdjustmentKnob *_knobHandle;
    BOOL _isDragging;
    unsigned long long _insertionType;
}

@property (nonatomic) unsigned long long insertionType; // @synthesize insertionType=_insertionType;
@property (nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;

- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 insertionType:(unsigned long long)arg2 path:(struct CGPath *)arg3 handleLocation:(struct CGPoint)arg4 scale:(double)arg5;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

