//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTAStarFuzzyMatchingResponse.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableAStarFuzzyMatchingResponse : FTAStarFuzzyMatchingResponse
{
}

@property (nonatomic) unsigned int expanded_path;
@property (nonatomic) unsigned int latency;
@property (copy, nonatomic) NSArray *results;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSString *session_id;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

