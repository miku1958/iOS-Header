//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    BOOL isCompact;
    long long layerCount;
    long long dataCodewordCount;
}

@property (readonly) long long dataCodewordCount; // @synthesize dataCodewordCount;
@property (readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
@property (readonly) BOOL isCompact; // @synthesize isCompact;
@property (readonly) long long layerCount; // @synthesize layerCount;

+ (id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
- (BOOL)isValid;

@end

