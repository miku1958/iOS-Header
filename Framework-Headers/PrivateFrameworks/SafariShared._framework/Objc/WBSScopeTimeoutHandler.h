//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSScopeTimeoutHandler : NSObject
{
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithTimeout:(double)arg1 autoBugCaptureDomain:(id)arg2 detectedProcess:(id)arg3 context:(id)arg4;
- (id)initWithTimeout:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end

