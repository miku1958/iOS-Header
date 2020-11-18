//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MKMapAttribution, UIButton, UISegmentedControl, UIView;
@protocol FMFMapOptionsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FMFMapOptionsViewController : UIViewController
{
    id<FMFMapOptionsViewControllerDelegate> _delegate;
    UIButton *_mapAttributionButton;
    UIView *_topTapView;
    UISegmentedControl *_segmentedControl;
    UIView *_bottomWhitePane;
    MKMapAttribution *_mapAttribution;
}

@property (strong, nonatomic) UIView *bottomWhitePane; // @synthesize bottomWhitePane=_bottomWhitePane;
@property (weak, nonatomic) id<FMFMapOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) MKMapAttribution *mapAttribution; // @synthesize mapAttribution=_mapAttribution;
@property (strong, nonatomic) UIButton *mapAttributionButton; // @synthesize mapAttributionButton=_mapAttributionButton;
@property (strong, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property (strong, nonatomic) UIView *topTapView; // @synthesize topTapView=_topTapView;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)attributionButtonPressed:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (void)openInMaps:(id)arg1;
- (struct CGSize)paneSize;
- (void)segmentedControlChanged:(id)arg1;
- (void)viewDidLoad;

@end

