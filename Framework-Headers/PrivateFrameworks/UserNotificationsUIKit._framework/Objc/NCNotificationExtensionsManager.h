//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject
{
    NCNotificationExtensionCache *_extensionsCache;
    id _extensionsDiscoveryToken;
}

@property (strong, nonatomic) NCNotificationExtensionCache *extensionsCache; // @synthesize extensionsCache=_extensionsCache;
@property (strong, nonatomic) id extensionsDiscoveryToken; // @synthesize extensionsDiscoveryToken=_extensionsDiscoveryToken;

+ (void)initialize;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_beginMatchingExtensions;
- (id)_matchingAttributes;
- (void)_stopMatchingExtensions;
- (id)extensionForNotificationRequest:(id)arg1;
- (id)init;

@end
