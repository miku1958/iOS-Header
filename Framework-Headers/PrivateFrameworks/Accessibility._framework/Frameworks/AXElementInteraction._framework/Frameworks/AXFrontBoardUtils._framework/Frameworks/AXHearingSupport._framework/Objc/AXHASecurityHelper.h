//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AXHAAccessQueue, NSArray;

@interface AXHASecurityHelper : NSObject
{
    struct __SecIdentity *_appleIDIdentity;
    NSArray *_certificateDescription;
    AXHAAccessQueue *_securityQueue;
}

@property (strong, nonatomic) NSArray *certificateDescription; // @synthesize certificateDescription=_certificateDescription;
@property (strong, nonatomic) AXHAAccessQueue *securityQueue; // @synthesize securityQueue=_securityQueue;

+ (id)sharedHelper;
- (id)certificateChainForIdentity:(struct __SecIdentity *)arg1;
- (id)certificateChainFromTrust:(struct __SecTrust *)arg1;
- (void)dealloc;
- (id)init;
- (void)prepareHelper;
- (BOOL)shouldTrustStream:(id)arg1;
- (id)trustChain;
- (BOOL)trustChainAvailable;

@end

