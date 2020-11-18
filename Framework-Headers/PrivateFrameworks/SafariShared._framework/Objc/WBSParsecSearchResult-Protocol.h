//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MKMapItem, NSString, NSURL, UIImage, WBSCompletionQuery, WBSParsecActionButton, WBSParsecImageRepresentation;
@protocol WBSParsecSearchSession;

@protocol WBSParsecSearchResult

@property (readonly, nonatomic) WBSParsecActionButton *actionButton;
@property (readonly, nonatomic) NSURL *appPunchoutURL;
@property (readonly, nonatomic) NSString *completion;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *feedbackIdentifier;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult;
@property (readonly, copy, nonatomic) NSString *sectionBundleIdentifier;
@property (readonly, nonatomic) NSString *sectionHeader;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *urlString;

- (BOOL)canBecomeTopHitForQuery:(WBSCompletionQuery *)arg1;
- (UIImage *)completionIconWithSession:(id<WBSParsecSearchSession>)arg1;
- (UIImage *)iconWithSession:(id<WBSParsecSearchSession>)arg1;
@end

