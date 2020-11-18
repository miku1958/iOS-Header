//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // @synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue;
@property (strong, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // @synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue;
@property (strong, nonatomic) NSMapTable *artworkResizingOperations; // @synthesize artworkResizingOperations=_artworkResizingOperations;

- (void).cxx_destruct;
- (void)cancelResizeImage:(id)arg1;
- (id)init;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

