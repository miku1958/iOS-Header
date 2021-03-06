//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMManagementStateCommand_Status : CEMPayloadBase
{
    NSArray *_statusCommands;
    NSArray *_statusDeclarations;
}

@property (copy, nonatomic) NSArray *statusCommands; // @synthesize statusCommands=_statusCommands;
@property (copy, nonatomic) NSArray *statusDeclarations; // @synthesize statusDeclarations=_statusDeclarations;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCommands:(id)arg1 withDeclarations:(id)arg2;
+ (id)buildWithCommands:(id)arg1 withDeclarations:(id)arg2;
- (void).cxx_destruct;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end

