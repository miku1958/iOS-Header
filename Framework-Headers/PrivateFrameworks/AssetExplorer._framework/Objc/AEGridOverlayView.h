//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssetExplorer/PXReusableObject-Protocol.h>
#import <AssetExplorer/PXUIViewBasicTile-Protocol.h>

@class AEGridOverlayConfiguration, NSString;

@interface AEGridOverlayView : UIView <PXUIViewBasicTile, PXReusableObject>
{
    AEGridOverlayConfiguration *_overlayConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, setter=_setOverlayConfiguration:) AEGridOverlayConfiguration *overlayConfiguration; // @synthesize overlayConfiguration=_overlayConfiguration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;

+ (id)cloudBadge;
+ (id)gradientShadow;
+ (id)gridOverlayLayoutInfo;
+ (id)loopBadge;
+ (id)videoBadge;
- (void).cxx_destruct;
- (struct CGRect)_cloudRect;
- (struct CGRect)_loopRect;
- (struct CGRect)_videoRect;
- (void)becomeReusable;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (void)prepareForReuse;

@end

