//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>

@class NSString, UIImage;

@interface NUFeedTitleViewUpdate : NSObject <NSCopying>
{
    unsigned long long _updateType;
    unsigned long long _storyCount;
    NSString *_feedName;
    UIImage *_feedImage;
}

@property (strong, nonatomic) UIImage *feedImage; // @synthesize feedImage=_feedImage;
@property (copy, nonatomic) NSString *feedName; // @synthesize feedName=_feedName;
@property (nonatomic) unsigned long long storyCount; // @synthesize storyCount=_storyCount;
@property (readonly, nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

+ (id)feedTitleViewUpdateEmptyState;
+ (id)feedTitleViewUpdateForCheckingForNewStories;
+ (id)feedTitleViewUpdateForFeedImage:(id)arg1;
+ (id)feedTitleViewUpdateForFeedName:(id)arg1;
+ (id)feedTitleViewUpdateForNewStoriesWithStoryCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)convertToTitleViewUpdateWithCompact:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithUpdateType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end
