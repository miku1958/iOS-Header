//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPListItemPrivate-Protocol.h>
#import <CarPlay/CPListTemplateItem-Protocol.h>
#import <CarPlay/NSSecureCoding-Protocol.h>

@class CPListTemplate, CPMessageListItemLeadingConfiguration, CPMessageListItemTrailingConfiguration, NSString, NSUUID;

@interface CPMessageListItem : NSObject <CPListItemPrivate, NSSecureCoding, CPListTemplateItem>
{
    NSString *_text;
    NSString *_conversationIdentifier;
    NSString *_phoneOrEmailAddress;
    CPMessageListItemLeadingConfiguration *_leadingConfiguration;
    CPMessageListItemTrailingConfiguration *_trailingConfiguration;
    NSString *_detailText;
    NSString *_trailingText;
    id _userInfo;
    NSUUID *_identifier;
    CPListTemplate *_listTemplate;
}

@property (copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) CPMessageListItemLeadingConfiguration *leadingConfiguration; // @synthesize leadingConfiguration=_leadingConfiguration;
@property (weak, nonatomic) CPListTemplate *listTemplate; // @synthesize listTemplate=_listTemplate;
@property (copy, nonatomic) NSString *phoneOrEmailAddress; // @synthesize phoneOrEmailAddress=_phoneOrEmailAddress;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (strong, nonatomic) CPMessageListItemTrailingConfiguration *trailingConfiguration; // @synthesize trailingConfiguration=_trailingConfiguration;
@property (copy, nonatomic) NSString *trailingText; // @synthesize trailingText=_trailingText;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentifier:(id)arg1 text:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6;
- (id)initWithFullName:(id)arg1 phoneOrEmailAddress:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end
