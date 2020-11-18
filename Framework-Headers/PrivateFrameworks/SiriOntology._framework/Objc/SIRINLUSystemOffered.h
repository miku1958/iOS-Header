//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriOntology/SIRINLUSystemDialogAct-Protocol.h>

@class NSString;
@protocol SIRINLUUserDialogAct;

@interface SIRINLUSystemOffered : NSObject <SIRINLUSystemDialogAct>
{
    NSString *renderedText;
    id<SIRINLUUserDialogAct> _offeredAct;
}

@property (strong, nonatomic) id<SIRINLUUserDialogAct> offeredAct; // @synthesize offeredAct=_offeredAct;
@property (strong, nonatomic) NSString *renderedText; // @synthesize renderedText;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOfferedAct:(id)arg1;

@end
