//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSString;
@protocol CPPowerAssertionManagerDelegate;

@interface CPPowerAssertionManager : NSObject
{
    NSString *_uuid;
    NSCountedSet *_contexts;
    NSMutableDictionary *_groupIdentifierToContexts;
    struct __CFDictionary *_contextToGroupIdentifier;
    NSMutableSet *_heldAsideGroupIdentifiers;
    NSCountedSet *_heldAsideContexts;
    id<CPPowerAssertionManagerDelegate> _delegate;
}

@property id<CPPowerAssertionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) NSString *uuid; // @synthesize uuid=_uuid;

+ (id)sharedInstance;
- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;
- (unsigned long long)retainCountForContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)setUUIDPrefix:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;

@end

