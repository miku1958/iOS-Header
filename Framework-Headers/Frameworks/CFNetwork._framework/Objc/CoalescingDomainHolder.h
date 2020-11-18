//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PathPolicyManager;

__attribute__((visibility("hidden")))
@interface CoalescingDomainHolder : NSObject
{
    struct CoalescingDomain _coalescingDomain;
    PathPolicyManager *_pathPolicyManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCoalescingConnectionHost:(id)arg1 withDNSRecord:(id)arg2 peerCerts:(id)arg3 trustData:(id)arg4 description:(id)arg5;
- (shared_ptr_2a8298cb)coalescingCoalescingConnectionHost:(id)arg1 ipAddrs:(id)arg2;
- (id)coalescingConnectionHostForRequestHost:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)pathIDForPath:(void *)arg1 lookup:(BOOL)arg2;
- (BOOL)removeCCEntryForHost:(id)arg1;
- (shared_ptr_2a8298cb)updateCoalescingConnectionWithHost:(id)arg1 ipAddrs:(id)arg2;

@end

