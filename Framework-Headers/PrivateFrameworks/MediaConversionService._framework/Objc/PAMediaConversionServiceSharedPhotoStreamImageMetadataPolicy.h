//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceDefaultImageMetadataPolicy.h>

@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy
{
}

+ (void)_filterImageProperties:(id)arg1 metadataWithKey:(id)arg2 preserveProperties:(id)arg3;
+ (id)policyWithAllowLocation:(BOOL)arg1;
+ (BOOL)supportsSecureCoding;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;

@end

