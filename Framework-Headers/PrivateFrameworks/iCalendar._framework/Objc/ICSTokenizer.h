//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSPushbackStream, NSMutableData;

@interface ICSTokenizer : NSObject
{
    ICSPushbackStream *_data;
    NSMutableData *_token;
    int _tokenType;
    int _expectedNextTokenType;
    BOOL _printedICS;
    int _logCount;
}

@property int logCount; // @synthesize logCount=_logCount;
@property BOOL printedICS; // @synthesize printedICS=_printedICS;

- (void).cxx_destruct;
- (BOOL)consumeChar:(BOOL)arg1;
- (BOOL)consumeEOL;
- (BOOL)consumeEscaped:(const char *)arg1;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropName;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (id)currentToken;
- (id)initWithCompressedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)nextToken;
- (int)tokenType;

@end

