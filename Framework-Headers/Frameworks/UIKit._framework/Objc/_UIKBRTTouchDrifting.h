//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIKBRTKeyboardTouchObserver.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer, UIView, _UIKBRTDecayingObject, _UIKBRTDecayingOffset, _UIKBRTTouchHistory, _UIKBRTTouchHistoryInfo;
@protocol _UIKBRTTouchDriftingDelegate;

__attribute__((visibility("hidden")))
@interface _UIKBRTTouchDrifting : _UIKBRTKeyboardTouchObserver
{
    BOOL _supportsDrifting;
    BOOL _leftDriftRemovingItems;
    BOOL _rightDriftRemovingItems;
    id<_UIKBRTTouchDriftingDelegate> _delegate;
    NSArray *_indexSearchOrder;
    NSMutableDictionary *_touches;
    _UIKBRTTouchHistory *_fHistory;
    _UIKBRTTouchHistory *_jHistory;
    _UIKBRTTouchHistory *_otherHistory;
    _UIKBRTDecayingObject *_enableLatchObj;
    _UIKBRTDecayingOffset *_leftHandDriftOffsetObj;
    _UIKBRTDecayingOffset *_leftHandFixedOffsetObj;
    _UIKBRTDecayingOffset *_rightHandDriftOffsetObj;
    _UIKBRTDecayingOffset *_rightHandFixedOffsetObj;
    _UIKBRTTouchHistoryInfo *_leftIndexFingerInfo;
    NSMutableSet *_leftDriftLockTouchIDs;
    _UIKBRTTouchHistoryInfo *_rightIndexFingerInfo;
    NSMutableSet *_rightDriftLockTouchIDs;
    UIView *_feedbackParentView;
    NSTimer *_feedbackTimer;
    UIView *_leftDriftFeedbackView;
    UIView *_rightDriftFeedbackView;
    UIView *_touchHistoryFeedbackView;
    NSMapTable *_touchHistoryViewMap;
    struct {
        double up;
        double down;
        double left;
        double right;
    } _touchError;
}

@property (nonatomic) id<_UIKBRTTouchDriftingDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) _UIKBRTDecayingObject *enableLatchObj; // @synthesize enableLatchObj=_enableLatchObj;
@property (strong, nonatomic) _UIKBRTTouchHistory *fHistory; // @synthesize fHistory=_fHistory;
@property (weak, nonatomic) UIView *feedbackParentView; // @synthesize feedbackParentView=_feedbackParentView;
@property (strong, nonatomic) NSTimer *feedbackTimer; // @synthesize feedbackTimer=_feedbackTimer;
@property (strong, nonatomic) NSArray *indexSearchOrder; // @synthesize indexSearchOrder=_indexSearchOrder;
@property (strong, nonatomic) _UIKBRTTouchHistory *jHistory; // @synthesize jHistory=_jHistory;
@property (strong, nonatomic) UIView *leftDriftFeedbackView; // @synthesize leftDriftFeedbackView=_leftDriftFeedbackView;
@property (strong, nonatomic) NSMutableSet *leftDriftLockTouchIDs; // @synthesize leftDriftLockTouchIDs=_leftDriftLockTouchIDs;
@property (nonatomic) BOOL leftDriftRemovingItems; // @synthesize leftDriftRemovingItems=_leftDriftRemovingItems;
@property (readonly, nonatomic) struct CGPoint leftHandDriftOffset;
@property (strong, nonatomic) _UIKBRTDecayingOffset *leftHandDriftOffsetObj; // @synthesize leftHandDriftOffsetObj=_leftHandDriftOffsetObj;
@property (strong, nonatomic) _UIKBRTDecayingOffset *leftHandFixedOffsetObj; // @synthesize leftHandFixedOffsetObj=_leftHandFixedOffsetObj;
@property (strong, nonatomic) _UIKBRTTouchHistoryInfo *leftIndexFingerInfo; // @synthesize leftIndexFingerInfo=_leftIndexFingerInfo;
@property (strong, nonatomic) _UIKBRTTouchHistory *otherHistory; // @synthesize otherHistory=_otherHistory;
@property (strong, nonatomic) UIView *rightDriftFeedbackView; // @synthesize rightDriftFeedbackView=_rightDriftFeedbackView;
@property (strong, nonatomic) NSMutableSet *rightDriftLockTouchIDs; // @synthesize rightDriftLockTouchIDs=_rightDriftLockTouchIDs;
@property (nonatomic) BOOL rightDriftRemovingItems; // @synthesize rightDriftRemovingItems=_rightDriftRemovingItems;
@property (readonly, nonatomic) struct CGPoint rightHandDriftOffset;
@property (strong, nonatomic) _UIKBRTDecayingOffset *rightHandDriftOffsetObj; // @synthesize rightHandDriftOffsetObj=_rightHandDriftOffsetObj;
@property (strong, nonatomic) _UIKBRTDecayingOffset *rightHandFixedOffsetObj; // @synthesize rightHandFixedOffsetObj=_rightHandFixedOffsetObj;
@property (strong, nonatomic) _UIKBRTTouchHistoryInfo *rightIndexFingerInfo; // @synthesize rightIndexFingerInfo=_rightIndexFingerInfo;
@property (nonatomic) BOOL supportsDrifting; // @synthesize supportsDrifting=_supportsDrifting;
@property (nonatomic) CDStruct_d2b197d1 touchError; // @synthesize touchError=_touchError;
@property (strong, nonatomic) UIView *touchHistoryFeedbackView; // @synthesize touchHistoryFeedbackView=_touchHistoryFeedbackView;
@property (strong, nonatomic) NSMapTable *touchHistoryViewMap; // @synthesize touchHistoryViewMap=_touchHistoryViewMap;
@property (strong, nonatomic) NSMutableDictionary *touches; // @synthesize touches=_touches;

+ (BOOL)isEnabled;
- (void).cxx_destruct;
- (struct CGPoint)_offsetForPoint:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2;
- (struct CGPoint)_pinOffset:(struct CGPoint)arg1;
- (struct CGPoint)_pointFromPoint:(struct CGPoint)arg1 plusOffset:(struct CGPoint)arg2;
- (void)_resetFeedback;
- (id)_touchDictWithFingerIds:(id)arg1;
- (void)_updateDriftForFingers:(id)arg1 leftHand:(BOOL)arg2 newestTouch:(id)arg3;
- (void)_updateDriftView;
- (void)_updateDriftViewTimer:(id)arg1;
- (void)_updateDriftWithTouchInfo:(id)arg1;
- (void)_updateHistory;
- (void)addTouchLocation:(struct CGPoint)arg1 withRadius:(double)arg2 withTouchTime:(double)arg3 withIdentifier:(id)arg4;
- (void)dealloc;
- (void)ignoreTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2;
- (id)init;
- (id)initWithParentView:(id)arg1;
- (void)moveTouchWithIdentifier:(id)arg1 toLocation:(struct CGPoint)arg2 withRadius:(double)arg3 atTouchTime:(double)arg4;
- (void)removeTouchWithIdentifier:(id)arg1 touchCancelled:(BOOL)arg2;
- (void)reset;
- (void)updateTouchWithIdentifier:(id)arg1 withTouchTime:(double)arg2 resultingError:(struct CGPoint)arg3 rowOffsetFromHomeRow:(long long)arg4;
- (void)updateWithFCenter:(struct CGPoint)arg1 jCenter:(struct CGPoint)arg2 keySize:(struct CGSize)arg3 rowOffsets:(id)arg4 homeRowOffsetIndex:(int)arg5;

@end

