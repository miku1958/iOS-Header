//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class NSMutableDictionary;

@interface SGNaturalLanguageDissector : SGPipelineDissector
{
    NSMutableDictionary *_conversations;
}

+ (BOOL)allowNaturalLanguageDissector;
+ (id)ipsosMessageWithEntity:(id)arg1 store:(id)arg2;
- (void).cxx_destruct;
- (void)addEnrichmentForEvents:(id)arg1 forMessage:(id)arg2 toEntity:(id)arg3;
- (id)conversationWithIdentifier:(id)arg1;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)init;
- (id)initWithoutSharedInstance;

@end

