//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicQuickActionsManager : NSObject
{
    BOOL _supportsQuickActions;
}

+ (id)sharedInstance;
- (id)_orderedShortcutTypes;
- (void)_prominentRadioStationDidChangeNotification:(id)arg1;
- (void)_removeShortcutWithType:(id)arg1;
- (void)_updateShortcut:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)updateFeaturedRadioStationShortcut;
- (void)updateNowPlayingShortcutWithItem:(id)arg1;
- (void)updateSearchShortcut;
- (void)updateSiriShortcut;

@end
