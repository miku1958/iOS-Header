//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFDataStore, AFDialogPhase, AceObject, NSString, NSUUID;

@protocol AFConversationStorable <NSObject>
- (NSString *)aceCommandIdentifier;
- (AceObject *)aceObject;
- (AFDataStore *)associatedDataStore;
- (AFDialogPhase *)dialogPhase;
- (NSUUID *)identifier;
- (BOOL)isImmersiveExperience;
- (BOOL)isSupplemental;
- (BOOL)isTransient;
- (BOOL)isVirgin;
- (long long)presentationState;
- (NSUUID *)revisionIdentifier;
- (long long)type;
@end

