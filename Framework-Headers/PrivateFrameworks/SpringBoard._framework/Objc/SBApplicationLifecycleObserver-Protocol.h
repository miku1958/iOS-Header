//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol SBApplicationLifecycleObserver
- (void)applicationRestrictionsMayHaveChanged;
- (void)applicationVisibilityMayHaveChanged;
- (void)applicationsAdded:(NSArray *)arg1;
- (void)applicationsDemoted:(NSArray *)arg1;
- (void)applicationsRemoved:(NSArray *)arg1;
- (void)applicationsReplaced:(NSArray *)arg1;
- (void)applicationsUpdated:(NSArray *)arg1;
@end
