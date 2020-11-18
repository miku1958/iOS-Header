//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXWebContentComponentContentRuleProvider-Protocol.h>

@class NSString;
@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider>
{
    id<FCNewsAppConfigurationManager> _appConfigurationManager;
    id<FCHeadlineProviding> _headline;
}

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentRules;
- (id)initWithAppConfigurationManager:(id)arg1 headline:(id)arg2;

@end
