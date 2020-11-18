//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNLaunchServicesAdapter, OS_os_log;

@interface CNLaunchServices : NSObject
{
    id<CNLaunchServicesAdapter> _adapter;
    NSObject<OS_os_log> *_log;
}

@property (strong, nonatomic) id<CNLaunchServicesAdapter> adapter; // @synthesize adapter=_adapter;
@property (strong, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;

- (void).cxx_destruct;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)init;
- (id)initWithAdapter:(id)arg1;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivityData:(id)arg1 inApplication:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

