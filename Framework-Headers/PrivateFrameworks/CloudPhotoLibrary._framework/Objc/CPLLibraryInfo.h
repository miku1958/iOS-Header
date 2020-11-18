//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_assetCounts;
    CPLFeatureVersionHistory *_featureVersionHistory;
    NSData *_accountFlagsData;
    CPLMomentShare *_momentShare;
}

@property (readonly, nonatomic) CPLAccountFlags *accountFlags;
@property (copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property (copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
@property (strong, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property (strong, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;

+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;

@end
