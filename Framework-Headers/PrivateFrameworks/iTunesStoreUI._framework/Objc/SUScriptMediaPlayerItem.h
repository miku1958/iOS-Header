//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUMediaPlayerItem;

@interface SUScriptMediaPlayerItem : SUScriptObject
{
    SUMediaPlayerItem *_mediaItem;
}

@property (copy) NSString *URL;
@property (copy) NSString *backgroundImageURL;
@property (copy) NSString *bookmarkIdentifier;
@property (copy) NSString *initialOrientation;
@property (strong) NSNumber *itemIdentifier;
@property (copy) NSString *itemType;
@property (strong) NSNumber *playableDuration;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (id)webScriptNameForKey:(const char *)arg1;
- (id)_className;
- (id)attributeKeys;
- (id)copyNativeMediaPlayerItem;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)scriptAttributeKeys;

@end

