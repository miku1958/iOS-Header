//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXCuratedLibraryProcessingProgressReport : NSObject
{
}

+ (id)colorForComplete;
+ (id)colorForDefault;
+ (id)colorForNotEnriched;
+ (id)colorForPartial;
+ (id)colorForSceneComplete;
+ (void)computeBriefDescriptionWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)computeFullDescriptionWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)computeProgressWithResultBlock:(CDUnknownBlockType)arg1;
+ (void)getHighlightEnrichmentProgressWithResult:(CDUnknownBlockType)arg1;
+ (void)getLibraryProcessingProgressWithResult:(CDUnknownBlockType)arg1;
+ (id)highlightEnrichmentProgressImageWithProgressReport:(CDStruct_e4f06a70)arg1;

@end

