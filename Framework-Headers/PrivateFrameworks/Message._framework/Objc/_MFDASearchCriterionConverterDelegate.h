//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFMessageCriterionConverterDelegate-Protocol.h>

@class NSString;

@interface _MFDASearchCriterionConverterDelegate : NSObject <MFMessageCriterionConverterDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_shouldConvertEqualsToContainsForKey:(id)arg1;
- (id)messageCriterionConverter:(id)arg1 predicateKeysForCriterionType:(long long)arg2;
- (unsigned long long)messageCriterionConverter:(id)arg1 willUsePredicateOperatorType:(unsigned long long)arg2 forKey:(id)arg3;

@end

