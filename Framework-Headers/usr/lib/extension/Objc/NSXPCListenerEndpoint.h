//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <extension/NSSecureCoding-Protocol.h>

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>
{
    void *_internal;
}

+ (BOOL)supportsSecureCoding;
- (id)_endpoint;
- (id)_initWithConnection:(id)arg1;
- (void)_setEndpoint:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

