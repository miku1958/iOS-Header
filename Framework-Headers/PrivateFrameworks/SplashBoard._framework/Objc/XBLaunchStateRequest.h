//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCopying-Protocol.h>

@class FBSDisplay, NSString;

@interface XBLaunchStateRequest : NSObject <BSXPCCoding, NSCopying>
{
    FBSDisplay *_display;
    NSString *_groupID;
    long long _interfaceOrientation;
    unsigned long long _statusBarState;
    NSString *_urlSchemeName;
    NSString *_launchInterfaceIdentifier;
    struct CGSize _referenceSize;
    struct CGSize _naturalSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property (copy, nonatomic) NSString *launchInterfaceIdentifier; // @synthesize launchInterfaceIdentifier=_launchInterfaceIdentifier;
@property (nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property (nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property (nonatomic) unsigned long long statusBarState; // @synthesize statusBarState=_statusBarState;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *urlSchemeName; // @synthesize urlSchemeName=_urlSchemeName;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

