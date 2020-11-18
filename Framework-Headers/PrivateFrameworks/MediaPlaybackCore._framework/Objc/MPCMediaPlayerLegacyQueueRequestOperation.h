//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

#import <MediaPlaybackCore/MPCPlayerQueueRequestOperation-Protocol.h>

@class MPCPlayerQueueRequest, NSString;

@interface MPCMediaPlayerLegacyQueueRequestOperation : MPAsyncOperation <MPCPlayerQueueRequestOperation>
{
    MPCPlayerQueueRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) MPCPlayerQueueRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;

@end
