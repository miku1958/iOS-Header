//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class AMSBag, AMSBagKeySet, NSString;

@protocol AMSBagConsumer <NSObject>
+ (AMSBagKeySet *)bagKeySet;
+ (NSString *)bagSubProfile;
+ (NSString *)bagSubProfileVersion;

@optional
+ (AMSBag *)createBagForSubProfile;
@end
