//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLBaseLayerStack, NSData;

@interface BLRetouchLayer : NSObject
{
    BOOL _enabled;
    int _brushType;
    BLRetouchLayer *_layerBelow;
    BLBaseLayerStack *_layerStack;
}

@property (nonatomic) int brushType; // @synthesize brushType=_brushType;
@property (nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly, nonatomic) BOOL hasLayerMask;
@property (readonly, nonatomic) struct CGSize imageSize;
@property (weak, nonatomic) BLRetouchLayer *layerBelow; // @synthesize layerBelow=_layerBelow;
@property (weak, nonatomic) NSData *layerData;
@property (weak, nonatomic) BLBaseLayerStack *layerStack; // @synthesize layerStack=_layerStack;

+ (id)layer;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg1;
- (id)init;
- (struct CGContext *)newContextForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;
- (struct CGImage *)newImageForRect:(struct CGRect)arg1 inDestRect:(struct CGRect)arg2 andScale:(double)arg3;

@end
