//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/NSCopying-Protocol.h>
#import <NewsToday/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol NTHeadlinePersonalizationMetadata <NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSDictionary *scoredTopicIDs;

@end

