//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSItemProvider, NSString;

@protocol UIActivityItemsConfigurationReading <NSObject>

@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;


@optional
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)arg1 key:(NSString *)arg2;
- (id)activityItemsConfigurationMetadataForKey:(NSString *)arg1;
- (NSItemProvider *)activityItemsConfigurationPreviewForItemAtIndex:(long long)arg1 intent:(NSString *)arg2 suggestedSize:(struct CGSize)arg3;
- (BOOL)activityItemsConfigurationSupportsInteraction:(NSString *)arg1;
@end

