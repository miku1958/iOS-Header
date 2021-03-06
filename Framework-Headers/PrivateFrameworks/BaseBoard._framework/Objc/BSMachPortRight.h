//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>
#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    int _owner;
    NSString *_trace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *trace; // @synthesize trace=_trace;

+ (struct _xpc_type_s *)_decodeType;
+ (id)_descriptionForPort:(unsigned int)arg1 owner:(int)arg2 tag:(id)arg3 trace:(id)arg4;
+ (id)_rightDescription;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (BOOL)_unsafe_isUsablePort:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_lock_encodePort:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (BOOL)isUsable;
- (unsigned int)port;
- (unsigned int)rawPort;

@end

