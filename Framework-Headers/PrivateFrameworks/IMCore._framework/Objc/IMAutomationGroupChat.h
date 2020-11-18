//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMCoreAutomationHook.h>

@interface IMAutomationGroupChat : IMCoreAutomationHook
{
}

- (id)_runChangeParticipantsQueryWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5 addParticipants:(BOOL)arg6;
- (id)addParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;
- (id)changeGroupNameWithGroupID:(id)arg1 newName:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;
- (id)createGroupChatWithDestinationIDs:(id)arg1 error:(id *)arg2 optArguments:(id)arg3;
- (id)groupNameWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id *)arg3 optArguments:(id)arg4;
- (id)groupParticipantsWithGroupID:(id)arg1 timeOut:(double)arg2 error:(id *)arg3 optArguments:(id)arg4;
- (id)removeParticipantsWithGroupID:(id)arg1 participants:(id)arg2 timeOut:(double)arg3 error:(id *)arg4 optArguments:(id)arg5;

@end

