//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXAnonymousScrollView, PXAutoScrollerDelegate;

@interface PXAutoScroller : NSObject
{
    struct {
        BOOL didAutoscrollWithTimestamp;
    } _delegateRespondsTo;
    BOOL __repeating;
    NSObject<PXAnonymousScrollView> *_scrollView;
    id<PXAutoScrollerDelegate> _delegate;
    double __margin;
    double __maximumSpeed;
    double __lastUpdateTimestamp;
    struct CGPoint __autoscrollDirection;
}

@property (nonatomic, setter=_setAutoscrollDirection:) struct CGPoint _autoscrollDirection; // @synthesize _autoscrollDirection=__autoscrollDirection;
@property (nonatomic, setter=_setLastUpdateTimestamp:) double _lastUpdateTimestamp; // @synthesize _lastUpdateTimestamp=__lastUpdateTimestamp;
@property (readonly, nonatomic) double _margin; // @synthesize _margin=__margin;
@property (readonly, nonatomic) double _maximumSpeed; // @synthesize _maximumSpeed=__maximumSpeed;
@property (nonatomic, getter=_isRepeating, setter=_setRepeating:) BOOL _repeating; // @synthesize _repeating=__repeating;
@property (weak, nonatomic) id<PXAutoScrollerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<PXAnonymousScrollView> *scrollView; // @synthesize scrollView=_scrollView;

- (void).cxx_destruct;
- (BOOL)autoscrollWithOffset:(struct CGPoint)arg1;
- (id)init;
- (id)initWithTargetScrollView:(id)arg1;
- (void)startRepeating;
- (void)stop;
- (void)stopRepeating;
- (void)updateWithTimestamp:(double)arg1;
- (void)updateWithUserInteractionLocation:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct CGRect)visibleRectForScrollView:(id)arg1;

@end
