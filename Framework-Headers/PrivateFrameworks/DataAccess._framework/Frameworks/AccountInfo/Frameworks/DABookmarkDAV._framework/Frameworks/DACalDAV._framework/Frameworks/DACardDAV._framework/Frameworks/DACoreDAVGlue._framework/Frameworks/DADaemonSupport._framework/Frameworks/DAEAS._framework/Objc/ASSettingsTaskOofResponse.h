//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASSettingsTaskOofGetResponse, NSNumber;

@interface ASSettingsTaskOofResponse : ASItem
{
    NSNumber *_status;
    ASSettingsTaskOofGetResponse *_oofGetResult;
}

@property (strong, nonatomic) ASSettingsTaskOofGetResponse *oofGetResult; // @synthesize oofGetResult=_oofGetResult;
@property (strong, nonatomic) NSNumber *status; // @synthesize status=_status;

+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
- (void).cxx_destruct;
- (id)description;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end

