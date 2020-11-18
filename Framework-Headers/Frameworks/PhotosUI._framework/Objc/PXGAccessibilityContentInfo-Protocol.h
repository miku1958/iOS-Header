//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSObject, NSString;
@protocol PXAccessibilityView, PXDisplayAsset;

@protocol PXGAccessibilityContentInfo <NSObject>

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) long long contentKind;
@property (readonly, nonatomic) struct CGRect frame;
@property (readonly, nonatomic) NSString *imageName;
@property (readonly, nonatomic) NSArray *px_accessibilityChildren;
@property (readonly, nonatomic) BOOL selected;
@property (readonly, copy, nonatomic) NSArray *selectedContent;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSObject<PXAccessibilityView> *view;
@property (readonly, nonatomic) BOOL visible;

@end
