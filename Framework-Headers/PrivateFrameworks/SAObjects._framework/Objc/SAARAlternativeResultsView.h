//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView
{
}

@property (copy, nonatomic) NSString *dialogIdentifier;
@property (nonatomic) long long rank;
@property (strong, nonatomic) SAUIAddViews *resultView;
@property (nonatomic) BOOL suggestedResult;
@property (copy, nonatomic) NSString *utterance;

+ (id)alternativeResultsView;
+ (id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
