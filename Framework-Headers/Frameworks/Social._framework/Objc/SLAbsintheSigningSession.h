//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SLAbsintheSigningSession : NSObject
{
    NSString *_certURL;
    NSString *_sessionURL;
}

- (void).cxx_destruct;
- (id)_urlEncodedString:(id)arg1;
- (void)dealloc;
- (BOOL)establish;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;

@end
