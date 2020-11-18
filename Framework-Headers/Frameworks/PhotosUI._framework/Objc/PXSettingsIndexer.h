//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSProgress, PXSettings, PXSettingsIndex;

@interface PXSettingsIndexer : NSObject
{
    PXSettings *_rootSettings;
    PXSettingsIndex *_index;
    NSMutableArray *_completionHandlers;
    long long _state;
    NSProgress *_indexingProgress;
}

@property (readonly, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (strong, nonatomic) PXSettingsIndex *index; // @synthesize index=_index;
@property (strong, nonatomic) NSProgress *indexingProgress; // @synthesize indexingProgress=_indexingProgress;
@property (readonly, nonatomic) PXSettings *rootSettings; // @synthesize rootSettings=_rootSettings;
@property (nonatomic) long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_callCompletionHandlersIfNecessary;
- (void)_handleResultIndex:(id)arg1;
- (void)_startIndexingIfNecessary;
- (id)init;
- (id)initWithRootSettings:(id)arg1;
- (id)startIndexingWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
