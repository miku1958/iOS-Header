//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFTreeNode, NSMutableDictionary, NSString, NSUUID;
@protocol AFConversationDelegate, AFConversationStorable;

@interface AFConversation : NSObject
{
    NSMutableDictionary *_additionalInterpretationsForRefId;
    NSMutableDictionary *_updatedUserUtteranceForRefId;
    BOOL _synchronizedWithServer;
    NSUUID *_identifier;
    NSString *_languageCode;
    id<AFConversationDelegate> _delegate;
    AFTreeNode *_rootNode;
    id<AFConversationStorable> _lastRestoredItem;
}

@property (weak, nonatomic) id<AFConversationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic, setter=_setLastRestoredItem:) id<AFConversationStorable> lastRestoredItem; // @synthesize lastRestoredItem=_lastRestoredItem;
@property (strong, nonatomic, getter=_rootNode, setter=_setRootNode:) AFTreeNode *rootNode; // @synthesize rootNode=_rootNode;
@property (nonatomic, getter=isSynchronizedWithServer) BOOL synchronizedWithServer; // @synthesize synchronizedWithServer=_synchronizedWithServer;

- (void).cxx_destruct;
- (void)_addItemsForAceObjects:(id)arg1 type:(long long)arg2 aceCommandIdentifier:(id)arg3 dialogPhase:(id)arg4 asChildrenOfItemWithIdentifier:(id)arg5;
- (void)_changePresentationStateForNodes:(id)arg1;
- (id)_childOfNode:(id)arg1 withItemWhichCanBeUpdatedWithAceObject:(id)arg2 inDialogPhase:(id)arg3;
- (void)_didChangePresentationStateForItemAtIndexPaths:(id)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_indexPathForItemWithIdentifier:(id)arg1 ignoreNonExistent:(BOOL)arg2;
- (id)_indexPathsForAddingItemsWithCount:(long long)arg1 asChildrenOfItemWithIdentifier:(id)arg2;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_nodeAtIndexPath:(id)arg1;
- (BOOL)_nodeContainsProvisionalItems:(id)arg1;
- (void)_processInsertions:(id)arg1 inDialogPhase:(id)arg2;
- (void)_removeNodes:(id)arg1;
- (id)aceCommandIdentifierForItemAtIndexPath:(id)arg1;
- (id)aceObjectForItemAtIndexPath:(id)arg1;
- (void)addAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;
- (void)addItemForMusicStartSessionCommand:(id)arg1;
- (void)addItemForPartialResultCommand:(id)arg1;
- (void)addItemForSpeechRecognizedCommand:(id)arg1;
- (void)addItemsForAceObjects:(id)arg1 type:(long long)arg2 dialogPhase:(id)arg3 asChildrenOfItemWithIdentifier:(id)arg4;
- (void)addItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3;
- (void)addItemsForAddViewsCommand:(id)arg1;
- (void)addItemsForShowHelpCommand:(id)arg1;
- (void)addRecognitionUpdateWithPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (void)addSelectionResponse:(id)arg1;
- (id)additionalSpeechInterpretationsForRefId:(id)arg1;
- (void)cancelItemWithIdentifier:(id)arg1;
- (BOOL)containsItemForAceViewWithIdentifier:(id)arg1;
- (BOOL)containsItemWithIdentifier:(id)arg1;
- (id)dialogPhaseForItemAtIndexPath:(id)arg1;
- (BOOL)hasItemWithIdentifier:(id)arg1;
- (id)identifierOfItemAtIndexPath:(id)arg1;
- (id)indexPathForItemWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 languageCode:(id)arg2;
- (id)initWithIdentifier:(id)arg1 languageCode:(id)arg2 rootNode:(id)arg3;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (void)insertItemsForAceViews:(id)arg1 withDialogPhase:(id)arg2 atIndexPaths:(id)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (BOOL)itemAtIndexPathIsVirgin:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (id)lastItem;
- (long long)numberOfChildrenForItemAtIndexPath:(id)arg1;
- (long long)numberOfChildrenForItemWithIdentifier:(id)arg1;
- (id)parentOfItemWithIdentifier:(id)arg1;
- (long long)presentationStateForItemAtIndexPath:(id)arg1;
- (id)propertyListRepresentation;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (void)removeItemsFollowingItemAtIndexPath:(id)arg1;
- (void)removeItemsWithIdentifiers:(id)arg1;
- (long long)typeForItemAtIndexPath:(id)arg1;
- (void)updateWithUpdateViewsCommand:(id)arg1;
- (id)updatedUserUtteranceForRefId:(id)arg1;

@end

