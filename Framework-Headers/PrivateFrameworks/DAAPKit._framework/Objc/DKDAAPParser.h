//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream, NSMutableArray;
@protocol DKDAAPParserDelegate;

@interface DKDAAPParser : NSObject
{
    BOOL _canceled;
    id<DKDAAPParserDelegate> _delegate;
    long long _state;
    NSInputStream *_inputStream;
    NSMutableArray *_containerStack;
}

@property (nonatomic, getter=isCanceled) BOOL canceled; // @synthesize canceled=_canceled;
@property (readonly, nonatomic) NSMutableArray *containerStack; // @synthesize containerStack=_containerStack;
@property (weak, nonatomic) id<DKDAAPParserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_callDelegateDidCancel;
- (void)_callDelegateDidEndContainerCode:(unsigned int)arg1;
- (void)_callDelegateDidFailWithError:(id)arg1;
- (void)_callDelegateDidFinish;
- (void)_callDelegateDidParseDataCode:(unsigned int)arg1 bytes:(char *)arg2 contentLength:(unsigned int)arg3;
- (void)_callDelegateDidStart;
- (void)_callDelegateDidStartContainerCode:(unsigned int)arg1 contentLength:(unsigned int)arg2;
- (BOOL)_callDelegateShouldParseCode:(unsigned int)arg1;
- (BOOL)_callDelegateShouldParseCodeAsContainer:(unsigned int)arg1;
- (void)_verifyExpectedEOF;
- (void)cancel;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)parse;

@end

