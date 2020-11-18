//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDCancelling-Protocol.h>

@class CKAsset, CKDCancelTokenGroup, CKDMMCSRequestOptions, CKDProgressTracker, CKPackage, NSArray, NSError, NSIndexSet;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKPackageDownloadTask : NSObject <CKDCancelling>
{
    NSError *_error;
    CKPackage *_package;
    CKAsset *_manifestAsset;
    NSArray *_sectionAssets;
    id _itemIndices;
    NSIndexSet *_sectionIndices;
    CKDProgressTracker *_progressTracker;
    CKDMMCSRequestOptions *_MMCSRequestOptions;
    NSObject<OS_dispatch_group> *_group;
    CKDCancelTokenGroup *_cancelTokens;
}

@property (strong, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (strong, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
@property (strong) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property (strong, nonatomic) id itemIndices; // @synthesize itemIndices=_itemIndices;
@property (strong, nonatomic) CKAsset *manifestAsset; // @synthesize manifestAsset=_manifestAsset;
@property (readonly, nonatomic) CKPackage *package; // @synthesize package=_package;
@property (strong, nonatomic) CKDProgressTracker *progressTracker; // @synthesize progressTracker=_progressTracker;
@property (strong, nonatomic) NSArray *sectionAssets; // @synthesize sectionAssets=_sectionAssets;
@property (strong, nonatomic) NSIndexSet *sectionIndices; // @synthesize sectionIndices=_sectionIndices;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2;

@end

