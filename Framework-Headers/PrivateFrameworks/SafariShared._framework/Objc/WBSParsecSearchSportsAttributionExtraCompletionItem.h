//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, NSURL, SFSearchResult, WBSParsecImageRepresentation;

@interface WBSParsecSearchSportsAttributionExtraCompletionItem : WBSParsecModel <WBSCompletionListItem>
{
    SFSearchResult *sfSearchResultValue;
    NSString *_label;
    NSURL *_url;
    WBSParsecImageRepresentation *_imageRepresentation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long engagementDestination;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) WBSParsecImageRepresentation *imageRepresentation; // @synthesize imageRepresentation=_imageRepresentation;
@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue; // @synthesize sfSearchResultValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)schema;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

