//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface FARestrictionsPINNavigationController : UINavigationController
{
    unsigned long long _internalSupportedOrientations;
    struct CGSize _lastKnownScreenSize;
}

@property unsigned long long internalSupportedOrientations; // @synthesize internalSupportedOrientations=_internalSupportedOrientations;
@property struct CGSize lastKnownScreenSize; // @synthesize lastKnownScreenSize=_lastKnownScreenSize;

+ (BOOL)fa_isPad;
+ (BOOL)fa_shouldAnimate;
- (void)_adjustToScreenBounds;
- (void)_freezeSupportedOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

