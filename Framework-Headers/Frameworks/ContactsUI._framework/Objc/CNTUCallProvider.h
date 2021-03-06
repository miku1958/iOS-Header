//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNTUCallProvider-Protocol.h>

@class NSSet, NSString, TUCallProvider;

@interface CNTUCallProvider : NSObject <CNTUCallProvider>
{
    TUCallProvider *_callProvider;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) TUCallProvider *callProvider; // @synthesize callProvider=_callProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *supportedHandleTypes;
@property (readonly, nonatomic) BOOL supportsAudio;
@property (readonly, nonatomic) BOOL supportsVideo;

- (void).cxx_destruct;
- (id)dialRequestForHandle:(id)arg1 contact:(id)arg2 video:(BOOL)arg3;
- (id)initWithCallProvider:(id)arg1;

@end

