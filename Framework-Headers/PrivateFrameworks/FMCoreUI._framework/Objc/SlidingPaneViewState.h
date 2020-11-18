//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ISPaneFrameView, NSLayoutConstraint, UIViewController, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface SlidingPaneViewState : NSObject
{
    BOOL _shouldNotifyOfPaneSizeChanges;
    UIViewController *_paneViewController;
    ISPaneFrameView *_paneView;
    UIVisualEffectView *_visualEffectView;
    NSLayoutConstraint *_paneVerticalPositionConstraint;
    NSLayoutConstraint *_paneHorizontalPositionConstraint;
    unsigned long long _edge;
}

@property (nonatomic) unsigned long long edge; // @synthesize edge=_edge;
@property (strong, nonatomic) NSLayoutConstraint *paneHorizontalPositionConstraint; // @synthesize paneHorizontalPositionConstraint=_paneHorizontalPositionConstraint;
@property (strong, nonatomic) NSLayoutConstraint *paneVerticalPositionConstraint; // @synthesize paneVerticalPositionConstraint=_paneVerticalPositionConstraint;
@property (strong, nonatomic) ISPaneFrameView *paneView; // @synthesize paneView=_paneView;
@property (strong, nonatomic) UIViewController *paneViewController; // @synthesize paneViewController=_paneViewController;
@property (nonatomic) BOOL shouldNotifyOfPaneSizeChanges; // @synthesize shouldNotifyOfPaneSizeChanges=_shouldNotifyOfPaneSizeChanges;
@property (strong, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 edge:(unsigned long long)arg2;

@end
