//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIBarcodeDescriptor.h>

@class NSData;

@interface CIPDF417CodeDescriptor : CIBarcodeDescriptor
{
    NSData *errorCorrectedPayload;
    BOOL isCompact;
    long long rowCount;
    long long columnCount;
}

@property (readonly) long long columnCount; // @synthesize columnCount;
@property (readonly) NSData *errorCorrectedPayload; // @synthesize errorCorrectedPayload;
@property (readonly) BOOL isCompact; // @synthesize isCompact;
@property (readonly) long long rowCount; // @synthesize rowCount;

+ (id)descriptorWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(BOOL)arg2 rowCount:(long long)arg3 columnCount:(long long)arg4;
- (BOOL)isValid;

@end

