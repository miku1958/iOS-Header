//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_trust-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_trust : NSObject <OS_sec_trust>
{
    struct __SecTrust *trust;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1;

@end
