//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, OKPresentation, OKProducerPlugin;
@protocol OKProducerDelegate;

@interface OKProducer : NSObject
{
    id<OKProducerDelegate> _delegate;
    OKProducerPlugin *_plugin;
    OKPresentation *_presentation;
    NSOperationQueue *_liveAuthoringOperationQueue;
    BOOL _liveAuthoringInProgress;
    double _startLiveAuthorTime;
}

@property (nonatomic) id<OKProducerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) OKProducerPlugin *plugin; // @synthesize plugin=_plugin;
@property (strong, nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;

+ (id)guidelinesFromLegacyData:(id)arg1 withMediaURLs:(id)arg2 andMediaLookupDelegate:(id)arg3;
+ (void)setupJavascriptContext:(id)arg1;
- (void)_continueLiveAuthoring;
- (double)_continueLiveAuthoringDelay;
- (void)addSettingsFromDictionary:(id)arg1 onWidget:(id)arg2;
- (BOOL)author:(BOOL)arg1 progressBlock:(CDUnknownBlockType)arg2 requiresProducer:(inout BOOL *)arg3 error:(id *)arg4;
- (void)cancelLiveAuthoring:(BOOL)arg1;
- (void)cleanupPresentation:(CDUnknownBlockType)arg1;
- (float)currentLiveAuthoringProgress;
- (void)dealloc;
- (void)didChangeTextForWidget:(id)arg1 toSettings:(id)arg2;
- (void)didPanMediaForWidget:(id)arg1 toState:(id)arg2;
- (id)init;
- (id)initWithPresentation:(id)arg1 andPlugin:(id)arg2;
- (BOOL)liveAuthorInitialBootstrap:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)liveAuthorNextChunk:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)liveAuthoringOperationQueue;
- (float)liveAuthoringProgressForMediaItem:(id)arg1;
- (BOOL)migratePresentation:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)needsLiveAuthoring;
- (BOOL)prepareLiveAuthoringIfNeeded:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)resetLiveAuthoring;
- (void)setSettingsObject:(id)arg1 forKeyPath:(id)arg2 onWidget:(id)arg3;
- (void)startLiveAuthoringIfNeeded;
- (BOOL)supportsLiveAuthoring;
- (unsigned long long)totalNumberOfLiveAuthoringItems;
- (void)updateSynopsisGuideline;

@end

