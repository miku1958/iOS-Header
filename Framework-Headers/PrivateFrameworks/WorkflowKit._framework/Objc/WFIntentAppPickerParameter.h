//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDynamicEnumerationParameter.h>

@class NSString;

@interface WFIntentAppPickerParameter : WFDynamicEnumerationParameter
{
    BOOL _includesUserActivityBasedApps;
    NSString *_intentName;
}

@property (readonly, nonatomic) BOOL includesUserActivityBasedApps; // @synthesize includesUserActivityBasedApps=_includesUserActivityBasedApps;
@property (readonly, nonatomic) NSString *intentName; // @synthesize intentName=_intentName;

- (void).cxx_destruct;
- (BOOL)alwaysShowsButton;
- (id)initWithDefinition:(id)arg1;
- (BOOL)parameterStateIsValid:(id)arg1;
- (void)possibleStatesDidChange;

@end
