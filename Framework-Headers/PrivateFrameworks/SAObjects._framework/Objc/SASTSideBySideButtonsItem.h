//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSString, SAUIColor;
@protocol SASTTemplateAction;

@interface SASTSideBySideButtonsItem : AceObject <SASTTemplateItem>
{
}

@property (copy, nonatomic) NSString *buttonsViewStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<SASTTemplateAction> primaryButtonAction;
@property (nonatomic) BOOL primaryButtonEnabled;
@property (copy, nonatomic) NSString *primaryButtonLabel;
@property (strong, nonatomic) SAUIColor *primaryButtonTextColor;
@property (strong, nonatomic) id<SASTTemplateAction> secondaryButtonAction;
@property (nonatomic) BOOL secondaryButtonEnabled;
@property (copy, nonatomic) NSString *secondaryButtonLabel;
@property (readonly) Class superclass;

+ (id)sideBySideButtonsItem;
+ (id)sideBySideButtonsItemWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

