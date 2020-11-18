//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSArray, NSDate, NSString;

@protocol FCFeedPersonalizingItem <NSObject>

@property (readonly, nonatomic, getter=isANF) BOOL anf;
@property (readonly, nonatomic, getter=isBundlePaid) BOOL bundlePaid;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts;
@property (readonly, nonatomic) double globalUserFeedback;
@property (readonly, nonatomic) unsigned long long halfLife;
@property (readonly, nonatomic) BOOL hasGlobalUserFeedback;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic, getter=isHiddenFromAutoFavorites) BOOL hiddenFromAutoFavorites;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic, getter=isPaid) BOOL paid;
@property (readonly, copy, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *publisherCohorts;
@property (readonly, copy, nonatomic) NSString *publisherID;
@property (readonly, copy, nonatomic) NSString *sourceFeedID;
@property (readonly, copy, nonatomic) NSArray *topicIDs;

- (void)enumerateTopicCohortsWithBlock:(void (^)(NSString *, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *))arg1;

@optional
@end

