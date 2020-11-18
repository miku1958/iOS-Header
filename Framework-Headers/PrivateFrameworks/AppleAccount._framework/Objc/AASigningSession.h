//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AASigningSession : NSObject
{
    struct NACContextOpaque_ *_context;
    NSString *_certURL;
    NSString *_sessionURL;
    int _error;
}

@property (readonly, nonatomic) int error; // @synthesize error=_error;

+ (id)_badURLError;
+ (id)establishedSessionWithCertURL:(id)arg1 sessionURL:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)establishSession;
- (id)initWithCertURL:(id)arg1 sessionURL:(id)arg2;
- (id)signatureForData:(id)arg1;

@end

