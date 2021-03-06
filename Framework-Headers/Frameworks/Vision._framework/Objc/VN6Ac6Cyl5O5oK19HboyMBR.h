//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelImageprint.h>

@interface VN6Ac6Cyl5O5oK19HboyMBR : VNEspressoModelImageprint
{
    unsigned long long _imageSignatureprintType;
}

@property (readonly) unsigned long long imageSignatureprintType; // @synthesize imageSignatureprintType=_imageSignatureprintType;

+ (BOOL)_signaturePrintTypeSupported:(unsigned long long)arg1;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(const void *)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 imageSignatureprintType:(unsigned long long)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long *)arg2 error:(id *)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (unsigned long long)serializedLength;

@end

