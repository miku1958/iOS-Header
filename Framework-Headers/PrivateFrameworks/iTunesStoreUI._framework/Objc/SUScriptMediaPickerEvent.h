//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject
{
    SUScriptMediaItemCollection *_collection;
}

@property (readonly) SUScriptMediaItemCollection *collection;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (id)scriptAttributeKeys;

@end
