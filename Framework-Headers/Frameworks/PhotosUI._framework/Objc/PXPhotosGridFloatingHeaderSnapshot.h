//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPhotosGridFloatingHeaderInfo-Protocol.h>

@class NSAttributedString, NSString, PXAssetCollectionReference;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>
{
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    PXAssetCollectionReference *_assetCollectionReference;
}

@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // @synthesize assetCollectionReference=_assetCollectionReference;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL floatingEnableOverview;
@property (readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property (readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSAttributedString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetCollectionReference:(id)arg3;

@end

