//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem
{
    NSNumber *_easStatus;
    NSString *_mergedFreeBusy;
}

@property (strong, nonatomic) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
@property (strong, nonatomic) NSString *mergedFreeBusy; // @synthesize mergedFreeBusy=_mergedFreeBusy;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)description;
- (void)setEASStatus:(id)arg1;

@end

