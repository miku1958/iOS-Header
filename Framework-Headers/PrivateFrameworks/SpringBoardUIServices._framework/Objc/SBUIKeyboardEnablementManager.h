//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface SBUIKeyboardEnablementManager : NSObject
{
    NSHashTable *_disabledContexts;
    BOOL _disabled;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)description;
- (void)disableAutomaticAppearanceForContext:(id)arg1;
- (void)enableAutomaticAppearanceForContext:(id)arg1;
- (id)init;

@end

