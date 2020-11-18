//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProviderDuet.h>

#import <coreroutine/RTDataProviderProtocol-Protocol.h>

@class NSString;

@interface RTDataProviderStark : RTDataProviderDuet <RTDataProviderProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerName;
+ (id)sharedInstance;
- (id)init;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventClasses;
- (BOOL)supportsEventClass:(Class)arg1;

@end

