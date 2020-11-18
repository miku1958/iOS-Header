//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class CALayer, NSArray, NSMutableSet, TSDRep;

@protocol TSDRepDirectLayerHosting <NSObject>
- (void)directLayerHostRemoveIfMatchingContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerHostUpdateWithContainerLayer:(CALayer *)arg1 forRep:(TSDRep *)arg2;
- (void)directLayerhostUpdateTopLevelTilingLayers:(NSMutableSet *)arg1 forRep:(TSDRep *)arg2;

@optional
- (void)directLayerHostUpdateOverlayLayers:(NSArray *)arg1 forRep:(TSDRep *)arg2;
@end

