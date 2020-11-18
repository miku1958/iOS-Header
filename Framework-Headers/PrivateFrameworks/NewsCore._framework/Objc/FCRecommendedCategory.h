//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FCRecommendedCategory : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSArray *_topicTagIDs;
    NSArray *_channelTagIDs;
    NSArray *_subcategories;
    NSArray *_curatedTagIDs;
}

@property (readonly, nonatomic) NSArray *channelTagIDs; // @synthesize channelTagIDs=_channelTagIDs;
@property (readonly, nonatomic) NSArray *curatedTagIDs; // @synthesize curatedTagIDs=_curatedTagIDs;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSArray *subcategories; // @synthesize subcategories=_subcategories;
@property (readonly, nonatomic) NSArray *topicTagIDs; // @synthesize topicTagIDs=_topicTagIDs;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 curatedTagIDs:(id)arg3 recommendedTopicTagIDs:(id)arg4 recommendedChannelTagIDs:(id)arg5 subcategories:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end
