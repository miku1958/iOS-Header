//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSString;

@interface ISClient : NSObject
{
    NSString *_appleClientVersions;
    NSString *_appleClientApplication;
    NSString *_identifier;
    NSString *_partnerHeader;
    NSString *_userAgent;
    NSDictionary *_clientProvidedHeaders;
    NSLock *_lock;
}

@property (copy) NSString *appleClientApplication; // @synthesize appleClientApplication=_appleClientApplication;
@property (readonly) NSString *appleClientVersions; // @synthesize appleClientVersions=_appleClientVersions;
@property (copy) NSDictionary *clientProvidedHeaders; // @synthesize clientProvidedHeaders=_clientProvidedHeaders;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property (copy) NSString *partnerHeader; // @synthesize partnerHeader=_partnerHeader;
@property (copy) NSString *userAgent; // @synthesize userAgent=_userAgent;

+ (id)currentClient;
- (void).cxx_destruct;
- (id)_appleClientVersions;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)localStoreFrontID;

@end
