//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedDescriptor.h>

#import <NewsCore/FCFeedPaginating-Protocol.h>

@class NSString;

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor <FCFeedPaginating>
{
    unsigned long long _limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (readonly) Class superclass;

+ (void)setupDebug;
+ (void)tearDownDebug;
- (id)editionAtDate:(id)arg1;
- (id)editionFollowingEdition:(id)arg1;
- (id)feedGroupEmitters;
- (id)feedPaginator;
- (id)name;

@end

