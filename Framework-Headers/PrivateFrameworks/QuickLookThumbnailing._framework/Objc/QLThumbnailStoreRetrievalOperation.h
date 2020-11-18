//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class GSAddition, NSData, NSDictionary, NSError, NSURL, QLThumbnailAddition;
@protocol QLThumbnailGenerationRequest;

@interface QLThumbnailStoreRetrievalOperation : NSOperation
{
    NSURL *_documentURL;
    NSError *_error;
    BOOL _finished;
    BOOL _executing;
    BOOL _allowsThumbnailGeneration;
    BOOL _generateThumbnailsAtBackgroundPriority;
    QLThumbnailAddition *_addition;
    id<QLThumbnailGenerationRequest> _thumbnailRequest;
    NSURL *_destinationURL;
}

@property BOOL allowsThumbnailGeneration; // @synthesize allowsThumbnailGeneration=_allowsThumbnailGeneration;
@property (strong) NSError *error; // @synthesize error=_error;
@property (nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property (nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (readonly) GSAddition *genStoreAddition;
@property BOOL generateThumbnailsAtBackgroundPriority; // @synthesize generateThumbnailsAtBackgroundPriority=_generateThumbnailsAtBackgroundPriority;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated;

+ (BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (BOOL)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)_generateThumbnail;
- (void)afterThumbnailIsPutInGenstore;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;
- (void)main;
- (void)start;

@end
