//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/NSObject-Protocol.h>

@class CATHTTPMessageParser, NSData;

@protocol CATHTTPMessageParserDelegate <NSObject>

@optional
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseData:(NSData *)arg2;
@end

