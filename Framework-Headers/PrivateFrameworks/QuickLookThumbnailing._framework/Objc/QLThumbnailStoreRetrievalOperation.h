//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GSAddition, NSData, NSDictionary, NSError, NSObject, NSURL, QLThumbnailAddition;
@protocol OS_os_activity, QLThumbnailGenerationRequest><NSXPCProxyCreating;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    BOOL _finished;
    BOOL _executing;
    BOOL _allowsThumbnailGeneration;
    BOOL _generateThumbnailsAtBackgroundPriority;
    BOOL _thumbnailWasJustAutomaticallyGenerated;
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
    QLThumbnailAddition *_addition;
    id<QLThumbnailGenerationRequest><NSXPCProxyCreating> _thumbnailRequest;
    NSURL *_destinationURL;
}

@property (readonly) QLThumbnailAddition *addition; // @synthesize addition=_addition;
@property BOOL allowsThumbnailGeneration; // @synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration;
@property (strong) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (strong) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property (strong) NSError *error; // @synthesize error=_error;
@property (nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property (nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (readonly) GSAddition *genStoreAddition;
@property BOOL generateThumbnailsAtBackgroundPriority; // @synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (strong) id<QLThumbnailGenerationRequest><NSXPCProxyCreating> thumbnailRequest; // @synthesize thumbnailRequest=_thumbnailRequest;
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated;
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated; // @synthesize thumbnailWasJustAutomaticallyGenerated=_thumbnailWasJustAutomaticallyGenerated;

+ (BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;
- (void).cxx_destruct;
- (void)_afterDeterminingWhetherWeCanGenerate:(BOOL)arg1;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (BOOL)_finishIfNeeded;
- (void)_finishWithError:(id)arg1;
- (void)_generateThumbnail;
- (void)afterThumbnailIsPutInGenstore;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;
- (void)main;
- (void)start;

@end

