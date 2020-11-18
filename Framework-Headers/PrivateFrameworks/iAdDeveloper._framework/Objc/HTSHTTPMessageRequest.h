//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage
{
    NSString *_requestMethod;
    NSURL *_requestURL;
}

@property (copy, nonatomic) NSString *requestMethod; // @synthesize requestMethod=_requestMethod;
@property (copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;

- (struct __CFHTTPMessage *)copyMessage;
- (void)dealloc;
- (id)initWithRequest:(struct __CFHTTPMessage *)arg1;
- (BOOL)responseCanUseGZip;
- (id)responseWithStatus:(int)arg1;

@end
