//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiomePubSub/BPSPublisher.h>

@interface BPSFlatMap : BPSPublisher
{
    long long _maxPublishers;
    CDUnknownBlockType _transform;
    BPSPublisher *_upstream;
}

@property (readonly, nonatomic) long long maxPublishers; // @synthesize maxPublishers=_maxPublishers;
@property (readonly, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
@property (readonly, nonatomic) BPSPublisher *upstream; // @synthesize upstream=_upstream;

- (void).cxx_destruct;
- (id)initWithUpstream:(id)arg1 maxPublishers:(long long)arg2 transform:(CDUnknownBlockType)arg3;
- (void)subscribe:(id)arg1;

@end

