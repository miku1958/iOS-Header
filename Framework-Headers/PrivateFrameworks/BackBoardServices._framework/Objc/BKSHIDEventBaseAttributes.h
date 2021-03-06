//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionProviding-Protocol.h>
#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>

@class BKSHIDEventAuthenticationMessage, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, NSString;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable>
{
    unsigned short _options;
    int _source;
    BKSHIDEventAuthenticationMessage *_authenticationMessage;
    BKSHIDEventDeferringEnvironment *_environment;
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringToken *_token;
}

@property (strong, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage; // @synthesize authenticationMessage=_authenticationMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) BKSHIDEventDisplay *display; // @synthesize display=_display;
@property (strong, nonatomic) BKSHIDEventDeferringEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short options; // @synthesize options=_options;
@property (nonatomic) int source; // @synthesize source=_source;
@property (readonly) Class superclass;
@property (strong, nonatomic) BKSHIDEventDeferringToken *token; // @synthesize token=_token;

+ (id)baseAttributesFromResolution:(id)arg1;
+ (id)protobufSchema;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

