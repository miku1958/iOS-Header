//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNLSApplicationWorkspace-Protocol.h>

@class NSString;
@protocol CNSchedulerProvider;

@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace>
{
    id<CNSchedulerProvider> _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly) Class superclass;

+ (id)inProcessLaunchServices;
+ (id)launchServices;
+ (id)remoteAdapter;
- (void).cxx_destruct;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

