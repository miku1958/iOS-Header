//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepHealthDaemon/HDProfileExtension-Protocol.h>

@class HDHealthStoreClient, NSString;
@protocol HDFeatureAvailabilityExtension;

@protocol HDFeatureAvailabilityExtensionProvider <HDProfileExtension>
- (id<HDFeatureAvailabilityExtension>)featureAvailabilityExtensionForFeatureIdentifier:(NSString *)arg1 client:(HDHealthStoreClient *)arg2;
@end

