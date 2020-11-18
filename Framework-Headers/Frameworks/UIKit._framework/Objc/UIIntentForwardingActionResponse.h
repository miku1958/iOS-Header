//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/BSActionResponse.h>

@class INIntentResponse;

@interface UIIntentForwardingActionResponse : BSActionResponse
{
    INIntentResponse *_cachedIntentResponse;
}

@property (readonly, nonatomic) INIntentResponse *intentResponse;

+ (id)responseWithIntentResponse:(id)arg1;
- (void).cxx_destruct;
- (id)initWithIntentResponse:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end

