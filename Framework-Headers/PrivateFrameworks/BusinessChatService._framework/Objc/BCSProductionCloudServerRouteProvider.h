//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSCloudServerRouteProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSProductionCloudServerRouteProvider : NSObject <BCSCloudServerRouteProvider>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)apiKeyWithType:(long long)arg1;
- (id)containerWithType:(long long)arg1;
- (id)environmentWithType:(long long)arg1;
- (id)urlForLookupActionAPIWithType:(long long)arg1;
- (id)urlForQueryActionAPIWithType:(long long)arg1;

@end

