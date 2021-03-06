//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSNumber, NSProgress, PLLivePhotoEditSource;

@interface PXAutoloopAnalysisOperation : NSOperation
{
    NSDictionary *_recipesByVariationType;
    BOOL _succeeded;
    PLLivePhotoEditSource *_editSource;
    NSProgress *_progress;
    NSError *_error;
    NSNumber *_duration;
    NSDictionary *_analysisResult;
}

@property (readonly, nonatomic) NSDictionary *analysisResult; // @synthesize analysisResult=_analysisResult;
@property (readonly, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) PLLivePhotoEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;

- (void).cxx_destruct;
- (void)_timeout;
- (void)cancel;
- (id)init;
- (id)initWithEditSource:(id)arg1;
- (void)main;
- (id)recipeForVariationType:(long long)arg1;

@end

