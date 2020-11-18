//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding>
{
    BOOL _canAutoAccept;
    BOOL _didAutoAccept;
    BOOL _verifiableIdentity;
    BOOL _senderIsMe;
    long long _transferTypes;
    NSString *_contactIdentifier;
    NSString *_senderBundleID;
    NSString *_senderComputerName;
    NSString *_senderEmail;
    NSString *_senderEmailHash;
    NSString *_senderCompositeName;
    NSString *_senderFirstName;
    NSString *_senderLastName;
    NSString *_senderID;
    struct CGImage *_senderIcon;
    struct CGImage *_smallPreviewImage;
    struct CGImage *_previewImage;
    NSString *_itemsDescription;
    NSDictionary *_itemsDescriptionAdvanced;
    NSSet *_items;
    NSArray *_rawFiles;
}

@property (readonly, nonatomic) BOOL canAutoAccept; // @synthesize canAutoAccept=_canAutoAccept;
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (nonatomic) BOOL didAutoAccept; // @synthesize didAutoAccept=_didAutoAccept;
@property (copy, nonatomic) NSSet *items; // @synthesize items=_items;
@property (readonly, copy, nonatomic) NSString *itemsDescription; // @synthesize itemsDescription=_itemsDescription;
@property (readonly, copy, nonatomic) NSDictionary *itemsDescriptionAdvanced; // @synthesize itemsDescriptionAdvanced=_itemsDescriptionAdvanced;
@property (readonly, nonatomic) struct CGImage *previewImage; // @synthesize previewImage=_previewImage;
@property (readonly, copy, nonatomic) NSArray *rawFiles; // @synthesize rawFiles=_rawFiles;
@property (readonly, copy, nonatomic) NSString *senderBundleID; // @synthesize senderBundleID=_senderBundleID;
@property (readonly, copy, nonatomic) NSString *senderCompositeName; // @synthesize senderCompositeName=_senderCompositeName;
@property (readonly, copy, nonatomic) NSString *senderComputerName; // @synthesize senderComputerName=_senderComputerName;
@property (readonly, copy, nonatomic) NSString *senderEmail; // @synthesize senderEmail=_senderEmail;
@property (readonly, copy, nonatomic) NSString *senderEmailHash; // @synthesize senderEmailHash=_senderEmailHash;
@property (readonly, copy, nonatomic) NSString *senderFirstName; // @synthesize senderFirstName=_senderFirstName;
@property (readonly, copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property (readonly, nonatomic) struct CGImage *senderIcon; // @synthesize senderIcon=_senderIcon;
@property (readonly, nonatomic) BOOL senderIsMe; // @synthesize senderIsMe=_senderIsMe;
@property (readonly, copy, nonatomic) NSString *senderLastName; // @synthesize senderLastName=_senderLastName;
@property (readonly, nonatomic) struct CGImage *smallPreviewImage; // @synthesize smallPreviewImage=_smallPreviewImage;
@property (nonatomic) long long transferTypes; // @synthesize transferTypes=_transferTypes;
@property (readonly, nonatomic, getter=isVerifiableIdentity) BOOL verifiableIdentity; // @synthesize verifiableIdentity=_verifiableIdentity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setItemsDescription:(id)arg1;
- (void)updateUsingCoder:(id)arg1;

@end

