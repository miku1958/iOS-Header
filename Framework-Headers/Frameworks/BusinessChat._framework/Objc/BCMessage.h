//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BCImageStore, BCMessageData, BCMessageInfo, NSAttributedString, NSData, NSDictionary, NSString, NSURL, UIImage;
@protocol BCDictionaryImageSerializable;

@interface BCMessage : NSObject
{
    BOOL _isFromMe;
    NSString *_version;
    NSString *_requestIdentifier;
    NSString *_messageGUID;
    id<BCDictionaryImageSerializable> _rootObject;
    BCImageStore *_imageStore;
    BCMessageData *_messageData;
    BCMessageInfo *_receivedMessage;
    BCMessageInfo *_replyMessage;
    NSString *_title;
    NSAttributedString *_subtitle;
    NSString *_summaryText;
    NSString *_subcaption;
    NSString *_accessibilityLabel;
    NSString *_internalRootKey;
}

@property (strong, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) UIImage *image;
@property (strong, nonatomic) BCImageStore *imageStore; // @synthesize imageStore=_imageStore;
@property (strong, nonatomic) NSString *internalRootKey; // @synthesize internalRootKey=_internalRootKey;
@property (nonatomic) BOOL isFromMe; // @synthesize isFromMe=_isFromMe;
@property (strong, nonatomic) BCMessageData *messageData; // @synthesize messageData=_messageData;
@property (strong, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;
@property (strong, nonatomic) BCMessageInfo *receivedMessage; // @synthesize receivedMessage=_receivedMessage;
@property (strong, nonatomic) BCMessageInfo *replyMessage; // @synthesize replyMessage=_replyMessage;
@property (strong, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property (readonly, nonatomic) NSString *rootKey;
@property (readonly, nonatomic) Class rootModelObject;
@property (strong, nonatomic) id<BCDictionaryImageSerializable> rootObject; // @synthesize rootObject=_rootObject;
@property (readonly, nonatomic) long long style;
@property (strong, nonatomic) NSString *subcaption; // @synthesize subcaption=_subcaption;
@property (strong, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *summaryText; // @synthesize summaryText=_summaryText;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *url;
@property (strong, nonatomic) NSString *version; // @synthesize version=_version;

+ (id)defaultBubbleTitleFor:(id)arg1;
- (void).cxx_destruct;
- (id)encodedStringForDictionary:(id)arg1;
- (id)initFromOriginalMessage:(id)arg1 rootKey:(id)arg2 rootObject:(id)arg3 receivedMessage:(id)arg4 replyMessage:(id)arg5;
- (id)initWithData:(id)arg1 url:(id)arg2 isFromMe:(BOOL)arg3;
- (id)initWithData:(id)arg1 url:(id)arg2 messageGUID:(id)arg3 isFromMe:(BOOL)arg4;
- (BOOL)isAnyUnknownRootKey;
- (BOOL)isVersionSupported;
- (void)updateTitles;

@end

