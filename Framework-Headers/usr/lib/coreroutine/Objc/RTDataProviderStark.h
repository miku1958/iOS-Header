//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProviderDuet.h>

@interface RTDataProviderStark : RTDataProviderDuet
{
}

+ (id)providerName;
+ (id)sharedInstance;
- (id)initWithName:(id)arg1 purgeManager:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventClasses;
- (id)supportedEventStreams;
- (BOOL)supportsEventClass:(Class)arg1;

@end
