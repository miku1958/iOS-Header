//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSInvocation;

@interface _MPServerDelayedInvocation : NSObject
{
    int _clientPID;
    CDStruct_6ad76789 *_clientAuditToken;
    id _context;
    NSInvocation *_invocation;
}

@property (nonatomic) CDStruct_6ad76789 *clientAuditToken; // @synthesize clientAuditToken=_clientAuditToken;
@property (nonatomic) int clientPID; // @synthesize clientPID=_clientPID;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;


@end

