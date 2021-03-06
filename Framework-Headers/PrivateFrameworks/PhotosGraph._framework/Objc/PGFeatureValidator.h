//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString, PGFeatureExtractor;

@interface PGFeatureValidator : NSObject
{
    NSPredicate *_predicate;
    PGFeatureExtractor *_featureExtractor;
    NSString *_featureName;
}

@property (readonly, nonatomic) PGFeatureExtractor *featureExtractor; // @synthesize featureExtractor=_featureExtractor;
@property (readonly, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property (readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;

- (void).cxx_destruct;
- (BOOL)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (long long)_isValidEntity:(id)arg1 featureExtractor:(id)arg2 error:(id *)arg3;
- (long long)featureValidatorType;
- (id)initWithPredicate:(id)arg1 featureExtractor:(id)arg2 featureName:(id)arg3;
- (long long)isValidEntity:(id)arg1 error:(id *)arg2;

@end

