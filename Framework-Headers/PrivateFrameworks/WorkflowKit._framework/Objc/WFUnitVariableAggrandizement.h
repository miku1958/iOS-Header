//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFVariableAggrandizement.h>

@class NSString, NSUnit;

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement
{
    NSUnit *_unit;
}

@property (readonly, nonatomic) NSUnit *unit; // @synthesize unit=_unit;
@property (readonly, nonatomic) NSString *unitType;

- (void).cxx_destruct;
- (void)applyToContentCollection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)availableUnits;
- (id)initWithUnit:(id)arg1 unitType:(id)arg2;
- (id)processedContentClasses:(id)arg1;

@end
