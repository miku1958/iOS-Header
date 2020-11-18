//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPersonalizationFeature.h>

@class NSString;

@interface FCArticleLengthFeature : FCPersonalizationFeature
{
    NSString *_lengthID;
}

@property (strong, nonatomic) NSString *lengthID; // @synthesize lengthID=_lengthID;

+ (id)longLengthFeature;
+ (id)mediumLengthFeature;
+ (id)shortLengthFeature;
- (void).cxx_destruct;
- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)fr_description;
- (id)init;
- (id)initWithLengthIdentifier:(id)arg1;
- (id)initWithPersonalizationIdentifier:(id)arg1;

@end
