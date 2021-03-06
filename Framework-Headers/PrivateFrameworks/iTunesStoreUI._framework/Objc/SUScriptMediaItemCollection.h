//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class MPMediaItemCollection, NSArray, SUScriptMediaItem;

@interface SUScriptMediaItemCollection : SUScriptObject
{
    NSArray *_items;
    SUScriptMediaItem *_representativeItem;
    BOOL _watchingLibrary;
}

@property (readonly) long long count;
@property (readonly) NSArray *items;
@property (readonly) NSArray *mediaTypes;
@property (readonly, nonatomic) MPMediaItemCollection *nativeCollection;
@property (readonly) SUScriptMediaItem *representativeItem;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (void)_beginWatchingLibraryIfNecessary;
- (id)_className;
- (void)_libraryChangedNotification:(id)arg1;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)scriptAttributeKeys;

@end

