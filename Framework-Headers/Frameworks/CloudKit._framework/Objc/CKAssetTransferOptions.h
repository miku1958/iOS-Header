//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CKAssetTransferOptions : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_sparseAware;
    NSNumber *_shouldFetchAssetContent;
    NSNumber *_shouldFetchAssetContentInMemory;
}

@property (copy, nonatomic) NSNumber *shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (copy, nonatomic) NSNumber *shouldFetchAssetContentInMemory; // @synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSNumber *sparseAware; // @synthesize sparseAware=_sparseAware;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

