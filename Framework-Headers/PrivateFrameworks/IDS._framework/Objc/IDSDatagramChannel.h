//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IDSDataChannelLinkContext, NSArray, _IDSDatagramChannel;

@interface IDSDatagramChannel : NSObject
{
    _IDSDatagramChannel *_internal;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;

- (void)addNewIDSDataChannelLinkWithAttributes:(char *)arg1;
- (void)close;
- (void)dealloc;
- (id)description;
- (id)initWithDestination:(id)arg1;
- (id)initWithSocketDescriptor:(int)arg1;
- (void)invalidate;
- (void)processMetadataForDatagram:(char *)arg1 size:(unsigned long long)arg2 datagramInfo:(CDStruct_ec0e349a *)arg3;
- (void)readDatagramWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)readyToRead;
- (void)removeIDSDataChannelLinkContext:(BOOL)arg1;
- (void)selectDefaultLink:(BOOL)arg1;
- (void)sendEventConnectedWithDummyLinkInfo;
- (void)sendMetadata;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1;
- (void)setReadHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (int)underlyingFileDescriptor;
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_ec0e349a)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeDatagrams:(const void **)arg1 datagramSizes:(unsigned int *)arg2 datagramInfo:(CDStruct_ec0e349a)arg3 datagramCount:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

