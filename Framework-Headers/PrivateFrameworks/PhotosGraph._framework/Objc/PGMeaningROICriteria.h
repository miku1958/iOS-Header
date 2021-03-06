//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGMeaningCriteria-Protocol.h>

@class NSArray, NSString;

@interface PGMeaningROICriteria : NSObject <PGMeaningCriteria>
{
    NSArray *_positiveROIs;
    NSArray *_negativeROIs;
    unsigned long long _minimumNumberOfROIs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long minimumNumberOfROIs; // @synthesize minimumNumberOfROIs=_minimumNumberOfROIs;
@property (strong, nonatomic) NSArray *negativeROIs; // @synthesize negativeROIs=_negativeROIs;
@property (strong, nonatomic) NSArray *positiveROIs; // @synthesize positiveROIs=_positiveROIs;
@property (readonly) Class superclass;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)passesForMomentNode:(id)arg1;

@end

