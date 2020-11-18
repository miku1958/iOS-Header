//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/NSObject-Protocol.h>

@class CSRemoteContentSession, SBSRemoteContentPreferences;

@protocol CSRemoteContentSessionPreferencesProvider <NSObject>
- (SBSRemoteContentPreferences *)preferencesForRemoteContentSession:(CSRemoteContentSession *)arg1;
- (void)remoteContentSession:(CSRemoteContentSession *)arg1 didUpdateWithPreferences:(SBSRemoteContentPreferences *)arg2;
@end
