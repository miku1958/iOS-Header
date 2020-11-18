//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class AVOutputContext, AVOutputContextCommunicationChannel;

@interface MRAVOutputStream : MRAVBufferedOutputStream
{
    AVOutputContextCommunicationChannel *_communicationChannel;
    BOOL _channelOpen;
    BOOL _channelIsOpen;
    AVOutputContext *_outputContext;
    long long _connectionType;
}

@property (nonatomic) BOOL channelIsOpen; // @synthesize channelIsOpen=_channelIsOpen;
@property (readonly, nonatomic, getter=isChannelOpen) BOOL channelOpen; // @synthesize channelOpen=_channelOpen;
@property (readonly, nonatomic) AVOutputContextCommunicationChannel *communicationChannel; // @synthesize communicationChannel=_communicationChannel;
@property (readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property (readonly, nonatomic) AVOutputContext *outputContext; // @synthesize outputContext=_outputContext;

- (void).cxx_destruct;
- (void)_outputContextDidCloseCommunicationChannelNotification:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)hasSpaceAvailable;
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;
- (id)initToMemory;
- (id)initWithCommunicationChannel:(id)arg1;
- (id)initWithOutputContext:(id)arg1 connectionType:(long long)arg2;
- (id)initWithURL:(id)arg1 append:(BOOL)arg2;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end

