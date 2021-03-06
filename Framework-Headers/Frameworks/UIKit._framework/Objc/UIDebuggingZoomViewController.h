//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIDebuggingInformationViewController-Protocol.h>
#import <UIKitCore/UIDebuggingZoomDelegate-Protocol.h>

@class NSObject, UIDebuggingZoomLineView, UIDebuggingZoomLoupeView, UILabel, UIPanGestureRecognizer, UISegmentedControl, UIView;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingZoomDelegate, UIDebuggingInformationViewController>
{
    BOOL _useViewForEdges;
    unsigned long long _currentDirection;
    UIDebuggingZoomLoupeView *_loupe;
    UIDebuggingZoomLineView *_lineView;
    UIPanGestureRecognizer *_pan;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_queue> *_queue;
    struct CGImage *_image;
    UILabel *_label;
    UILabel *_distanceLabel;
    UISegmentedControl *_directionSegmentedControl;
    UIView *_lastViewSeen;
}

@property (nonatomic) unsigned long long currentDirection; // @synthesize currentDirection=_currentDirection;
@property (strong, nonatomic) UISegmentedControl *directionSegmentedControl; // @synthesize directionSegmentedControl=_directionSegmentedControl;
@property (strong, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property (nonatomic) struct CGImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) UIView *lastViewSeen; // @synthesize lastViewSeen=_lastViewSeen;
@property (strong, nonatomic) UIDebuggingZoomLineView *lineView; // @synthesize lineView=_lineView;
@property (strong, nonatomic) UIDebuggingZoomLoupeView *loupe; // @synthesize loupe=_loupe;
@property (strong, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) BOOL useViewForEdges; // @synthesize useViewForEdges=_useViewForEdges;

- (void).cxx_destruct;
- (void)dealloc;
- (id)drawLinesAtPoint:(struct CGPoint)arg1;
- (id)drawViewLinesAtPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGImage *)newCaptureSnapshotAtRect:(struct CGRect)arg1 window:(id)arg2;
- (void)toggleDirection:(id)arg1;
- (void)toggleMeasuring:(id)arg1;
- (void)toggleMode:(id)arg1;
- (void)updateGesture:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

