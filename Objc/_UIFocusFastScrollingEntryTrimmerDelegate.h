//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIFocusFastScrollingIndexBarEntryTrimmerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingEntryTrimmerDelegate : NSObject <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 entryIsPlaceholder:(id)arg2;
- (id)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 placeholderEntryBetweenEntryBefore:(id)arg2 entryAfter:(id)arg3;
- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)arg1 startingOrEndingEntryMustBePreserved:(id)arg2;

@end
