//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface HDFHIRJSONObject : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_JSONObject;
    NSString *_FHIRVersion;
    NSURL *_sourceURL;
}

@property (readonly, copy, nonatomic) NSString *FHIRVersion; // @synthesize FHIRVersion=_FHIRVersion;
@property (readonly, copy, nonatomic) NSDictionary *JSONObject; // @synthesize JSONObject=_JSONObject;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *detectedResourceType;
@property (readonly, copy, nonatomic) NSString *sourceString;
@property (readonly, copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;

+ (id)_dataFromJSONObject:(id)arg1 JSONOptions:(unsigned long long)arg2;
+ (id)objectWithResourceData:(id)arg1 error:(id *)arg2;
+ (id)resourceTypeOfJSONObject:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dataWithJSONOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObject:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

