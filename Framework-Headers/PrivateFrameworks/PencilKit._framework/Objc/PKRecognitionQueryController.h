//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PKRecognitionSessionManager;

@interface PKRecognitionQueryController : NSObject
{
    NSMutableDictionary *_drawingQueries;
    NSMutableDictionary *_visibleStrokeQueries;
    NSMutableDictionary *_queriesToCreate;
    PKRecognitionSessionManager *_recognitionManager;
}

@property (strong) NSMutableDictionary *drawingQueries; // @synthesize drawingQueries=_drawingQueries;
@property (strong) NSMutableDictionary *queriesToCreate; // @synthesize queriesToCreate=_queriesToCreate;
@property (weak, nonatomic) PKRecognitionSessionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property (strong) NSMutableDictionary *visibleStrokeQueries; // @synthesize visibleStrokeQueries=_visibleStrokeQueries;

- (void).cxx_destruct;
- (void)_cleanupQuery:(id)arg1;
- (void)addQueryOfType:(Class)arg1 withIdentifier:(id)arg2;
- (void)clearDrawingQueries;
- (void)clearVisibleStrokesQueries;
- (id)drawingQueryWithIdentifier:(id)arg1;
- (void)flushAllQueries;
- (id)initWithRecognitionSessionManager:(id)arg1;
- (void)removeQueryWithIdentifier:(id)arg1;
- (id)setupAndStartQuery:(Class)arg1;
- (void)setupDrawingQueriesIfNecessary;
- (void)setupVisibleStrokesQueries;
- (void)updateQueriesIfNecessaryWithState:(long long)arg1;
- (id)visibleStrokesQueryWithIdentifier:(id)arg1;

@end

