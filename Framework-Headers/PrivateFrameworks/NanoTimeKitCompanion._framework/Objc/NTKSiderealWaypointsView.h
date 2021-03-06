//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface NTKSiderealWaypointsView : UIView
{
    NSArray *_waypoints;
    double _orbitDiameter;
    UIView *_orbitContainerView;
    double _waypointDiameter;
    UIView *_waypointContainerView;
    double _dialDiameter;
    UIView *_separatorLinesContainer;
    NSMutableArray *_separatorLines;
}

- (void).cxx_destruct;
- (id)_newSeparatorLineForWaypoint:(id)arg1;
- (id)_newWaypointView;
- (void)_updateSeparatorLines;
- (id)initWithFrame:(struct CGRect)arg1 orbitDiameter:(double)arg2 dialDiameter:(double)arg3 waypoints:(id)arg4;
- (void)setWaypoints:(id)arg1;

@end

