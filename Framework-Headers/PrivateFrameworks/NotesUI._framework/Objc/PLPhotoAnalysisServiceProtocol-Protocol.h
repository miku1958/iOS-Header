//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/PLPhotoAnalysisGraphServiceProtocol-Protocol.h>
#import <NotesUI/PLPhotoAnalysisJobServiceProtocol-Protocol.h>
#import <NotesUI/PLPhotoAnalysisPresentationServiceProtocol-Protocol.h>
#import <NotesUI/PLPhotoAnalysisVisionServiceFaceProcessingProtocol-Protocol.h>
#import <NotesUI/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@protocol PLPhotoAnalysisServiceProtocol <PLPhotoAnalysisJobServiceProtocol, PLPhotoAnalysisGraphServiceProtocol, PLPhotoAnalysisVisionServiceTaxonomyProtocol, PLPhotoAnalysisVisionServiceFaceProcessingProtocol, PLPhotoAnalysisPresentationServiceProtocol>
- (void)cancelOperationsWithIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *))arg3;
- (void)dumpAnalysisStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)notifyLibraryAvailableAtURL:(NSURL *)arg1;
- (void)writeQALog:(NSString *)arg1;
@end
