//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSPrivacyServiceProtocol-Protocol.h>

@class NSArray, NSOperationQueue, NSString;

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol>
{
    NSString *_service;
    NSOperationQueue *_privateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *knownAppBundles;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (copy, nonatomic) NSString *service; // @synthesize service=_service;
@property (readonly) Class superclass;

+ (id)sharedPrivacyFacade;
- (void).cxx_destruct;
- (id)init;
- (id)initWithService:(id)arg1;
- (BOOL)isAccessGrantedForAuditToken:(CDStruct_4c969caf)arg1;
- (BOOL)isAccessGrantedForBundle:(struct __CFBundle *)arg1;
- (void)preflightCheckForProcessIdentifier:(int)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessForAuditToken:(CDStruct_4c969caf)arg1 processIdentifier:(int)arg2 identityProviderDisplayName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)reset;
- (BOOL)setAccessGranted:(BOOL)arg1 forAuditToken:(CDStruct_4c969caf)arg2;
- (BOOL)setAccessGranted:(BOOL)arg1 forBundle:(struct __CFBundle *)arg2;

@end

