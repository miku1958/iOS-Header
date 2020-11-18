//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface PLBatterySaverWatcher : NSObject
{
    int _notifyBatterySaverModeToken;
    NSHashTable *_delegates;
}

@property (readonly, nonatomic) BOOL batterySaverModeEnabled;

+ (id)sharedBatterySaverWatcher;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (unsigned int)registerToBatterySaverModeNotification;
- (void)removeDelegate:(id)arg1;
- (void)unregisterToBatterySaverModeNotification;

@end

