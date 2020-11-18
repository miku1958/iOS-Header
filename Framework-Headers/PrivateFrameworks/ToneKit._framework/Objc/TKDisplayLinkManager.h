//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface TKDisplayLinkManager : NSObject
{
    BOOL _hasUpdatedTargetActions;
    BOOL _handlingDisplayRefresh;
    CADisplayLink *_storedDisplayLink;
    NSMutableSet *_activeTargetActions;
    NSMutableSet *_updatedTargetActions;
    unsigned long long _warmUpModeRequirementsCount;
}

@property (strong, nonatomic, setter=_setActiveTargetActions:) NSMutableSet *_activeTargetActions; // @synthesize _activeTargetActions;
@property (strong, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;
@property (nonatomic, getter=_isHandlingDisplayRefresh, setter=_setHandlingDisplayRefresh:) BOOL _handlingDisplayRefresh; // @synthesize _handlingDisplayRefresh;
@property (nonatomic, setter=_setHasUpdatedTargetActions:) BOOL _hasUpdatedTargetActions; // @synthesize _hasUpdatedTargetActions;
@property (strong, nonatomic, setter=_setStoredDisplayLink:) CADisplayLink *_storedDisplayLink; // @synthesize _storedDisplayLink;
@property (strong, nonatomic, setter=_setUpdatedTargetActions:) NSMutableSet *_updatedTargetActions; // @synthesize _updatedTargetActions;
@property (readonly, nonatomic, getter=_isWarmUpModeEnabled) BOOL _warmUpModeEnabled;
@property (nonatomic, setter=_setWarmUpModeRequirementsCount:) unsigned long long _warmUpModeRequirementsCount; // @synthesize _warmUpModeRequirementsCount;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long frameInterval;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) double timestamp;

+ (void)_releaseCurrentDisplayLinkManager;
+ (id)currentDisplayLinkManager;
- (void)_didAddFirstTargetAction;
- (void)_didRemoveLastTargetAction;
- (void)_displayDidRefresh:(id)arg1;
- (id)_prepareUpdatedTargetActionsForModification;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned long long)arg3;
- (void)beginRequiringWarmUpMode;
- (void)dealloc;
- (void)endRequiringWarmUpMode;
- (id)init;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;

@end

