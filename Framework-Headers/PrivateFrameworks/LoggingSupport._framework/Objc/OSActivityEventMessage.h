//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent
{
    NSMutableArray *_argumentData;
    NSData *_bufferPrivateData;
    NSData *_bufferData;
}

@property (strong) NSMutableArray *argumentData; // @synthesize argumentData=_argumentData;
@property (readonly) NSMutableArray *arguments;
@property (strong) NSData *bufferData; // @synthesize bufferData=_bufferData;
@property (strong) NSData *bufferPrivateData; // @synthesize bufferPrivateData=_bufferPrivateData;
@property (readonly, copy) NSString *format;

- (void).cxx_destruct;
- (void)fillEventData:(const char *)arg1 length:(unsigned long long)arg2 privateBuffer:(const char *)arg3 length:(unsigned long long)arg4;

@end

