//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SFAirDropNode : NSObject
{
    struct __SFOperation *_sender;
    BOOL _me;
    BOOL _unknown;
    BOOL _monogram;
    BOOL _supportsFMF;
    BOOL _supportsPasses;
    BOOL _supportsMixedTypes;
    id _node;
    NSString *_contactIdentifier;
    NSString *_realName;
    UIImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
}

@property (strong) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (strong) UIImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property (strong) NSString *displayName; // @synthesize displayName=_displayName;
@property (getter=isMe) BOOL me; // @synthesize me=_me;
@property (getter=isMonogram) BOOL monogram; // @synthesize monogram=_monogram;
@property (strong) id node; // @synthesize node=_node;
@property (strong) NSString *realName; // @synthesize realName=_realName;
@property (strong) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property (readonly) BOOL supportsFMF; // @synthesize supportsFMF=_supportsFMF;
@property (readonly) BOOL supportsMixedTypes; // @synthesize supportsMixedTypes=_supportsMixedTypes;
@property (readonly) BOOL supportsPasses; // @synthesize supportsPasses=_supportsPasses;
@property (getter=isUnknown) BOOL unknown; // @synthesize unknown=_unknown;

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;
- (void).cxx_destruct;
- (void)cancelSend;
- (id)description;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (void)simulateFakeTransferWithSessionID:(id)arg1;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (void)updateWithSFNode:(struct __SFNode *)arg1;

@end

