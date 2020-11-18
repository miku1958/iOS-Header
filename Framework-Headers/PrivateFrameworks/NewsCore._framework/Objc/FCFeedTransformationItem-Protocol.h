//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFeedPersonalizingArticle-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class NSString;

@protocol FCFeedTransformationItem <NSObject, FCFeedPersonalizingArticle>

@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) unsigned long long articleRecordModificationDateMilliseconds;
@property (readonly, copy, nonatomic) NSString *clusterID;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, nonatomic) unsigned long long feedHalfLifeMilliseconds;
@property (readonly, copy, nonatomic) NSString *feedID;
@property (readonly, nonatomic, getter=isFromBlockedStorefront) BOOL fromBlockedStorefront;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) unsigned long long order;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, nonatomic) unsigned long long publishDateMilliseconds;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;

@end
