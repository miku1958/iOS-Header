//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue, TPSTelephonySubscription;

@protocol TPSTelephonyClient <NSObject>

@property (weak, nonatomic) id delegate;

- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSString *)localizedCarrierBundleStringForKey:(NSString *)arg1 subscription:(id<TPSTelephonySubscription>)arg2 error:(id *)arg3;
@end
