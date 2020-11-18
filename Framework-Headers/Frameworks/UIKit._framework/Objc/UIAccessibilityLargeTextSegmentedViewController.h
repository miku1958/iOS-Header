//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSMutableArray, UIScrollView, UISegment, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController
{
    UISegmentedControl *_segmentedControl;
    NSMutableArray *_segmentButtons;
    UISegment *_originalSelectedSegment;
    NSArray *_segments;
    UIScrollView *_mainScrollView;
}

@property (strong, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property (strong, nonatomic) UISegment *originalSelectedSegment; // @synthesize originalSelectedSegment=_originalSelectedSegment;
@property (strong, nonatomic) NSMutableArray *segmentButtons; // @synthesize segmentButtons=_segmentButtons;
@property (strong, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property (strong, nonatomic) NSArray *segments; // @synthesize segments=_segments;

- (void).cxx_destruct;
- (void)_configureSegmentViews;
- (void)_orientationChanged:(id)arg1;
- (void)buttonPress:(id)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchUp:(id)arg1;
- (id)initWithSegmentedControl:(id)arg1 segments:(id)arg2 delegate:(id)arg3;
- (id)segmentFromSegment:(id)arg1;
- (void)viewDidLayoutSubviews;

@end

