//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView
{
}

@property (copy, nonatomic) NSString *caption;
@property (strong, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;

+ (id)summaryPod;
+ (id)summaryPodWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
