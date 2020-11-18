//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInputCore/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface TILanguageModelAdaptationContext : NSObject <NSCopying>
{
    BOOL _isOnline;
    NSString *_appContext;
    NSString *_recipientNameDigest;
    NSDictionary *_recipientContext;
}

@property (readonly, nonatomic) NSString *appContext; // @synthesize appContext=_appContext;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *identifierForResponseKit;
@property (nonatomic) BOOL isOnline; // @synthesize isOnline=_isOnline;
@property (readonly, nonatomic) NSDictionary *recipientContext; // @synthesize recipientContext=_recipientContext;
@property (readonly, nonatomic) NSString *recipientNameDigest; // @synthesize recipientNameDigest=_recipientNameDigest;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithClientIdentifier:(id)arg1 andRecipientContactInfo:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 andRecipientRecord:(id)arg2;

@end
