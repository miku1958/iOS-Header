//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCAVAsset;

@interface FCArticleAudioTrack : NSObject <NSCopying>
{
    long long _type;
    FCAVAsset *_asset;
    double _duration;
}

@property (readonly, nonatomic) FCAVAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(long long)arg1 asset:(id)arg2 duration:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end
