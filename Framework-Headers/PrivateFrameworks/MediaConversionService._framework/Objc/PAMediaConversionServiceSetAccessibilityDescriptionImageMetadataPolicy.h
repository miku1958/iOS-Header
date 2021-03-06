//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy
{
    NSString *_accessibilityDescription;
}

@property (copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;

+ (id)policyWithAccessibilityDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;

@end

