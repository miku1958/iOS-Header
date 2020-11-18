//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, PXAssetCollectionActionManager, PXCMMContext;
@protocol PXCMMInvitationParticipant, PXDisplayAsset, PXUIImageProvider;

@protocol PXCMMInvitation <NSObject, PXMediaTypeAggregating>

@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<PXCMMInvitationParticipant> owner;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) long long shareType;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;

- (void)acceptWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (PXCMMContext *)contextForActivityType:(unsigned long long)arg1;
@end

