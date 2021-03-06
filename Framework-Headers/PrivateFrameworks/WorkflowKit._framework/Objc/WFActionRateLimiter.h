//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WFActionRateLimiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

@property (strong, nonatomic) NSDictionary *attempts;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

+ (void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (void)modify:(CDUnknownBlockType)arg1;

@end

