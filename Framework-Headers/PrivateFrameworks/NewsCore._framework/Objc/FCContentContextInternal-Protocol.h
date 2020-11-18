//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCArticleListRecordSource, FCArticleRecordSource, FCCKDatabase, FCChannelMembershipController, FCFeedDatabase, FCForYouConfigRecordSource, FCPurchaseLookupRecordSource, FCResourceRecordSource, FCTagRecordSource, FCWebArchiveSource, FCWidgetSectionConfigRecordSource;

@protocol FCContentContextInternal <NSObject, FCCacheFlushing>

@property (readonly, nonatomic) FCArticleListRecordSource *articleListRecordSource;
@property (readonly, nonatomic) FCArticleRecordSource *articleRecordSource;
@property (readonly, nonatomic) FCChannelMembershipController *channelMembershipController;
@property (readonly, nonatomic) FCCKDatabase *contentDatabase;
@property (readonly, nonatomic) FCFeedDatabase *feedDatabase;
@property (readonly, nonatomic) FCForYouConfigRecordSource *forYouConfigRecordSource;
@property (readonly, nonatomic) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (readonly, nonatomic) FCResourceRecordSource *resourceRecordSource;
@property (readonly, nonatomic) FCTagRecordSource *tagRecordSource;
@property (readonly, nonatomic) FCWebArchiveSource *webArchiveSource;
@property (readonly, nonatomic) FCWidgetSectionConfigRecordSource *widgetSectionConfigRecordSource;

@end

