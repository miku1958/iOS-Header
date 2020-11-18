//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSCopying-Protocol.h>
#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>
{
    float _score;
    id _predictedItem;
}

@property (readonly, nonatomic) id predictedItem; // @synthesize predictedItem=_predictedItem;
@property (readonly, nonatomic) float score; // @synthesize score=_score;

+ (id)predictionsFrom:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 score:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredictedItem:(id)arg1 score:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToScoredPredictionItem:(id)arg1;
- (void)setScore:(float)arg1;

@end
