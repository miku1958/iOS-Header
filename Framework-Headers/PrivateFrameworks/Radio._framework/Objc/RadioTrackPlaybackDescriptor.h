//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>
#import <Radio/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    BOOL _current;
    NSDate *_expirationDate;
    double _pauseTime;
    NSDate *_skipDate;
    long long _storeID;
    NSDictionary *_trackInfo;
}

@property (readonly, nonatomic, getter=isCurrent) BOOL current; // @synthesize current=_current;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) double pauseTime; // @synthesize pauseTime=_pauseTime;
@property (readonly, nonatomic) NSDate *skipDate; // @synthesize skipDate=_skipDate;
@property (readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;
@property (readonly, copy, nonatomic) NSDictionary *trackInfo; // @synthesize trackInfo=_trackInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrack:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)queueTrackDictionary;

@end
