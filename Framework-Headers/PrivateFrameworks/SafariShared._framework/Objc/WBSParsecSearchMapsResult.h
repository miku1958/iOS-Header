//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecSearchResult.h>

#import <SafariShared/WBSParsecMapsResultFeedbackDelegate-Protocol.h>
#import <SafariShared/WBSParsecSearchResultPresentedInCard-Protocol.h>

@class MKMapItem, NSArray, NSString, NSURL, WBSParsecSearchMapsResultExtraCompletionItem, WBSParsecSearchSession;

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult <WBSParsecSearchResultPresentedInCard, WBSParsecMapsResultFeedbackDelegate>
{
    MKMapItem *_mapItem;
    NSString *_mapsDataType;
    NSArray *_additionalMapItems;
    NSString *_mapsResultType;
    NSURL *_moreURL;
    NSString *_nearbyBusinessesString;
    WBSParsecSearchMapsResultExtraCompletionItem *_extraCompletionItem;
    WBSParsecSearchSession *_parsecSearchSession;
    WBSParsecSearchResult *_hiddenParsecResult;
}

@property (readonly, nonatomic) NSArray *additionalMapItems; // @synthesize additionalMapItems=_additionalMapItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) WBSParsecSearchResult *hiddenParsecResult; // @synthesize hiddenParsecResult=_hiddenParsecResult;
@property (readonly, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property (readonly, nonatomic) NSString *mapsResultType; // @synthesize mapsResultType=_mapsResultType;
@property (readonly, nonatomic) NSURL *moreURL; // @synthesize moreURL=_moreURL;
@property (readonly, nonatomic) NSString *nearbyBusinessesString; // @synthesize nearbyBusinessesString=_nearbyBusinessesString;
@property (strong, nonatomic) WBSParsecSearchSession *parsecSearchSession; // @synthesize parsecSearchSession=_parsecSearchSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (void)placeViewControllerShouldLogFeedbackForDismissal:(id)arg1;
- (id)supportedStyleOverrides;

@end
