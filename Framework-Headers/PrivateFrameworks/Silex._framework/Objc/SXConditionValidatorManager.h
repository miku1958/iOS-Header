//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionValidating-Protocol.h>
#import <Silex/SXConditionValidatorManager-Protocol.h>

@class NSMutableArray, NSString;

@interface SXConditionValidatorManager : NSObject <SXConditionValidatorManager, SXConditionValidating>
{
    NSMutableArray *_validators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *validators; // @synthesize validators=_validators;

- (void).cxx_destruct;
- (void)addConditionValidator:(id)arg1;
- (id)init;
- (BOOL)validateCondition:(id)arg1 context:(id)arg2;

@end

