//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/NSCopying-Protocol.h>
#import <RunningBoardServices/NSSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSXPCCoding-Protocol.h>

@class NSString, RBSAuditToken;

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCCoding, NSSecureCoding, NSCopying>
{
    unsigned int _port;
    struct os_unfair_lock_s _lock;
    int _pid;
    RBSAuditToken *_auditToken;
}

@property (readonly, nonatomic) RBSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property (readonly) Class superclass;

+ (id)portForSelf;
+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)invalidate;
- (BOOL)isUsable;
- (unsigned int)port;

@end

