//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject
{
    BOOL _expectsResponse;
    NSString *_identifier;
    CDUnknownBlockType _errorHandler;
    NSObject<OS_dispatch_source> *_timeoutTimer;
}

@property (readonly, copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property (readonly) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property (readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;

@end

