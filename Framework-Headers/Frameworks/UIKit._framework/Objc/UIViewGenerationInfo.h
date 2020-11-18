//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol _UIViewGenerator;

__attribute__((visibility("hidden")))
@interface UIViewGenerationInfo : NSObject
{
    BOOL _needsUpdateViewHierarchy;
    BOOL _hasUpdatesToApply;
    id<_UIViewGenerator> _viewGenerator;
    long long _numberOfDependencies;
    NSMutableArray *_dependentViewGenerators;
}

@property (strong, nonatomic) NSMutableArray *dependentViewGenerators; // @synthesize dependentViewGenerators=_dependentViewGenerators;
@property (nonatomic) BOOL hasUpdatesToApply; // @synthesize hasUpdatesToApply=_hasUpdatesToApply;
@property (nonatomic) BOOL needsUpdateViewHierarchy; // @synthesize needsUpdateViewHierarchy=_needsUpdateViewHierarchy;
@property (nonatomic) long long numberOfDependencies; // @synthesize numberOfDependencies=_numberOfDependencies;
@property (weak, nonatomic) id<_UIViewGenerator> viewGenerator; // @synthesize viewGenerator=_viewGenerator;

- (void).cxx_destruct;
- (id)initWithGenerator:(id)arg1;

@end
