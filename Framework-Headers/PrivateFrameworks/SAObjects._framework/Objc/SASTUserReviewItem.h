//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIDecoratedText;

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SAUIDecoratedText *reviewDate;
@property (strong, nonatomic) SAUIDecoratedText *reviewText;
@property (strong, nonatomic) SAUIDecoratedText *reviewer;
@property (readonly) Class superclass;

+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
