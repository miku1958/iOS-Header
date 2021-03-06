//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUICore/NSObject-Protocol.h>

@class CNContact, CNHandle, NSSet, NSString;
@protocol CNTUDialRequest;

@protocol CNTUCallProvider <NSObject>

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly, nonatomic) BOOL supportsAudio;
@property (readonly, nonatomic) BOOL supportsVideo;

- (id<CNTUDialRequest>)dialRequestForHandle:(CNHandle *)arg1 contact:(CNContact *)arg2 video:(BOOL)arg3;
@end

