//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedInputStream.h>

#import <MediaRemote/AVOutputContextCommunicationChannelDelegate-Protocol.h>

@class AVOutputContext, NSString;

@interface MRAVInputStream : MRAVBufferedInputStream <AVOutputContextCommunicationChannelDelegate>
{
    AVOutputContext *_outputContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)outputContext:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContext:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;

@end

