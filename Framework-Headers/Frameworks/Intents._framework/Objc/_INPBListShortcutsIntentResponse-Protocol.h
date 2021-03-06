//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBShortcutOverview;

@protocol _INPBListShortcutsIntentResponse <NSObject>

@property (copy, nonatomic) NSArray *shortcuts;
@property (readonly, nonatomic) unsigned long long shortcutsCount;

+ (Class)shortcutsType;
- (void)addShortcuts:(_INPBShortcutOverview *)arg1;
- (void)clearShortcuts;
- (_INPBShortcutOverview *)shortcutsAtIndex:(unsigned long long)arg1;
@end

