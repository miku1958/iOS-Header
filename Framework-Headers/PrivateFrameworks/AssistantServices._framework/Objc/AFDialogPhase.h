//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFDialogPhase : NSObject <NSSecureCoding>
{
    long long _type;
}

@property (readonly, nonatomic) NSString *aceDialogPhaseValue;
@property (readonly, nonatomic, getter=isCancelledDialogPhase) BOOL cancelledDialogPhase;
@property (readonly, nonatomic, getter=isClarificationDialogPhase) BOOL clarificationDialogPhase;
@property (readonly, nonatomic, getter=isCompletionDialogPhase) BOOL completionDialogPhase;
@property (readonly, nonatomic, getter=isConfirmationDialogPhase) BOOL confirmationDialogPhase;
@property (readonly, nonatomic, getter=isConfirmedDialogPhase) BOOL confirmedDialogPhase;
@property (readonly, nonatomic, getter=isErrorDialogPhase) BOOL errorDialogPhase;
@property (readonly, nonatomic, getter=isExpository) BOOL expository;
@property (readonly, nonatomic, getter=isReflectionDialogPhase) BOOL reflectionDialogPhase;
@property (readonly, nonatomic, getter=isSummaryDialogPhase) BOOL summaryDialogPhase;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic, getter=_type) long long type; // @synthesize type=_type;
@property (readonly, nonatomic, getter=isUserRequestDialogPhase) BOOL userRequestDialogPhase;

+ (id)_dialogPhaseWithType:(long long)arg1;
+ (id)acknowledgementDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;
+ (id)errorDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)statusDialogPhase;
+ (id)summaryDialogPhase;
+ (BOOL)supportsSecureCoding;
+ (id)userRequestDialogPhase;
- (id)_initWithType:(long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDialogPhase:(id)arg1;
- (BOOL)isPossiblyPartOfMultiTurnRequest;
- (BOOL)replacesPreviousSnippetContents;

@end
