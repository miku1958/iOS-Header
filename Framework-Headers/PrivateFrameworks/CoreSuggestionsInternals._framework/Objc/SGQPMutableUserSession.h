//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SGQPPrediction;

@interface SGQPMutableUserSession : NSObject
{
    BOOL _searchPerformed;
    NSString *_conversationId;
    NSArray *_generatedPredictions;
    NSArray *_predictionsShown;
    NSArray *_messagesInConversation;
    NSString *_abGroup;
    NSString *_language;
    SGQPPrediction *_engagedPrediction;
    long long _engagedPredictionPosition;
}

@property (readonly) NSString *abGroup; // @synthesize abGroup=_abGroup;
@property (readonly) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property (strong) SGQPPrediction *engagedPrediction; // @synthesize engagedPrediction=_engagedPrediction;
@property long long engagedPredictionPosition; // @synthesize engagedPredictionPosition=_engagedPredictionPosition;
@property (readonly) NSArray *generatedPredictions; // @synthesize generatedPredictions=_generatedPredictions;
@property (readonly) NSString *language; // @synthesize language=_language;
@property (readonly) NSArray *messagesInConversation; // @synthesize messagesInConversation=_messagesInConversation;
@property (strong) NSArray *predictionsShown; // @synthesize predictionsShown=_predictionsShown;
@property BOOL searchPerformed; // @synthesize searchPerformed=_searchPerformed;

+ (id)sessionWithConversationId:(id)arg1 predictions:(id)arg2 messages:(id)arg3 language:(id)arg4 abGroup:(id)arg5;
- (void).cxx_destruct;
- (void)clearEngagedPrediction;
- (id)initWithConversationId:(id)arg1 predictions:(id)arg2 messages:(id)arg3 language:(id)arg4 abGroup:(id)arg5;
- (void)setEngagedPredictionWithIdentifier:(id)arg1;
- (void)setSearchPerformed;
- (void)setShowedPredictionsWithIdentifiers:(id)arg1;

@end

