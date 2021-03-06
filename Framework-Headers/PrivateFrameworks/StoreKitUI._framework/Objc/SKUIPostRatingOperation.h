//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSDictionary, NSString, SKUIReviewConfiguration;

__attribute__((visibility("hidden")))
@interface SKUIPostRatingOperation : ISOperation
{
    NSDictionary *_responseDictionary;
    NSString *_itemID;
    long long _rating;
    SKUIReviewConfiguration *_reviewConfiguration;
}

@property (readonly) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)initWithRating:(long long)arg1 forItemID:(id)arg2 reviewConfiguration:(id)arg3;
- (void)run;

@end

