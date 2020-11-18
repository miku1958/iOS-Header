//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, UIView;

@interface PXCMMTileReusableView : NSObject <PXUIViewBasicTile, PXReusableObject>
{
    UIView *_underlyingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
@property (readonly, nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (id)init;
- (id)initWithView:(id)arg1;
- (void)prepareForReuse;

@end
