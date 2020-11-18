//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIDebugIssueReporting-Protocol.h>

@class NSArray, NSString, _UIDebugIssueReport;

__attribute__((visibility("hidden")))
@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting>
{
    NSString *_description;
    NSString *_prefix;
    _UIDebugIssueReport *_subissueReport;
}

@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description; // @synthesize description=_description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
@property (readonly, nonatomic, getter=_subissueReport) _UIDebugIssueReport *subissueReport; // @synthesize subissueReport=_subissueReport;
@property (readonly, copy, nonatomic) NSArray *subissues;
@property (readonly) Class superclass;

+ (id)issueWithDescription:(id)arg1;
+ (id)issueWithFormat:(id)arg1;
- (void).cxx_destruct;
- (void)addIssue:(id)arg1;
- (id)init;

@end

