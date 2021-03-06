//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface SOADSiteDiscovery : NSObject
{
    BOOL _requireTLSForLDAP;
    NSString *_realm;
    NSOperationQueue *_queue;
}

@property (strong, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property (nonatomic) BOOL requireTLSForLDAP; // @synthesize requireTLSForLDAP=_requireTLSForLDAP;

- (void).cxx_destruct;
- (void)discoverADInfoUsingSourceAppBundleIdentifier:(id)arg1 auditTokenData:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithRealm:(id)arg1 requireTLSForLDAP:(BOOL)arg2;

@end

