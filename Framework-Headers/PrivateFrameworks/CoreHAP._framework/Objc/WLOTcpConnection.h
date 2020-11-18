//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHAP/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSOutputStream, NSString;
@protocol WLOTcpConnectionDelegate;

@interface WLOTcpConnection : NSObject <NSStreamDelegate>
{
    id<WLOTcpConnectionDelegate> _delegate;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WLOTcpConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (strong, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_readData:(BOOL)arg1;
- (long long)_writeData:(id)arg1;
- (void)close;
- (void)closeStream:(id)arg1;
- (id)initWithHost:(id)arg1 port:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)initWithNetService:(id)arg1;
- (BOOL)open;
- (BOOL)openStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (long long)writeData:(id)arg1;

@end
