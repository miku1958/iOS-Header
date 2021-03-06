//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSArray, NSMutableArray, NSNumber;

@interface ASResolveRecipientsCertificatesItem : ASItem
{
    NSNumber *_certCount;
    NSNumber *_recipientCount;
    NSNumber *_easStatus;
    NSMutableArray *_mCertificates;
}

@property (strong, nonatomic) NSNumber *certCount; // @synthesize certCount=_certCount;
@property (readonly, nonatomic) NSArray *certificates;
@property (strong, nonatomic, setter=setEASStatus:) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property (strong, nonatomic) NSMutableArray *mCertificates; // @synthesize mCertificates=_mCertificates;
@property (strong, nonatomic) NSNumber *recipientCount; // @synthesize recipientCount=_recipientCount;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (void)addCertificateString:(id)arg1;
- (id)description;

@end

