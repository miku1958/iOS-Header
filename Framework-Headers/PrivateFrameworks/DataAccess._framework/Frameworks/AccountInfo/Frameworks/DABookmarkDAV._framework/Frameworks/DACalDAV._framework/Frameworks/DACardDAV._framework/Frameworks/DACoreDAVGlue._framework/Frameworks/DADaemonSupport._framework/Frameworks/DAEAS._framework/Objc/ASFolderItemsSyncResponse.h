//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASCollection, NSMutableArray, NSNumber;

@interface ASFolderItemsSyncResponse : ASItem
{
    long long _dataclass;
    NSNumber *_status;
    ASCollection *_collection;
    NSMutableArray *_meetingRequestDatas;
    NSMutableArray *_deliveryIdsToClear;
    NSMutableArray *_deliveryIdsToSoftClear;
}

@property (strong, nonatomic) ASCollection *collection; // @synthesize collection=_collection;
@property (nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property (strong, nonatomic) NSMutableArray *deliveryIdsToClear; // @synthesize deliveryIdsToClear=_deliveryIdsToClear;
@property (strong, nonatomic) NSMutableArray *deliveryIdsToSoftClear; // @synthesize deliveryIdsToSoftClear=_deliveryIdsToSoftClear;
@property (strong, nonatomic) NSMutableArray *meetingRequestDatas; // @synthesize meetingRequestDatas=_meetingRequestDatas;
@property (strong, nonatomic) NSNumber *status; // @synthesize status=_status;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (void)_processMeetingRequestDatasForAccount:(id)arg1;
- (void)addDeliveryIdToClear:(id)arg1;
- (void)addDeliveryIdToSoftClear:(id)arg1;
- (void)addMeetingRequestData:(id)arg1;
- (id)description;
- (id)initWithDataclass:(long long)arg1;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (void)setCollections:(id)arg1;

@end

