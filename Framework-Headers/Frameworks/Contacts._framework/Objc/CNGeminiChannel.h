//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSSecureCoding-Protocol.h>

@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding>
{
    BOOL _available;
    NSString *_channelIdentifier;
    NSString *_localizedLabel;
    NSString *_localizedBadgeLabel;
    NSString *_handle;
    TUSenderIdentity *_senderIdentity;
}

@property (readonly, nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property (readonly, nonatomic) NSString *channelIdentifier; // @synthesize channelIdentifier=_channelIdentifier;
@property (readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) NSString *localizedBadgeLabel; // @synthesize localizedBadgeLabel=_localizedBadgeLabel;
@property (readonly, nonatomic) NSString *localizedLabel; // @synthesize localizedLabel=_localizedLabel;
@property (readonly, nonatomic) TUSenderIdentity *senderIdentity; // @synthesize senderIdentity=_senderIdentity;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
