//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLRepairLayerStack, NSDictionary, NSLock;

@interface BLRepairModel : NSObject
{
    NSDictionary *_strokesDataDictionary;
    BLRepairLayerStack *_layerStack;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (void)buildLayerStackWithAnalysisImage:(id)arg1 andRepairImage:(id)arg2;
- (BOOL)hasLayerStack;
- (BOOL)hasRedeye;
- (BOOL)hasRepair;
- (BOOL)hasRepairOrRedeye;
- (id)imagePatchList;
- (id)initWithAdjustmentsDictionary:(id)arg1;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;

@end

