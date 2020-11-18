//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface PSAppDataUsagePolicyCache : NSObject
{
    NSCache *_policyCache;
    struct __CTServerConnection *_ctServerConnection;
}

@property (strong, nonatomic) struct __CTServerConnection *ctServerConnection; // @synthesize ctServerConnection=_ctServerConnection;
@property (strong, nonatomic) NSCache *policyCache; // @synthesize policyCache=_policyCache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fetchUsagePolicyFor:(id)arg1;
- (id)init;
- (id)initPrivate;
- (BOOL)setCellularUsagePolicy:(id)arg1 forBundle:(id)arg2;
- (BOOL)setUsagePoliciesForBundle:(id)arg1 cellular:(BOOL)arg2 wifi:(BOOL)arg3;
- (id)usagePolicyFor:(id)arg1;
- (void)willEnterForeground;

@end
