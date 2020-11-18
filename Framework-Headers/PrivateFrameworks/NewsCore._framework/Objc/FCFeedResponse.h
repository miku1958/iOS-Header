//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCFeedRange, NSArray, NSError, NSString;

@interface FCFeedResponse : NSObject
{
    NSString *_feedID;
    NSArray *_feedItems;
    FCFeedRange *_feedRange;
    NSError *_error;
}

@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property (copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
@property (copy, nonatomic) FCFeedRange *feedRange; // @synthesize feedRange=_feedRange;

- (void).cxx_destruct;
- (id)feedResponseByMergingWithResponse:(id)arg1;

@end

