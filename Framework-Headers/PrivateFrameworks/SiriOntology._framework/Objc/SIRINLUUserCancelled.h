//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUUserDialogAct-Protocol.h>

@class USOSerializedGraph;

@interface SIRINLUUserCancelled : NSObject <SIRINLUUserDialogAct>
{
    USOSerializedGraph *_reference;
}

@property (strong, nonatomic) USOSerializedGraph *reference; // @synthesize reference=_reference;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReference:(id)arg1;

@end
