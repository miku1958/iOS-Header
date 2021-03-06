//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface ADWebViewGestureRecognizer : UIGestureRecognizer
{
    BOOL _shouldBlockNavigation;
    BOOL _pointIsInsideView;
    long long _lastTrackedTouch;
    double _mostRecentTapTimestamp;
    struct CGPoint _mostRecentTapLocation;
    struct CGPoint _location;
}

@property (nonatomic) long long lastTrackedTouch; // @synthesize lastTrackedTouch=_lastTrackedTouch;
@property (readonly, nonatomic) struct CGPoint location; // @synthesize location=_location;
@property (readonly, nonatomic) struct CGPoint mostRecentTapLocation; // @synthesize mostRecentTapLocation=_mostRecentTapLocation;
@property (nonatomic) double mostRecentTapTimestamp; // @synthesize mostRecentTapTimestamp=_mostRecentTapTimestamp;
@property (readonly, nonatomic) BOOL pointIsInsideView; // @synthesize pointIsInsideView=_pointIsInsideView;
@property (readonly, nonatomic) BOOL shouldBlockNavigation; // @synthesize shouldBlockNavigation=_shouldBlockNavigation;
@property (readonly, nonatomic) BOOL wasViewTappedRecently;

- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

