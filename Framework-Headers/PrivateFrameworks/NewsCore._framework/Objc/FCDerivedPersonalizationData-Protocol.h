//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol FCPersonalizationAggregate;

@protocol FCDerivedPersonalizationData <NSObject>
- (id<FCPersonalizationAggregate>)aggregateForFeatureKey:(NSString *)arg1;
- (NSDictionary *)aggregatesForFeatureKeys:(NSArray *)arg1;
@end
