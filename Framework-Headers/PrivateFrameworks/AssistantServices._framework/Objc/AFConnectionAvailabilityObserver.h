//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNetworkAvailabilityObserver-Protocol.h>

@class NSString;

@interface AFConnectionAvailabilityObserver : NSObject <AFNetworkAvailabilityObserver>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)networkAvailability:(id)arg1 isAvailable:(BOOL)arg2;

@end

