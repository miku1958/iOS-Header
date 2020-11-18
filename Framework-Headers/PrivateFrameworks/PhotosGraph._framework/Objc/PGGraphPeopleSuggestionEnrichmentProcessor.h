//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphDataModelEnrichmentProcessor-Protocol.h>

@class NSString;

@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)backgroundJobName;
+ (double)backgroundJobTimeout;
+ (BOOL)supportsBackgroundJob;
- (void)_performPeopleSuggestionForHomeWithManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_performPeopleSuggestionLearningWithManager:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end
