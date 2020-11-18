//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXAppInstallCoordinator, NSError;

@protocol IXAppInstallCoordinatorObserver <NSObject>

@optional
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldBeginRestoringUserData:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPause:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPrioritize:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldResume:(IXAppInstallCoordinator *)arg1;
- (void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
@end

