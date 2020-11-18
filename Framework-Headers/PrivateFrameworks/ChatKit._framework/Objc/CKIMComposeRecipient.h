//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

#import <ChatKit/CKIMComposeRecipient-Protocol.h>

@class IMHandle, NSString;

@interface CKIMComposeRecipient : MFComposeRecipient <CKIMComposeRecipient>
{
    IMHandle *_handle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)address;
- (id)commentedAddress;
- (id)compositeName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)displayString;
- (int)identifier;
- (id)initWithHandle:(id)arg1;
- (id)initWithRecord:(void *)arg1 recordID:(int)arg2 property:(int)arg3 identifier:(int)arg4 address:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRemovableFromSearchResults;
- (id)label;
- (id)objectForDragType:(id)arg1;
- (int)property;
- (void *)record;
- (int)recordID;
- (void)releaseIMReferences;
- (void)setIdentifier:(int)arg1;
- (void)setRecord:(void *)arg1 recordID:(int)arg2 identifier:(int)arg3;
- (id)supportedDragTypes;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;

@end

