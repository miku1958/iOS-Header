//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PGGraphIngestRecipeParameters, PGManager;

@interface PGGraphIngestRecipe : NSObject
{
    PGManager *_manager;
    NSArray *_momentsToIngest;
    NSArray *_highligthsToIngest;
    NSArray *_preProcessors;
    NSArray *_postProcessors;
    PGGraphIngestRecipeParameters *_parameters;
}

@property (readonly, nonatomic) NSArray *highligthsToIngest; // @synthesize highligthsToIngest=_highligthsToIngest;
@property (readonly, nonatomic) PGManager *manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) NSArray *momentsToIngest; // @synthesize momentsToIngest=_momentsToIngest;
@property (readonly, nonatomic) PGGraphIngestRecipeParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly, nonatomic) NSArray *postProcessors; // @synthesize postProcessors=_postProcessors;
@property (readonly, nonatomic) NSArray *preProcessors; // @synthesize preProcessors=_preProcessors;

- (void).cxx_destruct;
- (id)_highlightsForLibraryAnalysisWithFetchOptions:(id)arg1;
- (id)_momentsForLibraryAnalysisWithFetchOptions:(id)arg1;
- (id)defaultPostProcessors;
- (id)defaultPreProcessors;
- (id)initWithManager:(id)arg1 parameters:(id)arg2;

@end
