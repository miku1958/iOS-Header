//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem
{
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (void)_setKey:(id)arg1;
- (void)_setStatus:(id)arg1;
- (void)_setType:(id)arg1;
- (id)description;
- (id)key;
- (id)perDomainDictsForPolicy;
- (int)status;
- (id)type;

@end
