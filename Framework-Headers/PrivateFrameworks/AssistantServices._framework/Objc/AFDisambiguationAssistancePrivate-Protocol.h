//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AFDisambiguationInfo, NSData, NSString, SAUIListItem;

@protocol AFDisambiguationAssistancePrivate

@property (readonly, nonatomic) NSData *af_disambiguationIdentifier;
@property (strong, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;

- (NSString *)af_indexIdentifierForItem:(SAUIListItem *)arg1;
- (SAUIListItem *)af_itemForIndexIdentifier:(NSString *)arg1;
@end

