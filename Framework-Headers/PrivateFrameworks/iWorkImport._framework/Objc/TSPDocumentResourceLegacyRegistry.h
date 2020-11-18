//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSPDocumentResourceLegacyRegistry : NSObject
{
    NSDictionary *_metadataDictionary;
}

@property (readonly) NSDictionary *metadataDictionary;

+ (void)setSharedSageRegistryMetadataURL:(id)arg1;
+ (void)setSharedTangierRegistryMetadataURL:(id)arg1;
+ (id)sharedSageRegistry;
+ (id)sharedSageRegistryMetadataURL;
+ (id)sharedTangierRegistry;
+ (id)sharedTangierRegistryMetadataURL;
- (void).cxx_destruct;
- (id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1;
- (id)init;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithMetadataURL:(id)arg1;
- (id)metadataDictionaryKeyForRelativePath:(id)arg1;

@end

