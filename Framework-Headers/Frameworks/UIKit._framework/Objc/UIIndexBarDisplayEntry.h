//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIIndexBarEntry;

__attribute__((visibility("hidden")))
@interface UIIndexBarDisplayEntry : NSObject
{
    UIIndexBarEntry *_entry;
    long long _entryIndex;
    long long _displayEntryIndex;
}

@property (nonatomic) long long displayEntryIndex; // @synthesize displayEntryIndex=_displayEntryIndex;
@property (strong, nonatomic) UIIndexBarEntry *entry; // @synthesize entry=_entry;
@property (nonatomic) long long entryIndex; // @synthesize entryIndex=_entryIndex;

- (void).cxx_destruct;
- (id)description;

@end

