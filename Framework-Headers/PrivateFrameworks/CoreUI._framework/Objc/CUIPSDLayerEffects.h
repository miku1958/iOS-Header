//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject
{
    BOOL _visible;
    double _effectScale;
    NSMutableDictionary *_effectList;
}

@property (strong) NSMutableDictionary *effectList; // @synthesize effectList=_effectList;
@property double effectScale; // @synthesize effectScale=_effectScale;
@property BOOL visible; // @synthesize visible=_visible;

- (void)addLayerEffectComponent:(id)arg1;
- (void)dealloc;
- (id)dropShadow;
- (id)init;

@end

