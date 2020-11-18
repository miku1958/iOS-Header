//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CATHTTPMessageParserDelegate;

@interface CATHTTPMessageParser : NSObject
{
    struct __CFHTTPMessage *mCurrentMessage;
    NSDictionary *mAllHeaderFields;
    id<CATHTTPMessageParserDelegate> _delegate;
}

@property (weak, nonatomic) id<CATHTTPMessageParserDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)encodeData:(id)arg1;
- (void).cxx_destruct;
- (BOOL)appendBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)dealloc;
- (void)delegateDidReceiveData:(id)arg1;

@end

