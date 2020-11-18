//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CDInteractionAdvising;

@interface _CDInteractionAdvisorSimple : NSObject
{
    id<_CDInteractionAdvising> _interactionAdvisor;
}

@property (strong) id<_CDInteractionAdvising> interactionAdvisor; // @synthesize interactionAdvisor=_interactionAdvisor;

+ (id)advisorSettingsForMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingHandles:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingPersonID:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
- (void).cxx_destruct;
- (id)bestInteractionMatchingContactID:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingDisplayName:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingHandles:(id)arg1 mechanism:(long long)arg2;
- (id)init;
- (id)initWithCoreDuetDaemon;
- (id)initWithCoreDuetDatabase;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;

@end
