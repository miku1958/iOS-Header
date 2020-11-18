//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/QLListCellDataGenerationOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QLListCellManager : NSObject <QLListCellDataGenerationOperationDelegate>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_operations;
    NSOperationQueue *_generationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSOperationQueue *generationQueue; // @synthesize generationQueue=_generationQueue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *operations; // @synthesize operations=_operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)operation:(id)arg1 didDetermineFileSize:(id)arg2 fileTypeString:(id)arg3;
- (void)operation:(id)arg1 didGenerateThumbnail:(id)arg2;
- (void)setupCell:(id)arg1 withItem:(id)arg2 atIndex:(unsigned long long)arg3;

@end

