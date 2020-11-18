//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface OspreyMessageReader : NSObject
{
    CDUnknownBlockType _messageHandler;
    unsigned long long _readerState;
    unsigned long long _messageSequence;
    BOOL _currentMessageCompressed;
    unsigned long long _currentMessageSize;
    NSMutableData *_messageBuffer;
}

- (void).cxx_destruct;
- (void)_produceMessageBody:(id)arg1;
- (id)initWithMessageHandler:(CDUnknownBlockType)arg1;
- (void)readData:(id)arg1;

@end
