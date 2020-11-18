//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapUpdatePlan-Protocol.h>

@class NSMapTable, NSString;
@protocol PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider;

@interface PXPlacesMapDefaultUpdatePlan : NSObject <PXPlacesMapUpdatePlan>
{
    id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
    id<PXPlacesMapLayoutResult> _currentLayoutResult;
    NSMapTable *_currentLayoutItemToAnnotationTable;
}

@property (strong) NSMapTable *currentLayoutItemToAnnotationTable; // @synthesize currentLayoutItemToAnnotationTable=_currentLayoutItemToAnnotationTable;
@property (strong) id<PXPlacesMapLayoutResult> currentLayoutResult; // @synthesize currentLayoutResult=_currentLayoutResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; // @synthesize pipelineComponentProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2;
- (id)annotationForLayoutItem:(id)arg1;
- (id)removalPlanResult;
- (void)reset;
- (id)resultForNewLayoutResult:(id)arg1;

@end

