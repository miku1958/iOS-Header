//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGAXElement-Protocol.h>

@class NSObject, NSString;
@protocol PXAnonymousView, PXDisplayAsset;

@protocol PXGAXInfo <PXGAXElement>

@property (readonly, nonatomic) id<PXDisplayAsset> axAsset;
@property (readonly, nonatomic) long long axContentKind;
@property (readonly, nonatomic) NSString *axImageName;
@property (readonly, nonatomic) NSString *axSubtitle;
@property (readonly, nonatomic) NSString *axText;
@property (readonly, nonatomic) NSString *axTitle;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *axView;

@end
