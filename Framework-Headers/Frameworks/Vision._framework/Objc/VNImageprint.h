//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>
#import <Vision/VNSerializing-Protocol.h>
#import <Vision/VNSerializingInternal-Protocol.h>

@class VNMPImageDescriptor;

@interface VNImageprint : NSObject <VNSerializingInternal, NSCopying, NSSecureCoding, VNSerializing, VNRequestRevisionProviding>
{
    unsigned long long _requestRevision;
    unsigned long long _version;
    VNMPImageDescriptor *_descriptor;
    unsigned long long _type;
}

@property (strong, nonatomic) VNMPImageDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

+ (unsigned long long)currentVersion;
+ (BOOL)isSerializedImageprintCompatibleWithCurrentVersion:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)distanceToImageprint:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageDescriptor:(id)arg1 type:(unsigned long long)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithState:(id)arg1 error:(id *)arg2;
- (id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)serializeStateAndReturnError:(id *)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id *)arg3;

@end

