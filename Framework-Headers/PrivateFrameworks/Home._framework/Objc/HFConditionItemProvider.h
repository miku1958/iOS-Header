//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HFTriggerBuilder, NSMutableSet;

@interface HFConditionItemProvider : HFItemProvider
{
    BOOL _includeSuggestions;
    HFTriggerBuilder *_triggerBuilder;
    NSMutableSet *_conditionItems;
}

@property (strong, nonatomic) NSMutableSet *conditionItems; // @synthesize conditionItems=_conditionItems;
@property (readonly, nonatomic) BOOL includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder; // @synthesize triggerBuilder=_triggerBuilder;

- (void).cxx_destruct;
- (id)_suggestedConditionBuilders;
- (id)initWithHome:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 includeSuggestions:(BOOL)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

