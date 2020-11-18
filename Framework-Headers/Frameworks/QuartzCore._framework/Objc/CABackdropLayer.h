//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;
@protocol CABackdropLayerDelegate><CALayerDelegate;

@interface CABackdropLayer : CALayer
{
}

@property BOOL allowsInPlaceFiltering;
@property struct CGRect backdropRect;
@property BOOL captureOnly;
@property (weak) id<CABackdropLayerDelegate><CALayerDelegate> delegate; // @dynamic delegate;
@property BOOL disablesOccludedBackdropBlurs;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *groupName;
@property double marginWidth;
@property double scale;
@property double statisticsInterval;
@property (copy) NSString *statisticsType;
@property BOOL usesGlobalGroupNamespace;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)statisticsValues;

@end

