//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/NSSecureCoding-Protocol.h>

@class NSArray, SIRINLURequestID, SIRINLUTurnInput;

@interface SIRINLURequest : NSObject <NSSecureCoding>
{
    SIRINLURequestID *_requestId;
    SIRINLUTurnInput *_currentTurnInput;
    NSArray *_previousTurnInputs;
}

@property (strong, nonatomic) SIRINLUTurnInput *currentTurnInput; // @synthesize currentTurnInput=_currentTurnInput;
@property (strong, nonatomic) NSArray *previousTurnInputs; // @synthesize previousTurnInputs=_previousTurnInputs;
@property (strong, nonatomic) SIRINLURequestID *requestId; // @synthesize requestId=_requestId;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestId:(id)arg1 currentTurnInput:(id)arg2 previousTurnInputs:(id)arg3;

@end

