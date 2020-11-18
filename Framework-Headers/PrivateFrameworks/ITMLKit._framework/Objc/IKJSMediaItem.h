//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSMediaItem-Protocol.h>

@class IKAppMediaItemBridge, NSArray, NSNumber, NSString;

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem>
{
    NSNumber *_resumeTime;
    double _upNextPresentationStartTime;
    double _upNextPresentationDuration;
    IKAppMediaItemBridge *_bridge;
}

@property (strong, nonatomic) NSString *artworkImageURL;
@property (readonly, nonatomic) IKAppMediaItemBridge *bridge; // @synthesize bridge=_bridge;
@property (strong, nonatomic) NSString *contentRatingDomain;
@property (strong, nonatomic) NSNumber *contentRatingRanking;
@property (strong, nonatomic) NSString *description;
@property (strong, nonatomic) NSString *externalID;
@property (strong, nonatomic) NSArray *highlightGroups;
@property (strong, nonatomic) NSArray *interstitials;
@property (nonatomic) BOOL isExplicit;
@property (strong, nonatomic) NSNumber *resumeTime; // @synthesize resumeTime=_resumeTime;
@property (strong, nonatomic) NSString *subtitle;
@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *type;
@property double upNextPresentationDuration; // @synthesize upNextPresentationDuration=_upNextPresentationDuration;
@property double upNextPresentationStartTime; // @synthesize upNextPresentationStartTime=_upNextPresentationStartTime;
@property (strong, nonatomic) NSString *url;

- (void).cxx_destruct;
- (id)initWithType:(id)arg1:(id)arg2;
- (void)loadCertificateDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadContentIdentifierDataForURI:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
- (void)loadKeyDataForURI:(id)arg1 requestData:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (id)ratingBadge;
- (void)setRatingBadge:(id)arg1;

@end

