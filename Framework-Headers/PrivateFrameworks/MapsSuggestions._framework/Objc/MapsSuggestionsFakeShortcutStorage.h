//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsShortcutStorage-Protocol.h>

@class NSArray, NSError, NSString;

@interface MapsSuggestionsFakeShortcutStorage : NSObject <MapsSuggestionsShortcutStorage>
{
    struct ReadWriteQueue _rwQueue;
    NSArray *_fakeResults;
    NSArray *_passedInput;
    NSError *_fakeError;
    unsigned long long _calledLoad;
    unsigned long long _calledAddOrUpdate;
    unsigned long long _calledRemove;
    unsigned long long _calledMove;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addOrUpdateShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)calledAddOrUpdate;
- (unsigned long long)calledMove;
- (unsigned long long)calledRemove;
- (unsigned long long)calledRequestLoad;
- (void)configureError:(id)arg1;
- (void)configureResults:(id)arg1;
- (id)init;
- (BOOL)loadAllShortcutsWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)moveShortcut:(id)arg1 afterShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 beforeShortcut:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcut:(id)arg1 toIndex:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)moveShortcutToBack:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)moveShortcutToFront:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)passedInput;
- (BOOL)removeShortcuts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)setChangeHandler:(CDUnknownBlockType)arg1;

@end

