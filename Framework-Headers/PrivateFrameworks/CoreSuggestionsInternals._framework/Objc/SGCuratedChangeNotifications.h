//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGCuratedChangeNotifications : NSObject
{
}

+ (void)_addObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;
+ (id)_getListener:(Class)arg1;
+ (id)_getListenerByClassMap;
+ (void)addAddressBookObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;
+ (void)addCalendarObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;

@end

