//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class CPLSuggestionAssetList, NSData, NSDate, NSString;

@interface CPLSuggestionChange : CPLRecordChange
{
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _notificationState;
    unsigned short _state;
    NSString *_title;
    NSString *_subtitle;
    CPLSuggestionAssetList *_assetList;
    NSDate *_creationDate;
    long long _version;
    NSDate *_activationDate;
    NSDate *_relevantUntilDate;
    NSDate *_expungeDate;
    NSData *_actionData;
    NSData *_featuresData;
}

@property (copy, nonatomic) NSData *actionData; // @synthesize actionData=_actionData;
@property (copy, nonatomic) NSDate *activationDate; // @synthesize activationDate=_activationDate;
@property (copy, nonatomic) CPLSuggestionAssetList *assetList; // @synthesize assetList=_assetList;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSDate *expungeDate; // @synthesize expungeDate=_expungeDate;
@property (copy, nonatomic) NSData *featuresData; // @synthesize featuresData=_featuresData;
@property (nonatomic) unsigned short notificationState; // @synthesize notificationState=_notificationState;
@property (copy, nonatomic) NSDate *relevantUntilDate; // @synthesize relevantUntilDate=_relevantUntilDate;
@property (nonatomic) unsigned short state; // @synthesize state=_state;
@property (copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (nonatomic) unsigned short subtype; // @synthesize subtype=_subtype;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned short type; // @synthesize type=_type;
@property (nonatomic) long long version; // @synthesize version=_version;

+ (id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2;
+ (BOOL)serverSupportsSuggestion;
- (void).cxx_destruct;
- (CDUnknownBlockType)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (BOOL)supportsDeletion;
- (BOOL)supportsDirectDeletion;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;

@end

