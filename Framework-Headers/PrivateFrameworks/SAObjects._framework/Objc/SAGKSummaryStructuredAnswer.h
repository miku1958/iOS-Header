//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAGKStructuredAnswer-Protocol.h>

@class NSArray, NSString, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>
{
}

@property (copy, nonatomic) NSArray *answerPropertyGroups;
@property (copy, nonatomic) NSString *category; // @dynamic category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSString *imageCaption;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAnnotation;

+ (id)summaryStructuredAnswer;
+ (id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

