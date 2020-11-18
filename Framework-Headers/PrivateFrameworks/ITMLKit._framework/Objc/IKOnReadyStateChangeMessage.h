//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface IKOnReadyStateChangeMessage : NSObject
{
    unsigned int _readyState;
    unsigned int _statusCode;
    NSString *_statusText;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) unsigned int readyState; // @synthesize readyState=_readyState;
@property (readonly, nonatomic) unsigned int statusCode; // @synthesize statusCode=_statusCode;
@property (copy, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;

- (void).cxx_destruct;
- (id)initWithReadyState:(unsigned int)arg1 statusCode:(unsigned int)arg2 statusText:(id)arg3 error:(id)arg4;

@end

