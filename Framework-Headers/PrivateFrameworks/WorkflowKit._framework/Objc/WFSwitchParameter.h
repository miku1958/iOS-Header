//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFParameter.h>

@class NSString;

@interface WFSwitchParameter : WFParameter
{
    NSString *_localizedOnDisplayName;
    NSString *_localizedOffDisplayName;
}

@property (readonly, nonatomic) NSString *localizedOffDisplayName; // @synthesize localizedOffDisplayName=_localizedOffDisplayName;
@property (readonly, nonatomic) NSString *localizedOnDisplayName; // @synthesize localizedOnDisplayName=_localizedOnDisplayName;
@property (readonly, nonatomic) NSString *offDisplayName;
@property (readonly, nonatomic) NSString *onDisplayName;

+ (id)defaultOffDisplayName;
+ (id)defaultOnDisplayName;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)arg1;
- (Class)singleStateClass;

@end
