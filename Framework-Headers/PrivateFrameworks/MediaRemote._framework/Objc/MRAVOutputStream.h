//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContext, AVOutputContextCommunicationChannel;

__attribute__((visibility("hidden")))
@interface MRAVOutputStream : MRAVBufferedOutputStream
{
    AVOutputContextCommunicationChannel *_communicationChannel;
    BOOL _channelIsOpen;
    AVOutputContext *_outputContext;
}

@property (readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;

- (void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithOutputContext:(id)arg1;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

