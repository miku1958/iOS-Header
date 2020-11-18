//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIQRCodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    long long symbolVersion;
    unsigned char maskPattern;
    long long errorCorrectionLevel;
}

@property (readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
@property (readonly) long long errorCorrectionLevel; // @synthesize errorCorrectionLevel;
@property (readonly) unsigned char maskPattern; // @synthesize maskPattern;
@property (readonly) long long symbolVersion; // @synthesize symbolVersion;

+ (id)descriptorWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 symbolVersion:(long long)arg2 maskPattern:(unsigned char)arg3 errorCorrectionLevel:(long long)arg4;
- (BOOL)isValid;

@end
