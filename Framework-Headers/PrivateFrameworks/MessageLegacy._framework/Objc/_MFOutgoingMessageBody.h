//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFMessageBody.h>

#import <MessageLegacy/MFCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    BOOL _lastNewLine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)appendData:(id)arg1;
- (unsigned long long)count;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;
- (BOOL)isLastCharacterNewLine;
- (id)rawData;

@end

