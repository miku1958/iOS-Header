//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCPrivateZoneSyncManager, NTPBPrivateZoneSyncState;

@protocol FCPrivateZoneSyncManagerDelegate <NSObject>
- (void)zoneSyncManager:(FCPrivateZoneSyncManager *)arg1 stateDidChange:(NTPBPrivateZoneSyncState *)arg2;
- (void)zoneSyncManagerNotifyObservers:(FCPrivateZoneSyncManager *)arg1;
@end

