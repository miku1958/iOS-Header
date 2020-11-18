//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPNondurableMediaItem.h>

@class MPStoreItemMetadata;

@interface MPStorePlatformMediaItem : MPNondurableMediaItem
{
    MPStoreItemMetadata *_storeItemMetadata;
}

@property (strong, nonatomic) MPStoreItemMetadata *storeItemMetadata; // @synthesize storeItemMetadata=_storeItemMetadata;

+ (id)defaultPropertyValues;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_valueFromMetadataForProperty:(id)arg1;
- (id)artworkCatalog;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreItemMetadata:(id)arg1;
- (id)valueForProperty:(id)arg1;

@end
