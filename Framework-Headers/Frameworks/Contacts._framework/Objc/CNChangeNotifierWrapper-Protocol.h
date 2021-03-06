//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/NSObject-Protocol.h>

@class NSString;
@protocol CNChangeNotificationReceiver;

@protocol CNChangeNotifierWrapper <NSObject>
- (void)addObserver:(id<CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;
- (void)postNotification:(NSString *)arg1;
- (void)removeObserver:(id<CNChangeNotificationReceiver>)arg1 notification:(NSString *)arg2;
@end

