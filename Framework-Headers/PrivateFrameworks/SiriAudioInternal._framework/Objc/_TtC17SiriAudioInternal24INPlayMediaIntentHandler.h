//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriAudioInternal/INPlayMediaIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC17SiriAudioInternal24INPlayMediaIntentHandler : NSObject <INPlayMediaIntentHandling>
{
    MISSING_TYPE *playbackService;
    MISSING_TYPE *localSearch;
    MISSING_TYPE *deviceProvider;
}

- (void).cxx_destruct;
- (void)handlePlayMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)resolveMediaItemsForPlayMedia:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
