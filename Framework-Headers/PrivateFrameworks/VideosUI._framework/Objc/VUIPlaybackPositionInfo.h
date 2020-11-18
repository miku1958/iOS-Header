//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIPlaybackPositionInfo : NSObject <NSCopying>
{
    NSNumber *_bookmarkTime;
    NSNumber *_playCount;
    NSNumber *_hasBeenPlayed;
}

@property (strong, nonatomic) NSNumber *bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property (strong, nonatomic) NSNumber *hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property (strong, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
