//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/NSCopying-Protocol.h>
#import <VideosUI/NSMutableCopying-Protocol.h>
#import <VideosUI/NSSecureCoding-Protocol.h>

@class NSDate, VUIBookmarkKey;

__attribute__((visibility("hidden")))
@interface VUIBookmark : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BOOL _hasBeenPlayed;
    BOOL _hasBeenRented;
    BOOL _isMarkedAsUnwatched;
    BOOL _hasFakeTimestamp;
    VUIBookmarkKey *_key;
    double _bookmarkTime;
    NSDate *_bookmarkTimestamp;
    unsigned long long _playCount;
}

@property (readonly, nonatomic) double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property (readonly, nonatomic) NSDate *bookmarkTimestamp; // @synthesize bookmarkTimestamp=_bookmarkTimestamp;
@property (readonly, nonatomic) BOOL hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property (readonly, nonatomic) BOOL hasBeenRented; // @synthesize hasBeenRented=_hasBeenRented;
@property (nonatomic) BOOL hasFakeTimestamp; // @synthesize hasFakeTimestamp=_hasFakeTimestamp;
@property (readonly, nonatomic) BOOL isMarkedAsUnwatched; // @synthesize isMarkedAsUnwatched=_isMarkedAsUnwatched;
@property (readonly, nonatomic) VUIBookmarkKey *key; // @synthesize key=_key;
@property (readonly, nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_copyWithResultClass:(Class)arg1;
- (void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg1;
- (void)_setBookmarkTimestamp:(id)arg1;
- (void)_setHasBeenPlayed:(BOOL)arg1;
- (void)_setHasBeenRented:(BOOL)arg1;
- (void)_setIsMarkedAsUnwatched:(BOOL)arg1;
- (void)_setPlayCount:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasRemoteData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

