//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFHomeKitDispatcher, NAFuture, NSURL;

@interface HFURLComponents : NSObject
{
    NSURL *_url;
    HFHomeKitDispatcher *_homeKitDispatcher;
}

@property (readonly, nonatomic) unsigned long long destination; // @dynamic destination;
@property (readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher; // @synthesize homeKitDispatcher=_homeKitDispatcher;
@property (readonly, nonatomic) NAFuture *homeKitObjectFuture; // @dynamic homeKitObjectFuture;
@property (readonly, nonatomic) unsigned long long secondaryDestination;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (id)aboutResidentDeviceURL;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;
+ (id)locationPrivacyURL;
+ (id)musicLoginURL;
+ (id)musicPrivacyURL;
+ (id)siriPrivacyURL;
- (void).cxx_destruct;
- (id)_homeKitIdentifier;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;

@end

