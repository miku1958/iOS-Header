//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, SBModalAlertPresentationCoordinator;

@protocol SBModalAlertPresentationCoordinatorDelegate <NSObject>
- (void)modalAlertPresentationCoordinator:(SBModalAlertPresentationCoordinator *)arg1 didChangeShowingSystemModalAlert:(BOOL)arg2;
- (NSSet *)modalAlertPresentationCoordinatorRequestedForegroundScenes:(SBModalAlertPresentationCoordinator *)arg1;
@end

