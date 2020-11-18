//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSISVariableDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate>
{
    NSMutableDictionary *oldIdentsToNewVariables;
    NSMutableSet *variablesToIntegralize;
    NSMutableSet *userObservableVariables;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)firstAnchor;
- (id)firstItem;
- (id)init;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (id)secondAnchor;
- (id)secondItem;
- (id)unwrapLinearExpression:(id)arg1;
- (id)unwrapVariable:(id)arg1;

@end

