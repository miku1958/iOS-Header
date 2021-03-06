//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface EKDayOccurrenceStateCachedLocation : NSObject
{
    BOOL _originalOccurrenceLocationIsPrediction;
    BOOL _originalHasNewTimeProposed;
    NSString *_generatedLocationString;
    NSString *_originalOccurrenceLocation;
    NSString *_originalOccurrenceLocationWithoutPrediction;
}

@property (readonly, nonatomic) NSString *generatedLocationString; // @synthesize generatedLocationString=_generatedLocationString;
@property (readonly, nonatomic) BOOL originalHasNewTimeProposed; // @synthesize originalHasNewTimeProposed=_originalHasNewTimeProposed;
@property (readonly, nonatomic) NSString *originalOccurrenceLocation; // @synthesize originalOccurrenceLocation=_originalOccurrenceLocation;
@property (readonly, nonatomic) BOOL originalOccurrenceLocationIsPrediction; // @synthesize originalOccurrenceLocationIsPrediction=_originalOccurrenceLocationIsPrediction;
@property (readonly, nonatomic) NSString *originalOccurrenceLocationWithoutPrediction; // @synthesize originalOccurrenceLocationWithoutPrediction=_originalOccurrenceLocationWithoutPrediction;

- (void).cxx_destruct;
- (id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(BOOL)arg4 originalHasNewTimeProposed:(BOOL)arg5;

@end

