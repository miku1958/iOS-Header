//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSArray;
@protocol WBSTranslationContentExtracting;

@protocol WBSTranslationContentExtractionDelegate <NSObject>

@optional
- (void)contentExtractor:(id<WBSTranslationContentExtracting>)arg1 didExtractContent:(NSArray *)arg2;
- (void)contentExtractorDidBeginExtractingContent:(id<WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidFinishExtractingInitialContent:(id<WBSTranslationContentExtracting>)arg1;
- (void)contentExtractorDidStopExtractingContent:(id<WBSTranslationContentExtracting>)arg1;
@end

