//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaItem.h>

@class NSSet, NSString;

@interface MPMediaItem (WLKUIAdditions)

@property (readonly, nonatomic, getter=wlk_jsPropertyStrings) NSSet *jsPropertyStrings;
@property (readonly, copy, nonatomic, getter=wlk_mediaTypeString) NSString *mediaTypeString;
@property (readonly, copy, nonatomic, getter=wlk_playState) NSString *playState;

+ (id)wlk_JSgenericProperties;
+ (id)wlk_JSmovieProperties;
+ (id)wlk_JStvShowProperties;
+ (id)wlk_mediaItemForPersistentIdentifier:(id)arg1;
+ (id)wlk_mediaItemForStoreIdentifier:(id)arg1;
- (id)wlk_stringIdentifierForProperty:(id)arg1;
- (id)wlk_stringIdentifierForSeason;
@end

