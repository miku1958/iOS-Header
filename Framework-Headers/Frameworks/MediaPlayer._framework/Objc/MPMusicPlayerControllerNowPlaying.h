//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPMediaItem, NSString;

@interface MPMusicPlayerControllerNowPlaying : NSObject <NSSecureCoding>
{
    MPMediaItem *_item;
    NSString *_itemIdentifier;
    NSString *_artworkIdentifier;
    long long _index;
    long long _count;
}

@property (readonly, nonatomic) NSString *artworkIdentifier; // @synthesize artworkIdentifier=_artworkIdentifier;
@property (readonly, nonatomic) long long count; // @synthesize count=_count;
@property (readonly, nonatomic) long long index; // @synthesize index=_index;
@property (readonly, nonatomic) MPMediaItem *item; // @synthesize item=_item;
@property (readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

+ (id)nowPlayingWithItem:(id)arg1 itemIdentifier:(id)arg2 artworkIdentifier:(id)arg3 index:(long long)arg4 count:(long long)arg5;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

