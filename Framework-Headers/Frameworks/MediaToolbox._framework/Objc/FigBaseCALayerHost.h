//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayerHost.h>

@interface FigBaseCALayerHost : CALayerHost
{
    BOOL _preventsChangesToSublayerHierarchy;
}

@property (nonatomic) BOOL preventsChangesToSublayerHierarchy; // @synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy;

+ (id)defaultActionForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)addSublayer:(id)arg1;
- (id)init;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)removeFromSuperlayer;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setSublayers:(id)arg1;

@end

