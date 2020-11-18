//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSMachPortSendRight.h>

@class BSAuditToken;

@interface BSMachPortTaskNameRight : BSMachPortSendRight
{
    int _pid;
    BSAuditToken *_auditToken;
}

@property (readonly, strong, nonatomic) BSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, nonatomic) int pid; // @synthesize pid=_pid;

+ (BOOL)supportsSecureCoding;
+ (id)taskNameForPID:(int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

