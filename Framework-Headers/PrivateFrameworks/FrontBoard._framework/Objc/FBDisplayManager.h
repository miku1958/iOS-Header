//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSDisplay, NSHashTable, NSMapTable, NSMutableSet;

@interface FBDisplayManager : NSObject
{
    NSHashTable *_observers;
    NSMapTable *_displayIDToFBSDisplayMap;
    NSMutableSet *_displaysDebouncing;
    FBSDisplay *_mainDisplay;
}

@property (strong, nonatomic) FBSDisplay *mainDisplay; // @synthesize mainDisplay=_mainDisplay;

+ (id)mainDisplay;
+ (id)sharedInstance;
- (void)_broadcastFBSDisplayDidConnect:(id)arg1;
- (void)_caDisplayDidConnect:(id)arg1 debounce:(BOOL)arg2 broadcast:(BOOL)arg3;
- (void)_caDisplayDidDisconnect:(id)arg1;
- (BOOL)_caDisplayIsMainDisplay:(id)arg1;
- (void)_debounceDisplay:(id)arg1 broadcast:(BOOL)arg2;
- (void)_displayDidDebounce:(id)arg1 broadcast:(BOOL)arg2;
- (id)_fbsDisplayForCADisplay:(id)arg1;
- (void)_initializeDisplays;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)displays;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;

@end

