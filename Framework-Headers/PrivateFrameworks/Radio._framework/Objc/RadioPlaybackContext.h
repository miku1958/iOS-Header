//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying>
{
    long long _numberOfSkipsUsed;
    NSArray *_trackPlaybackDescriptorQueue;
}

@property (readonly, nonatomic) long long numberOfSkipsUsed; // @synthesize numberOfSkipsUsed=_numberOfSkipsUsed;
@property (readonly, copy, nonatomic) NSArray *trackPlaybackDescriptorQueue; // @synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)playbackContextDictionary;

@end

