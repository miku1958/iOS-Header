//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectNode : NSObject
{
    NSMutableArray *_filterEntries;
    NSMutableArray *_viewEffects;
    NSMutableArray *_underlays;
    NSMutableArray *_overlays;
    BOOL _textShouldRenderWithTintColor;
    NSDictionary *_options;
}

@property (copy, nonatomic) NSArray *filterEntries; // @synthesize filterEntries=_filterEntries;
@property (readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (copy, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
@property (nonatomic) BOOL textShouldRenderWithTintColor; // @synthesize textShouldRenderWithTintColor=_textShouldRenderWithTintColor;
@property (copy, nonatomic) NSArray *underlays; // @synthesize underlays=_underlays;
@property (copy, nonatomic) NSArray *viewEffects; // @synthesize viewEffects=_viewEffects;

+ (id)newTransitionNodeForStops:(id)arg1;
- (void).cxx_destruct;
- (void)addFilterEntry:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addUnderlay:(id)arg1;
- (void)addViewEffect:(id)arg1;
- (id)copyForTransitionToNode:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end

