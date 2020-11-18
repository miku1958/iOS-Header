//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PBAutomationUtilManager : NSObject
{
    BOOL _timeoutQueued;
    int _readyForPairingProcess;
    NSArray *_removeList;
    NSDictionary *_automationPreferences;
    NSMutableArray *_incorrectClasses;
    NSMutableDictionary *_blocksToRunLater;
    NSMutableDictionary *_numbTimesVisitedView;
    NSMutableDictionary *_notificationToPath;
    NSMutableSet *_notificationsWaitingOn;
    NSMutableDictionary *_classInformation;
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}

@property (strong) NSDictionary *automationPreferences; // @synthesize automationPreferences=_automationPreferences;
@property (strong) NSMutableDictionary *blocksToRunLater; // @synthesize blocksToRunLater=_blocksToRunLater;
@property (strong) NSMutableDictionary *classInformation; // @synthesize classInformation=_classInformation;
@property (strong) NSMutableArray *edges; // @synthesize edges=_edges;
@property (strong) NSMutableArray *incorrectClasses; // @synthesize incorrectClasses=_incorrectClasses;
@property (strong) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property (strong) NSMutableDictionary *notificationToPath; // @synthesize notificationToPath=_notificationToPath;
@property (strong) NSMutableSet *notificationsWaitingOn; // @synthesize notificationsWaitingOn=_notificationsWaitingOn;
@property (strong) NSMutableDictionary *numbTimesVisitedView; // @synthesize numbTimesVisitedView=_numbTimesVisitedView;
@property int readyForPairingProcess; // @synthesize readyForPairingProcess=_readyForPairingProcess;
@property (strong) NSArray *removeList; // @synthesize removeList=_removeList;
@property BOOL timeoutQueued; // @synthesize timeoutQueued=_timeoutQueued;

+ (BOOL)COSGenerateDocumentation;
+ (BOOL)PBAutomationTesting;
+ (BOOL)PBAutomationUseModifiedFlow;
+ (id)sharedAutomationUtilManager;
+ (id)viewFromKeyword:(id)arg1 andConnectionWeight:(double)arg2;
+ (id)viewInClass:(id)arg1 andSubClass:(id)arg2 andViewName:(id)arg3 andConnectionWeight:(double)arg4;
- (void).cxx_destruct;
- (void)addClass:(id)arg1;
- (void)callTimeout;
- (void)callbackReceived:(id)arg1 andAQuickFixParameter:(BOOL)arg2;
- (id)checkClass:(id)arg1;
- (void)checkPList;
- (void)cleanUpAndEndAutomationProcess;
- (void)createEdges:(id)arg1;
- (void)createNodes;
- (id)documentation;
- (id)documentationMap;
- (void)executeBlock:(id)arg1 fromViewPath:(id)arg2;
- (void)expandClassInformation;
- (id)findPathForRandomPList:(id)arg1;
- (void)generateDocumentation:(id)arg1;
- (id)getEdge:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3 andEndViewName:(id)arg4 andEndSubViewName:(id)arg5 andEndSpecificViewName:(id)arg6 andButtonName:(id)arg7 andWeight:(id)arg8;
- (id)getNextButton:(id)arg1 andView:(id)arg2;
- (id)getNextTextFields:(id)arg1 andView:(id)arg2;
- (id)getNode:(id)arg1 andParentName:(id)arg2 andViewName:(id)arg3 andDocumentationDescription:(id)arg4;
- (id)getNode:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3;
- (id)init;
- (BOOL)isRemoved:(id)arg1;
- (id)orderPList:(id)arg1;
- (id)parseNodeString:(id)arg1;
- (id)parseViewPath:(id)arg1;
- (void)postDarwinNotification:(struct __CFString *)arg1;
- (void)runBlock:(CDUnknownBlockType)arg1 forPath:(id)arg2 andAQuickFixParameter:(BOOL)arg3;
- (void)seeIfReadyForThePairingProcess;
- (void)signUpForNotifications;
- (void)storeBlockForLater:(CDUnknownBlockType)arg1 forPath:(id)arg2;
- (id)subViewsTypeConvert:(id)arg1;
- (void)takeScreenshot:(id)arg1 andView:(id)arg2;
- (void)takeScreenshot:(id)arg1 andViewController:(id)arg2;
- (void)throwError;
- (void)updateNodeExpectedNumbClicks;
- (void)updatePList;
- (void)updatePListWithoutNotification;
- (id)viewAndActionsTypeConvert:(id)arg1;
- (BOOL)waitingOnNotifications:(id)arg1;

@end
