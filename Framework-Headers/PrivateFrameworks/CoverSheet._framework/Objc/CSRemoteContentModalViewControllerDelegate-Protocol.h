//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentModalViewController, NSError, SBSRemoteContentPreferences;

@protocol CSRemoteContentModalViewControllerDelegate <NSObject>
- (void)remoteContentModalViewController:(CSRemoteContentModalViewController *)arg1 didTerminateWithError:(NSError *)arg2;
- (void)remoteContentModalViewController:(CSRemoteContentModalViewController *)arg1 didUpdateWithPreferences:(SBSRemoteContentPreferences *)arg2;
- (BOOL)remoteContentModalViewController:(CSRemoteContentModalViewController *)arg1 requestsDismissalForType:(long long)arg2 completion:(void (^)(void))arg3;
@end

