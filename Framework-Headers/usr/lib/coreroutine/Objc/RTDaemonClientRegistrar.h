//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/NSCopying-Protocol.h>
#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTDaemonClientRegistrarProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTDaemonClientRegistrar : NSObject <NSSecureCoding, RTDaemonClientRegistrarProtocol, NSCopying>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)countOfPendingInvocations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)invocationsPending;
- (BOOL)registered;

@end

