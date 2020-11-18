//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAutoScroller.h>

@class CADisplayLink;

@interface PXUIAutoScroller : PXAutoScroller
{
    CADisplayLink *__displayLink;
}

@property (strong, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink; // @synthesize _displayLink=__displayLink;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (BOOL)autoscrollWithOffset:(struct CGPoint)arg1;
- (void)startRepeating;
- (void)stopRepeating;
- (void)updateWithGestureRecognizer:(id)arg1;
- (struct CGRect)visibleRectForScrollView:(id)arg1;

@end

