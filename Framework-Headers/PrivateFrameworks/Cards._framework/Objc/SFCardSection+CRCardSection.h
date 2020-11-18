//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSection.h>

#import <Cards/CRCardSection-Protocol.h>

@class NSArray, NSString;
@protocol SFCardSection;

@interface SFCardSection (CRCardSection) <CRCardSection>

@property (readonly, nonatomic) NSArray *actionCommands;
@property (readonly, nonatomic) id<SFCardSection> backingCardSection;
@property (readonly, nonatomic) NSString *cardSectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)parametersForInteraction:(id)arg1;
@end
