//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLNetworkState, CPLNetworkWatcher;

@protocol CPLNetworkWatcherDelegate <NSObject>
- (void)watcher:(CPLNetworkWatcher *)arg1 stateDidChangeToNetworkState:(CPLNetworkState *)arg2;
@end

