//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HFHomeKitDispatcher, NAFuture, NSURL;

@interface HFURLComponents : NSObject
{
    NSURL *_URL;
    HFHomeKitDispatcher *_homeKitDispatcher;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) unsigned long long destination; // @dynamic destination;
@property (readonly, nonatomic) HFHomeKitDispatcher *homeKitDispatcher; // @synthesize homeKitDispatcher=_homeKitDispatcher;
@property (readonly, nonatomic) NAFuture *homeKitObjectFuture; // @dynamic homeKitObjectFuture;
@property (readonly, nonatomic) unsigned long long secondaryDestination;

+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (id)aboutResidentDeviceURL;
+ (id)fixSymptomURLForAccessory:(id)arg1 symptom:(id)arg2;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;
+ (BOOL)isHomeAppURL:(id)arg1;
+ (id)locationPrivacyURL;
+ (id)musicLoginURL;
+ (id)musicPrivacyURL;
+ (id)siriPrivacyURL;
+ (id)symptomFromURL:(id)arg1 accessory:(id)arg2;
- (void).cxx_destruct;
- (id)_homeKitIdentifier;
- (id)description;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;
- (id)valueForParameter:(id)arg1;

@end

