//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCard.h>

#import <Cards/CRCard-Protocol.h>

@class NSArray, NSSet, NSString;

@interface SFCard (CRCard) <CRCard>

@property (readonly, nonatomic) BOOL asynchronous;
@property (readonly, nonatomic) SFCard *backingCard;
@property (readonly, nonatomic) NSArray *cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *dismissalCommands;
@property (readonly, nonatomic) BOOL flexibleSectionOrder;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *interactions;
@property (readonly) Class superclass;

+ (id)_interactionsByIntentDataHashes;
- (id)_interactionDataKey;
- (id)interaction;
- (void)loadCardWithCompletion:(CDUnknownBlockType)arg1;
@end
