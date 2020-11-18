//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIcon;

@protocol SBIconObserver <NSObject>

@optional
- (void)iconAccessoriesDidUpdate:(SBIcon *)arg1;
- (void)iconArchivableStateDidChange:(SBIcon *)arg1;
- (void)iconGridSizeClassDidChange:(SBIcon *)arg1;
- (void)iconImageDidUpdate:(SBIcon *)arg1;
- (void)iconLaunchEnabledDidChange:(SBIcon *)arg1;
@end
