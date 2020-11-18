//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceRegistry : NSObject
{
    NSDictionary *_metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (void)setSharedRegistryMetadataURL:(id)arg1;
+ (id)sharedRegistry;
+ (id)sharedRegistryMetadataURL;
- (void).cxx_destruct;
- (id)documentResourceInfoForDigestString:(id)arg1 locator:(id)arg2;
- (id)documentResourceInfosForTags:(id)arg1;
- (id)init;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)localStrategyProviderForDocumentResourceInfos:(id)arg1;

@end

