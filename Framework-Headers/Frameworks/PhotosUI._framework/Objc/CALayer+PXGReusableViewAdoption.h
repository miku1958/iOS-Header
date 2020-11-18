//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PhotosUICore/PXGInternalReusableView-Protocol.h>

@class NSString;

@interface CALayer (PXGReusableViewAdoption) <PXGInternalReusableView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL px_supportsAlphaBlending;
@property (readonly) Class superclass;

- (void)pxg_addToScrollViewController:(id)arg1;
- (void)pxg_becomeReusable;
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_3ab912e1 *)arg2 info:(CDStruct_9d1ebe49 *)arg3 style:(CDStruct_506f5052 *)arg4 textureInfo:(CDStruct_183601bc *)arg5 resizableCapInsets:(CDStruct_0054b44d)arg6;
- (void)pxg_prepareForReuse;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;
@end
