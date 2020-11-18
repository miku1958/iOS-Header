//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLChangeBatch, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableIdentifiers;
    NSMutableSet *_mutableUntrustableIndentifiers;
    BOOL _full;
    BOOL _batchCanLowerQuota;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

@property (readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
@property (readonly, nonatomic) BOOL batchCanLowerQuota; // @synthesize batchCanLowerQuota=_batchCanLowerQuota;
@property (copy, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
@property (nonatomic, getter=isFull) BOOL full; // @synthesize full=_full;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (id)uploadIdentifiers;

@end

