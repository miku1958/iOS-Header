//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject
{
    NSDictionary *_consumerSubTypeAssetMappings;
}

+ (id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1;
- (id)getAtxToolDescription;
- (id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1;
- (id)init;

@end

