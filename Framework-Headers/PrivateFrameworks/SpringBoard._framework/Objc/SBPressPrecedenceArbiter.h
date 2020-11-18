//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SBPressPrecedenceArbiter : NSObject
{
    unsigned long long _volumeAndLockButtonPriority;
    long long _homeButtonType;
    BOOL _isMusicPlayingSomewhere;
    NSArray *_hardwareButtons;
}

@property (strong, nonatomic) NSArray *hardwareButtons; // @synthesize hardwareButtons=_hardwareButtons;

- (void).cxx_destruct;
- (void)_applyButtonPriority:(unsigned long long)arg1;
- (unsigned long long)_currentButtonPriority;
- (void)_initializeButtonPriorities;
- (BOOL)_shouldArbitrateLockAndVolumeHardwareButtonPriorities;
- (void)_updateButtonPrioritiesForClientIsPlayingNotification:(id)arg1;
- (void)_updateButtonPrioritiesForNotification:(id)arg1;
- (void)_updateButtonPriority;
- (id)initWithHomeButtonType:(long long)arg1;

@end
