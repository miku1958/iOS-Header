//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings
{
    BOOL _allowSwipeDown;
    double _minimumDimmingOpacity;
    PXSwipeDownSettings *_swipeDownSettings;
}

@property (nonatomic) BOOL allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
@property (nonatomic) double minimumDimmingOpacity; // @synthesize minimumDimmingOpacity=_minimumDimmingOpacity;
@property (strong, nonatomic) PXSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)parentSettings;
- (void)setDefaultValues;

@end

