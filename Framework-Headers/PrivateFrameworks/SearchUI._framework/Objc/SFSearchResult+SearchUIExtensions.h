//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SearchUI/SearchUIAuxilliaryFieldProtocol-Protocol.h>

@class NSString, SFActionItem, SFCard, SFImage, SFRichText;

@interface SFSearchResult (SearchUIExtensions) <SearchUIAuxilliaryFieldProtocol>

@property (readonly) SFActionItem *action;
@property (readonly) NSString *auxiliaryBottomText;
@property (readonly) int auxiliaryBottomTextColor;
@property (readonly) NSString *auxiliaryMiddleText;
@property (readonly) NSString *auxiliaryTopText;
@property (readonly) SFCard *card;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SFImage *thumbnail;
@property (readonly) SFRichText *title;

@end

