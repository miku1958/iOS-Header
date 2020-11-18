//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/NSCopying-Protocol.h>
#import <WorkflowUI/WFSlotTemplateContent-Protocol.h>

@class NSAttributedString, NSString, WFSlotIdentifier;

@interface WFSlotTemplateSlot : NSObject <WFSlotTemplateContent, NSCopying>
{
    BOOL _enabled;
    BOOL _invalid;
    BOOL _prefersNoWrapping;
    BOOL _standaloneTextAttachment;
    WFSlotIdentifier *_identifier;
    NSString *_localizedName;
    NSString *_localizedPlaceholder;
    NSAttributedString *_contentAttributedString;
    long long _userInputInsertionIndex;
}

@property (copy, nonatomic) NSAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) WFSlotIdentifier *identifier; // @synthesize identifier=_identifier;
@property (nonatomic, getter=isInvalid) BOOL invalid; // @synthesize invalid=_invalid;
@property (copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (copy, nonatomic) NSString *localizedPlaceholder; // @synthesize localizedPlaceholder=_localizedPlaceholder;
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (nonatomic) BOOL prefersNoWrapping; // @synthesize prefersNoWrapping=_prefersNoWrapping;
@property (nonatomic) BOOL standaloneTextAttachment; // @synthesize standaloneTextAttachment=_standaloneTextAttachment;
@property (readonly) Class superclass;
@property (nonatomic) long long userInputInsertionIndex; // @synthesize userInputInsertionIndex=_userInputInsertionIndex;

+ (id)addingSlotWithKey:(id)arg1;
+ (id)slotWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 key:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLocalizedName:(id)arg1 localizedPlaceholder:(id)arg2 identifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)populateWithIcon:(id)arg1 string:(id)arg2;
- (void)populateWithString:(id)arg1;
- (void)populateWithVariable:(id)arg1;
- (void)populateWithVariableString:(id)arg1 askVariableName:(id)arg2;

@end
