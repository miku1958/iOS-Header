//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIProxyApplicationSceneSettings-Protocol.h>

@class NSString;

@interface CRSUIProxyApplicationSceneSettings : UIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly) Class superclass;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
