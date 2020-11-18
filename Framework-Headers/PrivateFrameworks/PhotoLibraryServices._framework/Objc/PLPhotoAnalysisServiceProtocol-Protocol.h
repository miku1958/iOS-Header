//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPhotoAnalysisJobServiceProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPhotoAnalysisVisionServiceFaceProcessingProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPhotoAnalysisVisionServiceSceneClassificationProtocol-Protocol.h>
#import <PhotoLibraryServices/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSArray, NSDictionary;

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceSceneClassificationProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol>
- (void)cancelOperationsWithIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)dumpAnalysisStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
@end
