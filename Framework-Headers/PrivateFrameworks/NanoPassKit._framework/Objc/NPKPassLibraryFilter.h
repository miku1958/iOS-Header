//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, PKEntitlementWhitelist;

@interface NPKPassLibraryFilter : NSObject
{
    NSXPCConnection *_connection;
    PKEntitlementWhitelist *_whitelist;
}

@property (readonly) BOOL allowsSilentAdd;
@property (strong) NSXPCConnection *connection; // @synthesize connection=_connection;
@property (strong) PKEntitlementWhitelist *whitelist; // @synthesize whitelist=_whitelist;

- (void).cxx_destruct;
- (BOOL)_entitledForPassTypeID:(id)arg1 teamID:(id)arg2;
- (BOOL)allowAccessToPass:(id)arg1;
- (id)filterPassIfNeeded:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

