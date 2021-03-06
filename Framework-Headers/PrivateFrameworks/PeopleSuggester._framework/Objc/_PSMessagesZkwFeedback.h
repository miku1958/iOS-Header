//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _PSMessagesZkwFeedback : NSObject
{
    BOOL _dryRun;
    NSString *_chatGuidEngaged;
    NSArray *_suggestions;
}

@property (readonly, copy, nonatomic) NSString *chatGuidEngaged; // @synthesize chatGuidEngaged=_chatGuidEngaged;
@property (nonatomic) BOOL dryRun; // @synthesize dryRun=_dryRun;
@property (readonly, copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;

- (void).cxx_destruct;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1;
- (id)feedbackPayload;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2;
- (id)reasonForSuggestionIndex:(unsigned long long)arg1;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)arg1;

@end

