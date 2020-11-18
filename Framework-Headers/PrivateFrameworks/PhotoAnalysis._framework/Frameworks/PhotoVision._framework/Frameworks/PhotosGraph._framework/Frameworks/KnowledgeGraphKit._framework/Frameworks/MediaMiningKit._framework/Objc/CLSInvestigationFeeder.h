//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSInvestigationInterviewDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate>
{
    unsigned long long _locationClusteringAlgorithm;
    BOOL _allowsInterview;
    NSMutableSet *_focusItems;
}

@property (nonatomic) BOOL allowsInterview; // @synthesize allowsInterview=_allowsInterview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *focusItems; // @synthesize focusItems=_focusItems;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long locationClusteringAlgorithm; // @synthesize locationClusteringAlgorithm=_locationClusteringAlgorithm;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_prepareFeederWithOperation:(id)arg1;
- (id)allItems;
- (id)approximateLocation;
- (id)endDateComponents;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePeopleNamesWithGaussians:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemMetadataAtIndex:(unsigned long long)arg1 withKeys:(id)arg2;
- (id)itemMetadataInInvestigation:(id)arg1 withKeys:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGImage *)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2;
- (struct CGImage *)itemThumbnailInInvestigation:(id)arg1 atIndex:(unsigned long long)arg2 withResolution:(unsigned long long)arg3;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;
- (id)prepareOperationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)startDateComponents;

@end
