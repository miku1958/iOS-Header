//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OpusKit/JSOKWidgetNodeExport-Protocol.h>
#import <OpusKit/OKActionResponderPrivate-Protocol.h>
#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKPresentationReadiness-Protocol.h>
#import <OpusKit/OKPresentationReadinessPrivate-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>
#import <OpusKit/OKWidgetProtocol-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OFNSOperation, OFUIView, OKPageViewController, OKPhysicsBody, OKPhysicsField, OKPresentationWidget, OKWidgetSceneKitView, SCNNode;
@protocol OKWidgetNodeDelegate;

@interface OKWidgetNode : NSObject <OKCollectionProxyDataSource, OKActionResponderPrivate, OKPresentationReadinessPrivate, OKWidgetProtocol, OKSettingsSupport, JSOKWidgetNodeExport, OKPresentationReadiness>
{
    NSMutableArray *_materials;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    NSArray *_particlesEmitters;
    NSArray *_contentEffects;
    BOOL _hideUntilReady;
    BOOL _userInteractionEnabled;
    struct CATransform3D _widgetTransform;
    struct CATransform3D _motionTransform;
    BOOL _motionEnabled;
    BOOL _motionTiltXEnabled;
    BOOL _motionTiltYEnabled;
    BOOL _motionTiltZEnabled;
    struct CGSize _motionXMinMax;
    struct CGSize _motionYMinMax;
    struct CGSize _motionZMinMax;
    struct CGPoint _motionXTiltAnchorPoint;
    struct CGPoint _motionYTiltAnchorPoint;
    struct CGPoint _motionZTiltAnchorPoint;
    BOOL _motionXTiltReversed;
    BOOL _motionYTiltReversed;
    BOOL _motionZTiltReversed;
    NSString *_prepareActionScript;
    NSArray *_layoutSteps;
    NSMutableDictionary *_actionBindings;
    NSString *_canPerformActionScript;
    NSString *_c3dFile;
    SCNNode *_sceneLoaded;
    NSArray *_nodeNames;
    NSDictionary *_animationsPath;
    NSMutableDictionary *_animations;
    NSDictionary *_options;
    NSArray *_constraints;
    NSMutableArray *_subWidgetNodes;
    SCNNode *_node;
    OKPageViewController *_pageViewController;
    BOOL _needsLoadRessources;
    BOOL _isSettingOpacityManually;
    OKWidgetSceneKitView *_widgetSceneKitView;
    NSDictionary *_physicsShapeOptions;
    OFNSOperation *_applyOptionOperation;
    BOOL _canStartCoachPatato;
    BOOL _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
    OKPresentationWidget *_widget;
    OKWidgetNode *_parentWidgetNode;
    unsigned long long _presentationMode;
    unsigned long long _prepareMode;
    id<OKWidgetNodeDelegate> _delegate;
    OKPhysicsBody *_physicsBody;
    OKPhysicsField *_physicsField;
    OFUIView *actionView;
    struct SCNVector3 _visionVector;
}

@property (readonly, strong, nonatomic) NSDictionary *actionBidings; // @synthesize actionBidings=_actionBindings;
@property (readonly) OFUIView *actionView; // @synthesize actionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<OKWidgetNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) SCNNode *node; // @synthesize node=_node;
@property (nonatomic) OKPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property (nonatomic) OKWidgetNode *parentWidgetNode; // @synthesize parentWidgetNode=_parentWidgetNode;
@property (readonly, nonatomic) OKPhysicsBody *physicsBody; // @synthesize physicsBody=_physicsBody;
@property (readonly, nonatomic) OKPhysicsField *physicsField; // @synthesize physicsField=_physicsField;
@property (readonly, nonatomic) unsigned long long prepareMode; // @synthesize prepareMode=_prepareMode;
@property (readonly, nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) struct SCNVector3 visionVector; // @synthesize visionVector=_visionVector;
@property (strong, nonatomic) OKPresentationWidget *widget; // @synthesize widget=_widget;
@property (nonatomic) OKWidgetSceneKitView *widgetSceneKitView;

+ (id)proxyForNode:(id)arg1;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(BOOL)arg2;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (void)addSubWidgetNode:(id)arg1;
- (id)allActionBindings;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (void)applyLayoutSettings;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)becomeReady;
- (BOOL)canPerformAction:(id)arg1;
- (void)commonInit;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(id)arg2;
- (struct SCNVector3)convertScreenPoint:(struct SCNVector3)arg1;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (void)dealloc;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (void)dispatchAction:(id)arg1 toTarget:(id)arg2;
- (id)init;
- (id)initWithNode:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (BOOL)interactivityEnabled;
- (BOOL)isReady:(BOOL)arg1;
- (id)layoutSettingsKeys;
- (void)loadRessourcesIfNeeded;
- (id)name;
- (void)notifyWhenBecomesReady:(CDUnknownBlockType)arg1;
- (BOOL)performActionScript:(id)arg1 withAction:(id)arg2;
- (void)playAnimationWithKey:(id)arg1 repeatAnimation:(BOOL)arg2 removeOnCompletion:(BOOL)arg3;
- (BOOL)prepareForDisplay;
- (void)prepareForMode:(unsigned long long)arg1;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (BOOL)prepareForUnload;
- (BOOL)prepareForWarmup;
- (void)readinessDidChange:(BOOL)arg1;
- (double)readyProgress:(BOOL)arg1;
- (void)removeActionBinding:(id)arg1;
- (void)removeAllActionBindings;
- (void)removeAllReadyNotifications;
- (void)removeFromParentNode;
- (void)resetFile;
- (void)resetOption;
- (void)resignReady;
- (void)sceneLoaded:(id)arg1;
- (BOOL)sendAction:(id)arg1 toTarget:(id)arg2;
- (void)setNeedsApplySettings;
- (void)setNeedsPrepare;
- (void)setSettingActionBindings:(id)arg1;
- (void)setSettingAnimations:(id)arg1;
- (void)setSettingC3dFile:(id)arg1;
- (void)setSettingCanPerformActionScript:(id)arg1;
- (void)setSettingCanStartCoachPatato:(BOOL)arg1;
- (void)setSettingConstraints:(id)arg1;
- (void)setSettingContentFilters:(id)arg1;
- (void)setSettingEulerAngles:(struct SCNVector3)arg1;
- (void)setSettingHidden:(BOOL)arg1;
- (void)setSettingHideUntilReady:(BOOL)arg1;
- (void)setSettingMotionEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltXEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltYEnabled:(BOOL)arg1;
- (void)setSettingMotionTiltZEnabled:(BOOL)arg1;
- (void)setSettingMotionXMinMax:(struct CGSize)arg1;
- (void)setSettingMotionXTiltAnchorPoint:(struct CGPoint)arg1;
- (void)setSettingMotionXTiltReversed:(BOOL)arg1;
- (void)setSettingMotionYMinMax:(struct CGSize)arg1;
- (void)setSettingMotionYTiltAnchorPoint:(struct CGPoint)arg1;
- (void)setSettingMotionYTiltReversed:(BOOL)arg1;
- (void)setSettingMotionZMinMax:(struct CGSize)arg1;
- (void)setSettingMotionZTiltAnchorPoint:(struct CGPoint)arg1;
- (void)setSettingMotionZTiltReversed:(BOOL)arg1;
- (void)setSettingNodeNames:(id)arg1;
- (void)setSettingOpacity:(double)arg1;
- (void)setSettingOptions:(id)arg1;
- (void)setSettingParticlesEmitter:(id)arg1;
- (void)setSettingPhysicsBody:(id)arg1;
- (void)setSettingPhysicsField:(id)arg1;
- (void)setSettingPhysicsShapeOptions:(id)arg1;
- (void)setSettingPosition:(struct SCNVector3)arg1;
- (void)setSettingPrepareActionScript:(id)arg1;
- (void)setSettingRotation:(struct SCNVector4)arg1;
- (void)setSettingScale:(struct SCNVector3)arg1;
- (void)setSettingUserInteractionEnabled:(BOOL)arg1;
- (void)setSettingVisionVector:(struct SCNVector3)arg1;
- (void)setSettingWorldPosition:(struct SCNVector3)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingActionBindings;
- (id)settingAnimations;
- (id)settingC3dFile;
- (BOOL)settingCanStartCoachPatato;
- (id)settingConstraints;
- (id)settingContentFilters;
- (struct SCNVector3)settingEulerAngles;
- (BOOL)settingHidden;
- (BOOL)settingMotionEnabled;
- (BOOL)settingMotionTiltXEnabled;
- (BOOL)settingMotionTiltYEnabled;
- (BOOL)settingMotionTiltZEnabled;
- (struct CGSize)settingMotionXMinMax;
- (struct CGPoint)settingMotionXTiltAnchorPoint;
- (BOOL)settingMotionXtiltReversed;
- (struct CGSize)settingMotionYMinMax;
- (struct CGPoint)settingMotionYTiltAnchorPoint;
- (BOOL)settingMotionYTiltReversed;
- (struct CGSize)settingMotionZMinMax;
- (struct CGPoint)settingMotionZTiltAnchorPoint;
- (BOOL)settingMotionZTiltReversed;
- (id)settingName;
- (id)settingNodeNames;
- (id)settingObjectForKey:(id)arg1;
- (double)settingOpacity;
- (id)settingOptions;
- (id)settingPhysicsBody;
- (id)settingPhysicsField;
- (struct SCNVector3)settingPosition;
- (struct SCNVector4)settingRotation;
- (struct SCNVector3)settingScale;
- (struct SCNVector3)settingVisionVector;
- (struct SCNVector3)settingWorldPosition;
- (void)setupAnimations;
- (void)setupConstraints:(id)arg1;
- (void)setupFile;
- (void)setupOptions;
- (void)setupParticlesEmitter:(id)arg1;
- (BOOL)supportsReadiness;
- (void)unloadRessources;
- (void)updateMotion;
- (void)updateTransforms;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (id)valueForKeyPath:(id)arg1 withJSValue:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)visibleSubWidgets;
- (id)widgetNodeForName:(id)arg1 recursively:(BOOL)arg2;
- (id)widgetNodesContainingActionBindings;

@end
