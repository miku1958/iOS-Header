//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationExtensionLoader : NSObject
{
    NSMutableDictionary *_loadedHostViewControllerCache;
}

@property (strong, nonatomic) NSMutableDictionary *loadedHostViewControllerCache; // @synthesize loadedHostViewControllerCache=_loadedHostViewControllerCache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)clearCacheForNotificationRequest:(id)arg1;
- (id)init;
- (void)loadViewControllerForExtension:(id)arg1 notificationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end

