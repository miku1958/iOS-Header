//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CAPortalLayer : CALayer
{
}

@property BOOL allowsBackdropGroups;
@property BOOL hidesSourceLayer;
@property BOOL matchesOpacity;
@property BOOL matchesPosition;
@property BOOL matchesTransform;
@property unsigned int sourceContextId;
@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;

@end

