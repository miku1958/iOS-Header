//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SUMediaPlayerItem : NSObject <NSCopying>
{
    NSURL *_backgroundImageURL;
    NSString *_bookmarkIdentifier;
    NSArray *_downloadPingURLs;
    long long _initialOrientation;
    unsigned long long _itemIdentifier;
    long long _itemType;
    NSArray *_playbackPingURLs;
    double _playableDuration;
    NSString *_subtitle;
    NSString *_title;
    NSURL *_url;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property (strong, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property (copy, nonatomic) NSString *bookmarkIdentifier; // @synthesize bookmarkIdentifier=_bookmarkIdentifier;
@property (nonatomic) double bookmarkedStartTime;
@property (copy, nonatomic) NSArray *downloadPingURLs; // @synthesize downloadPingURLs=_downloadPingURLs;
@property (nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
@property (nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property (nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property (copy, nonatomic) NSArray *playbackPingURLs; // @synthesize playbackPingURLs=_playbackPingURLs;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (id)_newPingURLsWithArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithItem:(id)arg1;
- (void)resetBookmarkedStartTime;

@end

