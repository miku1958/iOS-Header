//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNMeContactComparisonStrategy-Protocol.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy>
{
    NSSet *_meContactIdentifiersFound;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSSet *meContactIdentifiersFound; // @synthesize meContactIdentifiersFound=_meContactIdentifiersFound;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1;
- (BOOL)isMeContact:(id)arg1;
- (void)meContactChangedInStore:(id)arg1;
- (id)meContactIdentifiers;

@end

