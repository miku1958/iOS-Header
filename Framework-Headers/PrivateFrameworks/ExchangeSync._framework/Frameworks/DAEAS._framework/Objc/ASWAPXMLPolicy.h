//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASPolicy.h>

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy
{
    NSString *_data;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)_policyForWAPProvisioningXMLData;
- (void)_setData:(id)arg1;
- (id)_wbxmlPolicyDict;
- (id)data;
- (id)perDomainDictsForPolicy;

@end

