//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCContainerCellularSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id<NSObject> _accountDidChangeNotificationObserver;
}

+ (id)_notifAccountStore;
+ (id)containerCellularSettings;
- (void).cxx_destruct;
- (void)_accountDidChange;
- (void)dealloc;
- (id)init;
- (BOOL)isCellularEnabled;

@end
