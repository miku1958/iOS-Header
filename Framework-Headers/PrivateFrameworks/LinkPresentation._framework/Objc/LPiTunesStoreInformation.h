//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, SKCloudServiceController;

__attribute__((visibility("hidden")))
@interface LPiTunesStoreInformation : NSObject
{
    SKCloudServiceController *_cloudServiceController;
    NSMapTable *_changeHandlers;
    unsigned long long _capabilities;
    NSString *_storefrontIdentifier;
}

@property (readonly) unsigned long long capabilities;
@property (readonly, copy) NSString *storefrontIdentifier;

+ (unsigned long long)_convertCapabilities:(unsigned long long)arg1;
+ (id)_convertNewStorefrontIdentifier:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (void)_capabilitiesDidChangeNotification;
- (void)_notifyChangeHandlers;
- (void)_setCapabilities:(unsigned long long)arg1;
- (void)_setStorefrontIdentifier:(id)arg1;
- (void)_storefrontDidChangeNotification;
- (id)init;
- (void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)arg1;
- (unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1;

@end
