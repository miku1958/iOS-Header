//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaConversionService/NSSecureCoding-Protocol.h>

@interface PAMediaConversionServiceImageMetadataPolicy : NSObject <NSSecureCoding>
{
}

+ (id)standardPolicy;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;

@end

