//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSCopying-Protocol.h>
#import <PencilKit/PKTextInputDebugStateReporting-Protocol.h>

@class CHTextInputQueryItem, NSNumber, NSString, NSUUID, PKTextInputHandwritingShot;

@interface PKTextInputTargetState : NSObject <NSCopying, PKTextInputDebugStateReporting>
{
    NSNumber *_elementRecognitionIdentifier;
    CHTextInputQueryItem *_lastQueryItem;
    PKTextInputHandwritingShot *_handwritingShot;
    NSNumber *_writingSessionIdentifier;
    NSString *_uncommittedPendingText;
    NSString *_activePreviewText;
    long long _sessionCommitLength;
    long long _lastCommittedCharacterLevelPosition;
    NSUUID *_inProgressGestureStrokeUUID;
    double _inProgressGestureStartTimestamp;
    double _lastUpdateTimestamp;
    struct _NSRange _inProgressGestureInitialSelectedRange;
    struct _NSRange _inProgressGestureSelectionRange;
    struct _NSRange _inProgressGestureRangeToDelete;
}

@property (copy, nonatomic) NSString *activePreviewText; // @synthesize activePreviewText=_activePreviewText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *elementRecognitionIdentifier; // @synthesize elementRecognitionIdentifier=_elementRecognitionIdentifier;
@property (strong, nonatomic) PKTextInputHandwritingShot *handwritingShot; // @synthesize handwritingShot=_handwritingShot;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange inProgressGestureInitialSelectedRange; // @synthesize inProgressGestureInitialSelectedRange=_inProgressGestureInitialSelectedRange;
@property (nonatomic) struct _NSRange inProgressGestureRangeToDelete; // @synthesize inProgressGestureRangeToDelete=_inProgressGestureRangeToDelete;
@property (nonatomic) struct _NSRange inProgressGestureSelectionRange; // @synthesize inProgressGestureSelectionRange=_inProgressGestureSelectionRange;
@property (nonatomic) double inProgressGestureStartTimestamp; // @synthesize inProgressGestureStartTimestamp=_inProgressGestureStartTimestamp;
@property (strong, nonatomic) NSUUID *inProgressGestureStrokeUUID; // @synthesize inProgressGestureStrokeUUID=_inProgressGestureStrokeUUID;
@property (nonatomic) long long lastCommittedCharacterLevelPosition; // @synthesize lastCommittedCharacterLevelPosition=_lastCommittedCharacterLevelPosition;
@property (strong, nonatomic) CHTextInputQueryItem *lastQueryItem; // @synthesize lastQueryItem=_lastQueryItem;
@property (nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property (nonatomic) long long sessionCommitLength; // @synthesize sessionCommitLength=_sessionCommitLength;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *uncommittedPendingText; // @synthesize uncommittedPendingText=_uncommittedPendingText;
@property (copy, nonatomic) NSNumber *writingSessionIdentifier; // @synthesize writingSessionIdentifier=_writingSessionIdentifier;

- (void).cxx_destruct;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)reportDebugStateDescription:(CDUnknownBlockType)arg1;

@end

